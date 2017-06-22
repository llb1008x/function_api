/*************************************************************
*                     android操作系统相关
*************************************************************/


1-3：设备上电起来后，跳转到Boot ROM(不是flash)中的boot code中执行把pre-loader加载起到ISRAM， 因为当前DRAM（RAM分SRAM跟DRAM，简单来说SRAM就是cache，
DRAM就是普通内存）还没有准备好，所以要先把pre-loader load到芯片内部的ISRAM（Internal SRAM)中。

4-6：pre-loader初始化好DRAM后就将lk从flash（nand/emmc）中加载到DRAM中运行；

7-8：解压bootimage成ramdisk跟kernel并载入DRAM中,初始化dtb；

9-11：lk跳转到kernl初始化, kernel初始化完成后fork出init进程， 然后拉起ramdisk中的init程序，进入用户空间初始化，init进程fork出zygote进程..
直到整个Android启动完成.


JNI层：
  上面我们只是说android让java开发人员能够方便的进行手机应用软件开发了，更具体的说应该是更方便的在linux操作系统上以java语言进行应用软件开发了。
所以说android不是操作系统，是linux操作系统下的一个框架。一个可以使用java语言进行开发的框架，“一个实现了通过java调用C或者C++(.so)进而linux操作系统的框架
”。这个框架是运行在linux系统上的一个程序，没有这个框架，下面的linux系统已经完全能够实现我们所需要的应用(和使用android达到一样的效果)，但是他不够人性化。
Linux强大的可移植性和java的平台无关性，两者的结合简直就是perfect。

上层应用和UI有java来完成，底层的硬件有C/C++来完成。如果底层的硬件有改动，只需要改动lib层(.so)和kernel层就可以了(我觉得叫做linux系统层更好)。
层是一个很好的概念，层代表着独立、自由。每一层的首要任务是负责自己层的事情，但是层与层之间需要沟通。Java层在实现某种功能时，如果需要调用底层的C组件，
那么就会使用JNI接口。JNI是Java Native Interface的缩写，译为Java本地接口。它允许Java代码和其他语言编写的代码进行交互。在android中提供JNI的方式，
让Java程序可以调用C语言程序。android中很多Java类都具有native接口，这些接口由本地实现，然后注册到系统中。

JNI代码放在以下的路径中：frameworks/base/core/jni/，这个路径中的内容被编译成库 libandroid_runtime.so

Java转化为字节码之后就需要虚拟机来执行了。Dalvik virtual machine。在java执行的过程中，如果java类需要使用C++函数，那么虚拟机就会载入这个C函数。
虚拟机可以让java和C之间通过标准的JNI相互调用。System.loadLibrary(*.so)这个动作就是java程序要求虚拟机载入C函数，载入之后java类和.so库就一起运行了。







/*********************************************************************************************************************************/
1.分析方法论探讨之设计意图

 
为什么要研究Android，是因为它够庞大，它够复杂，他激起了我作为一个程序员的内心的渴望，渴望理解这种复杂性。我研究的对象是作为手机开发平台的Android软件系统部分，而不是
Dalvik虚拟机本身。

作为一个从其他平台装接过来的程序员，要从事Andoid平台系统开发，我的关于手机平台上积累的知识已经不能满足需要了，Android为我们带来了大量的新名词，Activity，Manifest，
INTENT，Service，Binder，Dalvik虚拟机，Framework，Linux，Navtive ，JNI.....。通过在源代码，在开发社区，在开发博客，甚至在招聘过程中，我不断的寻求Android是什么。
经过一定时间的沉淀，我慢慢的理解到Android不仅仅是一类手机的总称，不仅仅是一个手机开发平台，不仅仅是一个虚拟Java操作系统，不仅仅是一个开发社区，一个开发标准，不仅仅是一堆代码，
Android已经成了一个新的潮流。

代码多，系统复杂，纵观社区中Android的研究者，一开始从源代码分析Android就走向迷途，不断的跋山涉水，向纵深冲刺，最终脑袋堆栈不够用，迷失在开始的旅程，或者挂在半途中，鲜有
通达者。我感觉到大部分的研究者总是忘记站在高山上向下望一望设计者的意图，一味的随着代码的控制流走入繁杂的谜团，陷入到复杂性的深渊。

我的研究分析是从设计者的意图出发，从抽象的甚至从哲学的高度，从最简单的系统原型开始，从设计猜想开始，而不是一开始就从代码分析展开。首先理解Android大的运行框架，主干流程，
系统原型，之后再用源代码分析充实之。当然我这里的设计者意图并不是真正的Android设计者意图，而是我以为的Android设计者意图。

要理解设计者意图，就需要抽象。我们需要在哲学意义空间中去考虑系统的描述，即系统在本质上要表达什么。在逻辑空间上去考虑系统基本构成和动态结构。从现实到虚拟对象的映射去理解系统
对象的组成，在从数据流的角度分析数据的产生者和消费者之间作用关系，从控制流的角度去分析对象之间的交互关系，从函数调用去分析具体的层次关系。

 
在系统设计上，原型是最能表达哲学空间和逻辑空间中系统本质的东西，原型是事物本质的第一层体现。我以为任何复杂的系统都一个简洁的系统原型，都有它简洁的意义。系统原型是设计者意图
的第一体现，所以我们需要从几个方向上去提炼系统原型：

（1）从系统本质和基本原理出发

（2）从分析系统数据流和控制流分析出发。

 
从设计者意图出发，得出系统原型，提取到大的逻辑结构和系统构成是第一步。之后我们可以从设计者的角度考虑系统猜想系统设计，为什么要这样设计，为什么要有这些构成。这样的基本原型是什么？
系统的限制是什么，应用场景有哪些，有些设计的引进还是系统收敛性而为之呢。我们还可以从代码痕迹上去分析，这些概念是如何的得来的？从一定的抽象和高度去理解这些问题，遵循系统原型出发
之原则，在深入分析代码的时候，就不容易陷入细节中。我们就可以随时跳出来想，这些代码在整体上载表达一个什么概念，在描绘一个什么逻辑，他要构成一个虚拟层吗？他是在管理这个硬件吗？他在
 虚拟这个对象吗？他在构建管理机构？还是在构建一个对象管理？空间管理，为了快速引入了什么样的复杂算法，实际上的原型算法应该是什么样的？

只有深入到这个抽象层次，我们才能很好的把握住系统的每一条线，每一个对象的意义。只用从原型出发，我们才能把握住这个系统的实质所在，在干什么？他要表达什么？设计者为什么要这样想？
最终极的想法是什么？这样，代码分析就变得简单明了，读代码就变成了是在印证猜想，修正方向。







 2.方法论探讨之概念空间篇 

 
我们潜意识就不想用计算机的方式来思考问题，我们有自己的思维描述方式，越是接近我们思维描述方式，我们越容易接受和使用。各种计算机语言，建模工具，不外乎就是建立一个更接近人的思维
方式的概念空间，再使用工具从该概念空间向另外一个概念空间映射，我称之为人性思维空间向01序列描述空间的一个映射。实现方面来看，系统就是一个翻译器，将机器性更加人性化的一种机制。
大学计算机经典课“计算机体系结构”，其他的可以忘记，但是下面这个图不能忘记：


这个就是概念空间最本质的原型体现：作为观测者看到了什么？设计者给了观察者什么？给出的答案是外部特性。

 
（1）提供给观察者的概念空间是什么？

（2）内部特性的概念空间是什么？

 
概念空间所表达的东西带有两个方面的缠绕：一面是人性自由，一面是物性制约（实时响应，系统资源的限制）。所以程序实现的概念空间是人性自由与特定计算机系统物性之间有一个折中，
并且根据实际系统而采取某种动态的平衡。而这种平衡将会影响到系统架构，以及设计的思想。特别在手机这样的嵌入式系统中，这种矛盾和平衡无处不在，这种折中无处不在。而对系统的选取和采用，
也就接受了某个方面的折中或某中即在的，也许是看不见的标准，及这样的标准有隐式和显式的。正因为如此，不管是工具的产生，新的平台的产生， 都是计算机的物性向人性靠近的一个小台阶。
一个新的思想的形成随即带来的新工具，新系统框架，新的体系结构。

 

如果设计者站的高度足够高，那么设计者一开始就会考虑到“我该给他们一个什么样的概念空间，甚至一个什么样的理念，让他们这个概念空间去建立自己的产品”，于是设计者就会开始主动的去
建立概念空间，这个概念空间要表达的实际意义，概念空间应该有哪些内容构成，考虑概念空间的完备性和封闭性，考虑概念空间的边界，考虑从哪个基础上建立这个概念空间，考虑如何与概念
空间外的实体进行交互，考虑系统的资源限制条件，考虑功能性构建的合理性，考虑机器系统与人的平衡问题。

我们在学习新系统时，首先映入眼帘的就是新概念。新名词，就如现在我们面临的Android大量的新名词，在程序员的世界都是从代码实践开始的，是从写应用开始去涉及。SDK给了我们一个概念，
我们就在这个概念框架下，使用SDK给我提供的函数接口，数据结构，初始化过程等，我们最初的接触到原型就是“HelloWorld”之类的DEMO程序，我们在Hello world上去使用各种不同的接口
函数，对于应用程序员来讲,他说看到的系统就是系统调用接口，及其编程开发流程。实际上只要一使用这些接口,就不得不接受一系列的概念,只有在这种概念系统下,我们才能工作。但是,实际上
我们却忽略了这样的概念系统的理解,只是在编程接口的这个狭窄的空间去理解系统.我们理解系统在形成理解概念的空间只是微小的一角，很少有资料来介绍这种概念系统的形成和理解,编程接口
只是这个概念空间一个，对外部的一个表征。我们可以抽象起来,以接口,协议和行为,来描述系统的情况。SDK API的实质向上层提供了一个语义接口，从而在层间实现了一个转义过程，同时又
成为一个功能的集合体。但是我们很少这样跳出来看，我们到底是处于一种什么样的概念空间，SDK除了调用接口外，还给了我们怎样一种整体概念？目标系统的基本构架在本质上的东西就是一个
概念系统到另一个概念系统的映射。让我们大脑理解的概念系统映射到计算机能实现的概念域的一个映射。我们假定这个概念域E,机器能够理解的概念域为M,我们的软件工程要做的事情实质就是：
EàM领域的一个映射过程。

 

为什么要在宏观上把握这些概念呢，显然有我的目的，理解概念空间是理解设计者意图的一个重要途径。设计者要想给开发者提供什么，设计者想要提供给最终用户什么。我们需要站在高处看待系统明白
设计者意图。

Android的实质还是一套管理手机硬件系统的软件，这个话讲起来没有多大意义,计算机操作系统本质都是如此，Android是Google云计算计划的一部分，我们修正成：Android建立的本质就是
让计算机成为我的云接入移动智能终端。作为硬件管理软件，Android提供概念空间内涵实质上泛操作系统内涵，我们的理解可以从泛操作系统概念空间映射到Android系统中去。而作为云计算
的一部分的内容，我们可以云计算的概念入手去研究Andoird。





3.手机硬件形态

本节可能与Android无关，但是Android系统现在这个阶段更多的是移动终端形态的开发平台，本节给出了Android背后的工作-Android管理的硬件是什么，Android的本质就是要管理好这些硬件
部分，为用户提供一个体验更好，速度更快的智能移动终端。对手机硬件形态的认识是要让我们对手机硬件组成有个感性的认识，让程序员知道系统中的代码是管理那一部分的，即我们堆砖头的目的
是什么，让思维有一个伸展。


为了对手机这类嵌入式系统有一个较为深入的了解，我制作了如下的手机硬件结构思维导图，在这张图上我们可以看到组成手机硬件的有哪些，初步了解到手机管理平台为什么要那么多的管理框架和
层次，从最底层理解Android设计者的设计意图，这个思维导图其实只是示意图。





4.手机的软件形态

  上节我给出了手机的硬件树，本节将给出手机软件形态树。主要突出手机软件涵盖的内容。通过该思维导图，我们可以看到手机软件所涉及到的方方面面，Android所涉及到的内容也不会超过下面
  所示太多，这个也是Andoid系统外特性空间所要展示的，这个也是Android设计者需要考虑管理的大部分内容，通过下面的整理，我们可以让我们的思维更加贴近Android设计意图，从而更深入
  的了解Android中各种组成的由来，这个就是前面讲到的分析思想之一从退到源头出发，从思考最终极的问题开始





 5.基本空间划分

  Google给了我们一张系统架构图，在这张图上我们可以看到Android的大体框架组成。

Android Applications,Application Framework,Dalvik Virtual Machine,Linux。如果将Android泛化，我们可以将系统划分成两部分：

但是为了研究的方便我们先看最为本质的三层，上面是Android，中间叫Dalvik虚拟机，下面叫Linux。

虽然上两层都包含在Android中，但是为了理解的方便或者从实用主义出发，我还是将虚拟机这次给分开出来，因为我研究的对象是Android的手机系统相关部分，对于虚拟机我们不做太深入的研究。

从上面我们可以看到这个系统静态的划分成这样的三层。但是从动态运行逻辑上不是这样划分的，所以空间的划分是一个有趣的概念。我们从操作系统的角度看，Android就是一堆Linux应用的集合。
从Linux角度看到的空间划分：进程空间和内核空间。从Android的应用对应着Linux的一个个进程。

Andoid中包含一个Java虚拟机，虚拟机是运行在Linux之上的，Android构建在JVM之上，从Android动态运行逻辑上我们需要将Android划分成Android空间和非Android空间。在Andoid系统
中我们面对的是Andoid概念空间，而不是Linux进程了，在Andoid概念空间中已经没有了Lliux进程的概念，而是Service，proxy，Activity，provider等。

至于虚拟机JVM，我们只需要知道JVM是Dalvik VM（虚拟机）这是一个专为嵌入式设备打造的ＪＡＶＡ虚拟机，是一个有着自己的code-byte和格式的可以在嵌入式设备上高效运行的Java虚拟机。

为了研究的深入，我们还是需要涉及到JNI Native部分。在这个分类中我将JVM分为JVM空间和C++空间。

Android应用的开发者是工作在Android外特性概念空间的，这里没有了Linux的一点气息，Android构建的外特性空间概念包含了：Activity,Provider,Interface,Events,Provider，
Service等。至于JVM空间和C++空间的划分是为了研究Android核心的描述而提出的，我们在做Android系统开发时，常常需要修改到JNI的Native部分。后面我将用较多的篇幅来深入阐述这个
部分。 




bootloader
{
  /*基本概念*/
  Bootloader中一般都会有好几个文件组成，如android手机一般会有：
  {
        PBL(Prime Bootloader), SBL1/2/3(Second Bootloader), APPSBL(有的也称为aboot、hboot), HLOS(基带baseband相关)和TZ(TrustZone相关的镜像)。
    而iphone手机一般是：BootRom(PBL, SecureROM), LLB(Low Level Bootloader),iBoot(stage 2 bootloader，常用于recovery模式), iBBS(精简版的ibOOT)
    和iBEC(用于从DFU-Device Firmware Upgrade模式恢复)。对于我的Exynos板子，由于其并非手机设备，包含的bootloader相对较少，有：PBL( 也叫bl0，烧在iROM的只读代码),
    BL1(stage 1 bootloader), BL2(stage 2 bootloader，就是uboot中的spl), tzsw(trustzone firmware)和uboot 
  }
}
