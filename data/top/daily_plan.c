H每日计划:
    1.每天有疑问的内容尽可能当天掌握，不把问题留给明天
    2.工作计划要高质量的完成，追求效率
    3.定期的检查，调整
    4.核心内容是“实践”，在实践中掌握知识，技能
    5.每周定期总结，处理遗留问题




2017.2.4
必须：
    1.整理好相关的文档（API/my_data） 														90%
    2.emacs，编辑器的了解，使用，vim编辑器相关的插件,emacs ,vim ,gedit三个先用好其中一个		50%(使用gedit)
    3.公积金																					0%
    4.在csdn和开源中国社区看到的内容深度操作系统的源码											0%
    5.git revert回滚操作，回撤（这个命令还有疑问，相关内容）									0%
     git commit --amend  																	50%
     	
     

待定：   
	1.移植17W05A电量计算部分(重点)，battery_common_fg_20.c ,battery_meter_fg_20.c ,switch_charging.c跟原始代码对比
    2.RT5081的文档，及使用（重点）
    3.搭建android开发环境，编译原生代码
    4.正则表达式这个是需要练习的
    
    
    
2017.2.5
必须：
	1.移植17W05A电量计算部分(重点，重中之重)，battery_common_fg_20.c ,battery_meter_fg_20.c ,switch_charging.c		90%
	跟原始代码对比，理清思路，代码工作的流程
	2.RT5081的文档，要仔细阅读(重点)																					0%
	3.完成昨天遗留的必须任务																							0%
	
	
	
待定：
	1.移植fuelgauge部分，这部分可能需要很大的工作量	
    2.研读RT5081文档和txt
    
    
    
2017.2.6
必须：
	1.验证移植的fuelgauge GM2.0是否正确，并且提交上去											100%
	2.研读RT5081的文档，代码(重点，重中之重)													30%
	
待定：
	1.完成遗留的任务	    
	
	
	
2017.2.7
必须：
	1.RT5081文档，代码通过log理清工作流程(重点)												20%
	2.读完俞闵宏那本书(全是讲道理，文采一般般)													0%

	
待定：
	1.解决一些遗留的任务
	

备注：
	17G05A开发板
	
	
2017.2.8
必须：
	1.调试17G05A开发板																		1%(因为不清楚要干什么)
	2.看代码，看文档	，看log																	20%(看完另外文档)
	3.串口线能用																				100%


待定：	
	1.解决一些遗留的任务
	2.用C语言和C++分别写my_string的库和类，感觉基本的东西都不记得了，好菜...
	
	
	读完俞闵宏那本书(全是讲道理，文采一般般)													60%(全篇的讲道理，语言重复冗杂)
	
	
	
	
2017.2.9
必须:
	1.调试17G05A开发板，弄清楚要干什么														10%(抓log追踪代码)
		对比rt5081_pmu_charger_gn20.c 与rt5081_pmu_charger.c
		看看lk，preloader ,kernel三个阶段的dws配置
	2.看代码，看文档，看log	
	3.读完那本书，计划下一本看什么书，还有大学幕课也要准备看些什么								90%(书看完了，但是后面的计划还没有)
	

待定:
	1.解决一些遗留的任务
	2.调整状态，调整心情	
	
	
2017.2.10
必须：
	1.调试17G05A开发板，抓log，追踪代码，改代码										10%(感觉写了一天的BUG，要努力)
	2.自动化脚本看看怎么写的															0%
	3.鸟哥的私房菜这本书，定好计划，大学幕课上(c++，数据结构)有点准备					0%
	
	
待定：
	1.下载win7镜像，做好启动盘
	2.双系统安装，grub操作(不太理解)，最主要的是系统安装，硬盘分区方面	
	

备注：制作好了win7启动盘，有win7，centos，ubuntu的镜像		
	

2017.2.11
必须：
	1.安装好双硬盘双系统，grub分区怎么回事											50%(系统是安装好了，但是不是双系统)
	2.搭建好android开发环境，能编译android											90%
	3.写一个c语言的string库，C++的string类											0%

待定：
	1.看鸟哥的私房菜和今天到的几本书
	2.K&R版的c语言，静下心好好研习这本书，提高自己的能力
	
	
2017.2.12
必须：
	1.移植完17W05A，功能正常															100%
	2.17G05A为什么充电电流这么小，USB又不充电，找原因，改好							10%
	
	
待定：
	1.搭建好android开发环境，能编译android，相关的软件也安装好							80%(软件没装好)
	source_insight,VMware_workstation
	2.旧iphone和新iphone																100%		
	
	
	
	
	
	
/*******************************************************************************************************************************************/	
	
	
	
	
2017.2.13
必须：
	1.找出17G05A充电电流小的原因														100%(原因是用的假电)
	2.修改代码，使充电电流正常														100%(直接换真电池就行了)
	3.抓log，追踪代码，哪些密切相关的要注意											10%
		a.关机充电
	4.试一试monkey那个脚本管不管用													100%(管用，但是手机里面应该有个monkey的二进制文件)
		
	
待定：																
	1.公开课准备，K&R的C语言
	2.梦的解析这本书，有时间看看	
    
    
2017.2.14
必须：
	1.找出USB不充电的原因															100%(USB是充电的，只是充电电流很小)
	2.对比Type-C修改为micro USB代码修改的部分											90%(注释了几个宏)
	3.慕课网C课程																	100%(C语言的基础部分)
	
待定：
	1.K&R的C语言 | KMP算法 | git rebase用法											100%
	2.梦的解析	    																0%(没看，估计是没有一个好的开始)
	
	
2017.2.15
必须：
	1.调整充电器的充电电流和电压														50%
	2.调整好心情，调整好节奏															0%
		效率不高，还很受罪，心态放宽，放松思维
	3.慕课网C课程(C基础篇)															100%
		
		
待定：
	1.K&R的C语言
	2.多实践，敢去做去实践
		
		
2017.2.16
必须：
	1.调整充电电压，电流																100%
	2.提高工作效率																	80%(比之前一天好点)
	3.慕课网，中国大学慕课的课程														100%(幕课网C课程，数组)
	
待定：
	1.实践，静下心不要浮躁		

	
2017.2.17
必须：
	1.rt5081的充电流程，电池参数，及怎么调整											20%
	2.K&RC语言，数组，幕课网C课程														0%
	3.多实践，敢于尝试，不懂多思考，多去问											20%
	(效率不高)
	
待定：
	1.静下心不要浮躁，每天要有收获	

	
2017.2.18
		放松了一天，看了一部电影(剧情有点狗血)，应该算是无聊的一天。其实无聊的时候应该给自己找点事情干
	不要整天无所事事的，每天要有进步，不能停滞不前，努力让自己变得更好，变得更优秀。发现问题要敢于面对，敢于立刻去解决处理，不能拖。

	
2017.2.19
必须：
	1.移植OTG开关到7337项目上														50%(一直反复重启....)
	2.慕课网C语言课程(函数)，中国大学慕课的课程										100%(有个递归调用，还要自己写写看)
	
待定：
	1.不要彷徨，	每天有目标，有动力，让自己变得优秀


/************************************************************************************************************************************/

	
2017.2.20
必须：
	1.17G05A电流是否能升到1.9A														90%(可能达不到1.9A)
	2.移植OTG开关到BBL7337项目														80%(还差调试)
	3.慕课网C语言课程，K&R的C语言函数部分												0%
	
待定：
	1.相信自己，对自己要有信心
	2.想开点，让自己变得优秀
	
	
2017.2.21
必须：
	1.移植完OTG开关到BBL7337上(其实更应该清楚OTG开关的工作流程)						80%(但是OTG开关的工作流程还是不清楚，应该是函数)
	2.提交17G05A提高充电代码到服务器上												100%
	3.慕课网C语言课程，中国大学慕课的课程												100%
	
待定：
	1.K&R的C语言函数部分				
	2.手机抓dump	
	
	
2017.2.22
必须：
	1.弄清楚17G05A，从init开始的工作流程(先里清楚pep20那几个)							50%
	2.慕课网C语言课程																0%
	3.梦的解析																		100%
	
待定：
	1.K&R的C语言函数部分		
	
2017.2.23
必须：
	1.解决17W05A的那个bug															100%
	2.17G05A用快充充电器的修改，不支持快充											100%
	3.慕课网C语言课程																0%
	
待定：
	1.梦的解析		
	
2017.2.24
必须：
	1.KMP算法，字符串匹配															50%
	2.堆栈的C语言实现																0%
	3.慕课网C语言课程																0%
		
待定：
	1.梦的解析
	2.搬家

		
2017.2.25
遛了一天，跑到了中关村，颐和园，有点累，新地址还没装修好，鼻炎又犯了QAQ


2017.2.26
必须：
	1.百年航母看完																	100%
	2.慕课网C语言.指针部分															0%
	3.中国大学慕课网，第二周课程														0%
	
待定：
	1.英语学习计划，制定，坚持
	2.梦的解析	
	
	
/*********************************************************************************************************************/

2017.2.27
必须：
	1.解决17W05A的那个bug，logo显示中文，应该是英文的									10%(找到了图片但是代码编译的有问题)
	2.17G05A的快充，宏还是那个变量生效												0%
	3.慕课网C语言课程，指针部分														0%
	
待定：
	1.背单词，听英语																	
	2.梦的解析					
	

2017.2.28
必须：
	1.解决昨天遗留的任务，一定要完成													0%
	2.慕课网C语言课程																0%
	
待定：
	1.被单词，听英语																	0%
	2.简单，量少但一定要完成															0%
	
这两天的执行力，效率太低，必须要改变，强化执行任务的能力



2017.3.1	
必须：
	1.修改完17W05A的关机充电logo														100%
	2.熟悉17G05A的代码流程															50%
	3.提高工作效率																	0%
	
待定：
	1.看书，梦的解析，一定要静下心，不要浮躁
	2.听听英语，听听历史，慢慢来	
	
要有一种危机感，时刻提升自己才能向前	


2017.3.2
必须：
	1.熟悉17G05A的代码流程															20%
	2.分析昨天因为mmi测试导致的充电失败的原因											80%
	3.提高工作效率
	
待定：
	1.中国大学慕课的课程，数据结构和算法，感觉很有收获，要坚持							100%
	2.看看书，听听故事或者英语	


2017.3.3
必须：
	1.分析mmi测试导致充电失败，两个log，代码调用的流程									0%
	2.能不能提高17G05A的充电电流，库仑计等相关参数是在哪调用读取的						0%
	3.中国大学慕课网，数据结构，K&R的C语言，指针数组部分								0%

待定：
	1.提高工作效率
	2.听听英语，听听历史
	
2017.3.4
好吧又是休息了一天，傍晚还被人叫去加班QAQ	



2017.3.5
必须：
	1.BBL7337 OTG开关为什么不管用，17W05A的两个patch怎么打进去						80%
	2.两份log，mmi测试导致充电失败的log，关机重启的log，这两个log都要重点分析			0%
	3.中国大学慕课网两个课程的编程作业												0%
	4.一定要打起精神，努力完成今天的计划												20%
	
待定：
	1.K&R的C语言，指针数组部分	
	
/************************************************************************************************************************/	

2017.3.6
必须：
	1.mmi测试导致充电失败的log以及修改的方案											100%
	2.关机重启bug的log，以及关机，重启的整个流程										30%
	3.两个patch合入17W05A项目验证													0%
	4.完成上周的作业																	0%

待定：
	1.要有危机意识，打起精神工作
	2.C语言画椭圆那个算法以及代码实现
	
	
2017.3.7
必须：
	1.分析启动，关机，重启的log流程，如何抓上层的sytem，main log						50%
	2.合入patch，前提知道是哪些是跟fuelgauge相关的									0%
	3.中国大学慕课网C语言课程，K&R的C语言指针数组部分									0%
	
待定：
	1.打起精神，努力工作，提高自己的能力是最重要的，只为追求卓越	
	

2017.3.8
必须：
	1.分析关机，重启的log，走的什么流程												100%
	2.熟悉G1605A的代码，想想那个特性应该怎么写										0%
	3.调整工作时间，不然有些任务一直无法完成，这样下去不行								50%
	
待定：
	1.提高工作效率，必须有危机意识，不能放松
	2.中国大学慕课网C语言，K&R的C语言指针数组部分，一定要着手看了，不要只是计划		
	
	
	
2017.3.9
必须：
	1.相关的文档，代码分类整理好													 	100%
	2.熟悉G1605A的代码流程，想想特性应该怎么写										100%
	3.中国大学慕课网数据结构，那几个代码怎么写											80%
	
待定：
	1.提高工作效率，每天要有进步	
	

2017.3.10
必须：
	1.在G1605A上实现电池维护特性													80%(有待完善)
	2.中国大学慕课网，C语言最基本的部分，一定要动手写，思考							 0%
	3.阅读，熟悉17G05A或者G1602A的代码											0%
	
待定：
	1.放宽心态，不要对一些琐事斤斤计较，要大度
	2.追求卓越		


2017.3.11
爬长城爬了一天，有点累。



2017.3.12

必须：
	1.看一两部电影，遇见大咖														100%
	2.中国大学慕课网，可以定要看完，对应的C语言的书(这个任务今天必须完成)				  100%	
	3.回顾这一周的事情，反思才能提高												  100%

待定：
	1.提高看代码，写代码的能力	




/***********************************************************************************************/

2017.3.13
必须：
	1.完善电池维护代码的逻辑，功能要实现												70%
	2.熟悉G1602的代码，烧写                                                       0%															
	3.慕课网C语言，K&R的C语言指针数组部分(要有执行力度)					              0%

待定：	
	1.看的懂代码，也要能写出来
	2.追求卓越


2017.3.14
必须：
	1.熟悉G1602A的相关代码，烧写													5%
	2.处理一些琐碎的事，一些基本的东西												100%
	3.先把慕课网的C语言指针看完，然后是中国大学慕课									0%

待定：
	1.把电池维护的工作移到周末，不然总是不能完成，同时影响其他工作进度
	2.工作要有效率，理解能力，分析问题能力要加强	


2017.3.15
必须：	
	1.熟悉BBL7505A的代码，理清思路，计划怎么添加这个功能								 80%
	2.17W05A的充电测试，做事要细心													20%
	3.慕课网的C语言指针课程，K&R的C语言指针数组部分									  100%

待定：
	1.提高工作效率	


2017.3.16
必须：
	1.熟悉BBL7505A的代码，今天晚上编译吧											 100%
	2.调整心态，我觉的最近的心态很有问题											   50%
	3.有些事想要做的要去做，不要拖延，不要害怕，不要在乎别人的想法，要关乎自己			  80%

待定：
	1.计划数据结构这本书的学习计划，不然这样拖下去，都不知道要学到什么时候





2017.3.17
必须：
	1.BBL7505A项目的OTG开关，基本功能要实现										50%
	理清了一些细节
	2.数据结构第一章结束，上面的一个一页的想法要实现，开始第二章						 20%
	3.就是关于绩效今天要写完了													0%

待定：	
	1.中国大学慕课网，数据结构的课程	



	数据结构这周的计划
	{
		最基本的要求：
		1.课程内容要看完，上面的例子要掌握
		2.数据结构这本书上的线性表部分，这部分内容是很基础但是也非常重要，基本的C语言怎么实现要会
		3.完善自己写的库，自己写的代码要清楚，怎样更完善，更好的调用，使用
		4.任务以完成量为准，不能以时间为准

		day1
		1.链表及其实现		
		->算法书的第一章
	}


2017.3.18
去圆明园玩了大半天，话说圆明园真是有点大，古代帝王的宫殿，真是可惜



2017.3.19
必须：
	1.今天最重要的任务是在BBL7505A上做好OTG开关，这是今天必须要完成的							30%
	2.关于绩效的内容尽量在今天完成														0%
	3.思考一下C，数据结构，英语这三个的学习计划，做事情要专一，专注							  0%

待定：	
	1.就是努力提高效率，完成自己设定的任务
	2.回顾这周的工作，哪些是比较重要，哪些是未完成的




一周总结：
	首先想学的有很多，但是每样都只学点皮毛，这点是没有什么用的，你想追求卓越，追求更好的自己，必须学会专注，对一件事情
	做好，做精，做出自己的特色，在一个领域要想有所建树必须深入的学习。

	所以当前阶段很重要的并且是很重要的任务就是学好C语言，而且英语这种东西积累是很重要的
	C语言：
		K&R的C语言书 + 慕课网的视频

	英语：
		每天坚持听英语 + 看英文的文章	

/****************************************************************************************************/	
***关于C语言，这周最基本的要完成指针部分的学习

2017.3.20

	1.绩效考评完成							***												100%
	2.BBL7505A的OTG开关功能			 		*****											 80%(基本功能可以实现，还差一点逻辑判断)
	3.C语言指针部分							**												100%	
	4.英语阅读，听力在于平时多积累，多听，多看    **											   100%


2017.3.21		
	1.type-c协议，熟悉相关内容				  		  ***										100%
	2.完善BBL7505A的OTG开关的逻辑，对比总结			   ******									  90%
	3.C语言指针，字符串，数组							***										   90%
	4.坚持阅读英语新闻，被单词，句子					 **											 80%


2017.3.22
	1.算法爱好者上的那篇文章							**										  100%
	2.BBL7505A的OTG开关的一些问题，确定是否能提交上去	   ****										 100%
	3.完善电池维护代码逻辑							 ***									   90%
	4.C语言指针，字符串，数组等课程的内容				***										  90%						
	5.坚持看英语新闻，背单词，句子					  **										100%


2017.3.23
	1.I2C两篇博客看完								   ***									  100%
	2.G1602A的USB/OTG，根据log熟悉代码				 ****									  100%
	3.K&R C语言指针部分，理解书上的源码，练习怎么写		 ***								  0%
	4.看英语新闻，看懂意思，背单词，句子				   ** 									  80%
	
	
2017.3.24
	1.根据log熟悉G1602A的代码						****									 100%	
	2.理清W919要负责哪些内容							***										0%
	3.C语言指针部分，强化将理解能力，思维能力			***										 0%
	4.看英语新闻，拼图95飞机(好激动)					**										 100%


2017.3.25
基本上花了一天的时间拼完了图95轰炸机，虽然比较大，但是细节不是很好，恩就是这样
然后因为代码没有merge进去，有跑到公司来QAQ，做事情一定要认真，仔细，负责		


2017.3.26	
	1.理清G1602A的开机启动log，分析功耗问题，G1602A的代码					***					 100%
	2.W919USB充电电流较小的问题要解决，马达，按键的驱动在哪	  			 ****				  20%
	3.C语言指针，数组部分											  ***					0%
	4.看英语新闻，怎么顺手怎么看，但是能力要提高							  **					0%
	5.总结这周的工作													*****				 100%	




改版后的daily_plan效率好了一点，要不断的总结，完善，养成合理的生活习惯，敢于改变，想做什么不要拖延，敢于做自己向左的
/****************************************************************************************************************/

2017.3.27
	1.熟悉G1602A的代码，首先是功耗问题，高通之前的几个case				 *****					100%
	2.读书，静下心												   ***					  100%
	3.看英语新闻，听英语												 **						100%



2017.3.28
	1.熟悉G1602A的代码，追踪代码，重点提高对功耗问题的分析能力			  *****					 100%
	2.BBL7505A的OTG开关功能验证									  ***					 100%
	3.读书，每天都要读书，提高自己的修养								    ***					   100%
	4.看英语新闻，听英语												 **						80%


2017.3.29
	1.无线充电那些文档，跟type-c的文档								  ***					 100%
	2.熟悉G1602A的代码，追踪代码，重点提高对功耗问题的分析能力			  ****					 100%
	3.读书，坚持下去												  ***					 0%
	4.看英语，考虑要不要背背单词，英语学习计划要修改完善					  ***					 0%


	有点迷茫。有被人打击了QAQ


2017.3.30
	1.G1602A的OTG工作流程及相关的代码								   *****				   60%
	2.高通的关于pmic的主要文档										***						0%
	3.调整好心态，不被打击怎么有动力，要坚强							  ****					  40%
	4.看书，每天坚持给自己充电，多读书，多思考问题，不要浪费在无意义的事情上  ***					   80%
	5.坚持看英语，水平太菜，不前进就是被淘汰							  **					  80%



2017.3.31
	1.处理完功耗问题												  ***					  100%
	2.熟悉G1602A的代码，高通的几个pmic文档				    		  ****					  0%
	3.坚持看书，多思考，有自己的想法，敢于实现，敢于做					   ***					   0%
	4.坚持看英语，不要想太多，最舒服的办法，寻找最有效的办法				 **ni						 80%



2017.4.1
	1.处理完功耗问题，总结相关的内容								     ****					 80%
	2.提高效率，认真完成工作内容										   ***					  40%
	3.着眼提高，每天要有进步，对这方面要有明确的计划						****					40%
	4.坚持看英语，看书，每天看一点，看能走马观花，要走心					   ***				      0%


2017.4.2
今天相当于完了半天，起了半天的车，绕了半个北京城；
给有些东西分好类了；
看了乘风破浪这部电影，虽然更喜欢颖宝了，好喜欢，但是整部电影，韩寒想干什么，还没想明白



总结这周工作
效率一般，有待提高
要看书，一本一本看，静下心，不能太浮躁，谁的青春不迷茫看完
下一步是操作系统，鸟哥的私房菜，还是linux内核，但是我更想提高自己的C语言功底
英语一个是单词，关于句子的分析，还有最后一步是阅读和听力
/****************************************************************************************************/

2017.4.3
	1.调试W919+，主要是关闭软件关机，USB充电，mmi测试（其他项目是怎么加的）			*****				20%
	2.整理好功耗问题，原因，分析，后续完善分析处理办法							    ****				0%
	3.电池维护代码完善														  ***				  0%
	4.坚持看英语，看书，运动健身												   ***					80%
	5.制定英语的作战计划														 ****				  0%

真是，整一天都没有整出来，上面那三条作为下周额外工作的核心，在没有紧急情况下，有限完成


2017.4.4
	1.看一部电影，美丽人生，写写观后感，自己之前看过的电影，不做旁观者，有些自己的想法跟看法				×××				100%
	2.看书，谁的青春不迷茫，有些句子还是比较好的，可以适当摘下来，英语背单词计划，做自己的事不要想太多		 ××××			 100%
	3.中国大学慕课网，操作系统课程，看看怎么样，如果不错，就要确定一步做什么，看什么					   ××××			   80%
	4.最后一点应该是执行力的问题，做事要果断，有效率，有质量										   ×××			   80%

事实证明操作系统那门课又是老和尚念经，还是不要影响我对这门课的兴趣


2017.4.5
	1.17G05A关闭软件关机重启，今天必须要完成									****			  50%
	2.电池维护代码逻辑，功能要完善											  ***			   0%
	3.功耗问题处理完														  ****				0%
	4.看书，思考一些问题，背背英语，诗歌，记忆力太差								***				 70%
	（看的哪些内容都不记得，更别说思考）					


2017.4.6
	1.W919+关闭软件重启													  *****		         60%
	2.售后问题的机器，确定原因是不是跟自己想的一样							   ****				   60%
	3.功耗问题，对待一个问题，要有能够深究的精神，刨根问底，重视					  ***				  0%
	4.看书，看英语，不要走马观花，翻翻而已									  **				 100%


2017.4.7
	1.售后问题弄清楚原因														***				   10%
	2.处理完功耗问题														 ****				 50%
	3.软件关机重启														  ****				 60%
	4.看书，看英语，要坚持												   ***				   0%


2017.4.8
看了一部电影，辛德勒的名单，关于人性，救一个人，就等于救了整个世界，可以思考思考，写写观后感。
看完了刘同的谁的青春不迷茫，怎么说呢书中有很多写的比较好的句子，但是整本书想表达的中心观点很不明确
或者说是一本日记+作者日后的评论，没有一个整体的框架。
着手看C语言，可能K&R的C语言比较精简和难懂，一直难以持续的学习，C语言基本功打好，有好的代码编写能力。


2017.4.9
	1.完成电池维护功能的开发，完善代码逻辑，没有bug							    ****			  90%
	2.功耗问题分析总结														 ***			   100%
	3.调试W919+，自己的第一个项目一定要认真细致完成								 ****			   0%
	4.看英语，看C语言，万丈高楼一定要有坚实的基础								***				   80%
	5.一周总结


年轻，有点追求，有点想法
此路不同，换条路，不要在一条路上卡死，既然不能走，做好最坏的打算，然后试着接受
固定的计划+可变的思路，思想不要被自己限制死
/*************************************************************************************************************/


2017.4.10
	1.看看电池维护log有没有异常，把那个1，0换成有意的变量						   ***				90%
	2.处理17W05A的BUG，减少log冗余，但要保留一些重要的log						  ****				80%
	3.处理功耗问题，那台可能有问题机器的待机电流									****			  0%
	4.看英语，看C语言，适应调整，去改变，才会变									 ***			 100%


2017.4.11
	1.减少17W05A 充电log冗余，看邮件优化了哪些									***				 100%
	2.处理完手上的功耗问题，那台机器的待机电流									 ***			  100%
	3.处理完手上其他的bug，有些问题要追踪									   ****				 60%
	4.看英语，看C语言，去思考，敲代码，实际行动实现自己的想法					    ****			  90% 


2017.4.12
	1.电池维护特性新功能，解决bug(自己写的代码万一上去了，阔一啊) 				    ****			 20%
	2.W919有哪些问题，哪些是需要调试解决的，熟悉代码流程结构						 ****			   70%	
	3.以前收集的博客文章，看一看（放轻松，带着娱乐的精神，但是要看进去）				***				 100%
	4.看C语言，you get what you pay for                                    ***				 100%


2017.4.13
	1.修改完善电池维护代码												   ****				 100%
	2.调试W919+今天重点解决电流小的问题										 ****			   80%
	3.看看博客，看进去，重点在理解吸收										   ***				 20%
	4.看C语言，敲代码														 ***			   0%


2017.4.14
	1.心态又出现了问题，怎么总是出现问题，人不能闲着，闲着就容易胡思乱想
	让自己忙起来，减少胡思乱想的机会还是还一种方式								  ****				80%
	2.调试W919+，充电电流太小，要能自己调节电流电压								***				  80%	
	3.放轻松，不能在一个问题上吊死，换个思路									 ****			   0%
	4.看C语言，既然决定好了，就要坚持做下去，要有收获							  ***				0%



2017.4.15
周五看了速度与激情8效果很好，开核潜艇，鱼雷，热弹，6666
一个人看电影到可以，想看就看，但是去餐厅吃饭一个人真没有勇气，所以天天叫外卖，我也没办法啊
又看了宫崎骏的一部电影“起风了”，起风了，唯有努力，将一个人从小追逐梦想的过程，既然想做一件事就要把他做到极致，
不要在意的太多，不要太在意别人的看法，你所要做的就是如何一步一步实现自己的梦想，接近梦想
																   		---做你想做的，追求卓越


2017.4.16
	1.熟悉W919+的代码，对比那几个文件，调节充电电流								 *****			80%
	2.C语言里的数据结构那章几天消化完											****			0%
	3.调整心态，不要浮躁，静下心，专心投入的状态才是最好的						 ***			0%
	4.一周工作总结														  ***			  0%

最后一天效率很差，因为心态很差，一个好的心态有助于很多事情的高效执行
/****************************************************************************************************/

2017.4.17
	1.处理完手上的BUG，功耗问题											   ***			  100%
	2.W919+充电电流调试和一些概念，调节的控制量								  ****			  80%	
	3.看看英语，看看C语言													***				80%
	4.调整心态，为人处事方面很有问题											****			0%


	讲话要口齿清晰！！！！


2017.4.18
	1.充电电流调节几个概念以及注意的地方										 ****			  90%
	2.电池维护代码没有保存出来，又要重新修改									****			 100%
	3.处理手上的BUG														 ***			  90%
	4.看看C语言，找房子													   ***				100%


2017.4.19
	1.熟悉17G05A键盘的工作流程											  ****				60%
	2.电池维护代码看看还有没有问题										   ***				 50%
	3.调整心态，某些事情要提上日程了，要认真对待								  ****				0%
	4.看看C语言，要走心，要提高，道路还很长									***				  0%


2017.4.20
	1.电池维护代码没有保存出来，又要重新修改								   ***				  0%
	2.cmcc的bug处理完													 ****				90%
	3.17G05A的按键工作流程和代码											 ****				0%
	4.决定做什么事，就要认真完成											   ***				  0%


2017.4.21
	1.电池维护代码今天完成												 ****				100%
	2.熟悉17G05A的按键代码和工作流程										****			   100%
	3.看C语言，要动手写代码，思考东西										  ****				 0%
	4.专心做事，其他的事情，下班再说										  ***				 50%


2017.4.22	
	找房子，怎么说呢，一方面是自己社会阅历不够，另一方面有些事确实是当局者迷旁观者清，
如果处在旁观者的角度可以清楚的思考一些问题，但是如果自己直接面对的时候很容易犯迷糊，赔进去500


2017.4.23
	虽然距离远了点坐车更挤了，但是居住环境好了很多，还是做事还是找人商量好点，忙活了一天，可以舒服的葛优躺。


整体效率不高，很多事都是0%，都是计划了但是没有执行或者根本没有想过，做了计划就要坚决的执行，要提升自己的技能水平
/****************************************************************************************************/

2017.4.24
	1.调试W919的键盘，熟悉流程，看懂代码的实现，特别是input子系统			    *****			  60%
	2.看看技术博客，扩展知识面												 ***			   0%
	3.C语言，今天的任务是字符串和相关的操作									 ****			   10%
	4.采购生活物品														 ***			   100%


2017.4.25
	1.熟悉17G05A的按键代码和工作流程										 ****				90%
	2.看点相关的技术文档													   ***				  90%
	3.C语言相关的内容(速度太慢)											  ***				 100%
	4.调整心态，每天要进步												   ***				 80%


2017.4.26
	1.按键的软件代码+线性马达，马达先熟悉相关内容，要调试出点效果				  *****				90%
	2.看看技术博客，这点最好是专题或者针对一个点看全面点							 ****			   20%
	3.C语言字符串相关的操作函数能自己写出来，能按照自己的想法写代码				  ****				90%
	4.调整心态此路不通，换一条路												 ***			   20%


2017.4.27
	1.线性马达调用，调试出效果，知道怎么用，怎么改							   *****			90%
	2.看文档，博客，看进去才有效果											****			  80%
	3.C语言结束第四章，课后练习尽量完成										   ****				50%
	4.每天要有进步，提升，有危机感											***				 80%


2017.4.28
	1.写个测试程序调用马达的设备节点，调试效果									*****			 80%
	2.字符设备驱动这块内容重新熟悉一边										   ****				0%
	3.C语言第四章，严格要求自己												  *****			   0%
	4.调整心态，乐观，积极，细致												 *** 			  50%


2017.4.29
出去转了一天，颐和园，鸟巢，又一次刷新了走路的步数，总结一句话就是节假日不适宜出门，周末还是可以的


2017.4.30
	1.C语言第四章看完														 *****			 100%
	2.字符设备相关文档和ppt看完											  *****			   0%
	3.收集的一些博客看一看												   ***				0%
	4.制定下一个月的工作学习计划,这周工作总结									 ***			  0%


很多事没有严格要求自己，制定的任务一定要努力完成
/************************************************************************************************************/	
	

2017.5.1
	可能还是处在假期当中，很多事想做但是们没有去完成，事情要一步一步来，努力做好每一步才是关键，不要东一个西一个到头来什么都没有完成
当然制定的计划也要存在一定的选择余地，有变动更加灵活

	1.中国大学幕课网C进阶课程+C语言书										
	2.字符设备ppt内容
	3.博客收集的文章+博客专栏有系统有体系全面的看看


2017.5.2
	1.字符设备驱动													  	 ****			 90%
	2.调试马达驱动														 *****			 90%
	3.C语言相关的内容，malloc，指针，数组，字符串								 ***			 90%
	4.看看那博客专栏上的文章												  ***			  100%


2017.5.3
	1.调试马达驱动，调试出效果，关键要出效果									*****			80%
	2.C语言相关的malloc，指针，字符串操作								 	   ****			    80%
	3.看看博客专栏的文章+无线充电											****			30%
	4.保持一个好的心态，要淡定，不能浮躁										 ***			  50%


2017.5.4
	1.以工作为主，其他都是次要的												****			100%
	2.今天最主要的工作就是调试马达，调用相关的函数，调试出效果					  *****			  100%
	3.C语言枚举，指针，写完字符串相关的操作函数								   ****				80%
	4.保持一个好的心态，不急躁，细心，有耐心，能看进去							 ***			 80%


2017.5.5
	1.总结马达调试工作，还有些特别的效果没有出来，今天晚或周末看完那个文档		  ***			  100%
	2.调试充电涓流，恒流，恒压三个状态正常，快速关机kpoc，充电时长，稳定性		   *****		    60%
	3.C语言结构体视频+书												   ****				20%
	4.保持一个好的心态，无关紧要的事不要多想，反复想							 ***			  10%


2017.5.6~7
	之前周末的状态很有问题，制定的策略要严格执行，有些不好的习惯要坚决去改
提高自己的自控力，能合理掌控自己


意识到问题的严重性，就要坚决的去改，去执行
**********************************************************************************
2017.5.8
	1.充电时序过程中出现的问题，电流电压变化，充电(开机，关机)，放电				 *****			 80%
	2.针对驱动功能的checklist审视自己负责的工作								   ****			   0%
	3.看英语，linux设备驱动													****			100%
	4.严格执行自己的计划													   ****				80%


2017.5.9
	1.驱动功能checklist审视自己调试和处理工作								   ****			   60%
	2.调试开机充电过程的充电时序，哪些不正常									*****			90%
	3.研读linux设备驱动+代码，空闲时间多看看英语								 ****		  	 100%
	4.严格执行自己的计划，合理控制好自己的情绪和心态							  ***			  80%		


2017.5.10
	1.调试充电时序问题，恒流充电电流变化，关机充电							   *****		  80%
	2.构建好linux内核的环境，编译，阅读代码									   ****			  70%
	3.研读linux设备驱动，多看看英语											  ****			 80%
	4.严格执行自己的计划，合理调整完善										   ***			  80%


2017.5.11
	1.调试开机充电过程中出现的问题，特别是电流变化，温升问题						*****		   80%
	2.项目编译脚本，用的是哪个文件，以及其中的参数调整							  ****			 60%
	3.构建linux内核编译的环境，创建好kernel项目工程							   ****			  60%
	4.研读linux设备驱动，内核源码，多看英语									    ***			  60%


2017.5.12
	1.开机充电过程还有哪些问题，代码是否能提交									 *****			90%
	2.马达驱动那里还有哪些不懂的，交流沟通一下									 ****			0%
	3.搭建好开发环境，用好自己的开发板，必须提高自己的实际动手能力，关键在实践		  ****			  20%				
	4.研读linux代码，多看看内核，设备驱动，这些技能是以后的生存技能					****		   20%


2017.5.13~14

	周末玩了一天，运动了半天，我觉得多运动身体更健康，生命在于运动，现在最大的问题就是不能长时间的专注做事
这个是迫切需要改变的，专注的投入，把兴趣坚持成一种习惯；基础只不过是起点，在奔向目标的路途中，思索和矫正才是左右肩



坚持自己的计划，坚持运动，专注的投入，做好，做精一个方面,既然是单核，那就把一件事做到极致。
********************************************************************************************************		


2017.5.15
	1.把rt5081和马达的文档看完												*****		   30%
	2.整理前面调试的几个方面问题，还有哪些需要调节的							   ****			  0%
	3.玩透4412开发板和各各模块+linux设备驱动(这个是当前也是最主要的任务)			*****		   0%
	4.放宽心态，想不通的事就不要想											 *** 			80%


2017.5.16
	1.处理完手上的BUG														  ****			 100%
	2.研读完rt5081和马达相关的文档，整理之前调试的文档							*****		   80%
	3.玩透4412开发板，各各模块，linux设备驱动									****		   0%
	4.放宽心态，调整节奏，每天要有进步											***			   80%


2017.5.17
	1.列好学习计划，合理有效，坚持每天的学习量，只有进步才能走的更好				 ****			90%
	2.将17G05A上的部分修改移植到17G10A上，继续调试工作						  *****			 60%
	3.17G10A上的LDO部分，这部分有必要深入研究									*****		   0%
	4.学习C语言，合理计划+坚持	  											   ***			  100%


2017.5.18
	1.对比17G10A与17G05A的差异，把自己负责的模块代码移植过去，验证功能正常		    *****		  100%
	2.昨天那个邮件，不同温度下修改充电电流，还有电池的什么C，密度等概念				  ****		    90%
	3.学习C语言，参考代码，自己写代码，优化代码，提高自己的能力						****		  0%
	4.合理计划+坚持，调节自己的情绪，掌控自己									  ***			80%


2017.5.19
	1.今天最主要的任务是理清根据温度调节充电电流问题以及相关的温升问题				 *****		    80%
	2.研读bcct相关的代码													  ****			 30%	
	3.列好最近阶段C语言学习计划												  ****			 0%
	4.调节情绪，放宽心态														***			   80%


2017.5.20~21
	生命在于运动，坚持运动，循序渐进的提高强度；周末的生活状态好了很多，但是还是感觉有点无所事事，
进一步优化，丰富完善周末生活，最主要目的是提升自己的能力，朝着自己的目标前进


*****************************************************************************************************
2017.5.22
	1.先看看温升相关文档，然后理解代码的思路，温升相关问题的解决办法				 *****			 90%
	2.研读温升相关代码														****			0%
	3.利用好时间做自己最需要做的事，优化自己的计划 							   ****			   30%
	4.放松心情，多运动，多思考												  ***			  100%


2017.5.23
	1.几篇想看的博客看完，作者的思路意图方法									 ***			 100%
	2.温升相关的代码，关键是理清整个的思路和流程									*****			80%
	3.想做什么事就去做，既然决定做了，就要坚持到底							   ****			   80%
	4.多运动，我要练肌肉，心态要好											****			 100%


2017.5.24
	1.linux内核之旅，linux爱好者的几篇文章									 ***			 100%
	2.继续研读温升相关的代码，配置文件参数的意思怎么修改							 *****			 0%
	3.装好桌子，弄好环境，学习环境要舒适，努力学习							   ****			   100%  	
	4.多运动，放松心情，心态要好												 ****			 90%


2017.5.25
	有很多事要做，很多东西想学，但是总是不能专注，不能投入，不去改变这样下去会有很大的问题
如果想变的出色，年轻时候不努力不行，要想办法去改变这种状态


2017.5.26
	1.验证G1605A待机过程中出现的关机问题										***				90%
	2.研读17G05A的温升代码，配置参数										 *****			  60%
	3.我是读红楼梦还是看K&R的C语言											 ***			  0%
	4.心情要好，思想要灵活，要有自己的想法									 ****			  0%


2017.5.27
	1.处理掉手上杂项任务													  ***				90%
	2.一切一工作为主，做好工作上的事										  *****				0%
	3.签名软件如何编译，温升相关的代码										  *****			   100%
	4.我觉得当前自己水平还很差，工作之外最主要的目的，任务就是提高自己的能力		 *****			   80%


2017.5.28~30
	三天假好像也么干什么，生活好像没有计划，都不知道要干什么，是过的太枯燥还是没有灵活的调整
	计划经济还是市场经济，这样生活容易越变越僵化，这样的计划短时间内会提升效率，但不是长久之计。
	生活既要有固定的必须的计划也要有润滑剂去调节每天的生活，为了更好的生活还是为了梦想，为了未来。


*****************************************************************************************************
2017.5.31
	1.一切一工作为主，做好手上的工作，这是现在主要来源，也是下一步的跳板			  ****				90%
	2.将电池维护代码移植到17G05A上											 ***			   100%
	3.总结一下调试工作，还有哪些欠缺的，下一步做什么							 *****			   80%
	4.今天计划看10~20页书，其他自由安排									   ****				 80%


2017.6.1
	1.总结手上的调试工作，还有哪些是要做的，比较重要的							***				 20%
	2.熟悉17G05A的软件代码和工作流程，实践+细心								 ****			  0%
	3.金刚三的软件和高通的文档，替换TI的IC									  ****			   20%
    4.看书，写代码，其余自由安排												***				 0%


2017.6.2
	昨天的状态非常差，好像什么都没干好，需要调整好状态，找到工作的核心，该做什么，怎么做	


2017.6.3~4
	周末好像看进去书了，再接再厉，坚持下去，坚持看书，努力学习


*****************************************************************************************************
2017.6.5
	1.金刚3相关的文档，和替换料相关的文档，没做过高通，而且差异会有点，要细心		 ****			 90%
	2.工作要尽心，一切以工作为主，提高工作效率								   ***			   80%
	3.看书，提高自己的水平，理解为主，能静下心看书							  ****			  100%
	4.调整心态，在意对自己重要的，无关的事不要想								  **			   100%


2017.6.6
	1.调试17G10A的板子，功能先正常											 ***			  90%
	2.看金刚3相关的文档，还有相关的代码										  ****			   80%
	3.坚持看书，每天看一点，每天多看一点										 ****			  0%
	4.调整好心情，提高工作效率												***				  0%



2017.6.7
	高考第一天，状态需要调整


2017.6.8
	高考第二天，好吧跟你没有半毛钱的关系
	1.金刚三的软件代码流程，文档												****			100%
	2.以工作为主，专注做事												  ***			  90%
	3.看书，坚持每天看书													   ****			   100%	
	4.调整心情，努力过好每一天												 ***			 90%


2017.6.9
	1.继续研读msm8937的代码和文档											  ****			  100%
	2.坚持看书，只要是自己喜欢的，每天多看一点								   ****				80%
	3.以工作为主，努力做好自己负责的每一件事									***				90%
	4.保持好的心态，处理好每一件事										   ***				90%


2017.6.10~12
	旅游假


2017.6.13
	1.调试17G10A的一些BUG，重点是解决问题									****			 90%
	2.研读一些相关的代码，文档												 ****			  0%
	3.多看书，现在的每一步都决定你的未来怎么样									***			   	50%  
	4.调整心态，过好每一天												  ***			   0%


2017.6.14
	1.处理掉手上的BUG													     ***			 90%
	2.调试17G10A的一些问题，充电问题优先										****		    90%
	3.寻找最适合自己的方式，多看书											****			0%
	4.心态要好															   ***			   100%


2017.6.15
	1.调试17G10A的一些问题，mmi测试数据不对以及数据上报的问题					  ****			  60%
	2.熟悉17G10A的软件代码，有时间解决手上的bug								   ***			   20%
	3.每天要有进步，不一定非要看书，但要有收获									****			90%
	4.心态要好，要健康														***				90%


2017.6.16
	1.调试17G10A，今天重点解决mmi测试问题									*****			 80%
	2.17G10A其他的一些bug，分析，解决方向									****			 0%
	3.每天要有进步，过的充实												 ***			   90%
	4.心态要好，想做什么做什么，不要犹豫										 ***			   60%


2017.6.19
	1.重点处理17G10A的mmi测试不通过，数据显示问题							 *****			  0%	
     根本没有处理，编译都卡的要死
	2.编译17G16A的代码，处理17G10A上的已知BUG								 ****			  80%
     编译没有通过
	3.每天保持一定量的学习进度，中国大学慕课网课程							  ****			   100%
     看完了数据部分的内容
	4.生活要充实，心态要好												  ***			    100%


2017.6.20
	1.今天没什么其他内容，首要问题是解决mmi测试显示的问题						*****			  100%
	2.17G16A编译能通过													 ***			   100%
	3.中国大学慕课网数据排序，搜索课程，文件操作								  ***				 100%
	4.心态要好，找对象这事，一定要做好每一步									****			  100%



2017.6.26
	1.分析对比pmi8952,pmi8940,pmi8937,ti的bq电量计的精度，主要是看文档		 *****			  20%
	2.先熟悉高通的pmi接口，熟悉高通的代码及工作流程							   ****				0%
	3.中国大学慕课网第一周的编程作业，有时间再看看第二周的课程					   ****				100%
	4.心态要好，找对象这事相当棘手，生活节奏也被打乱了，何去何从					  ***			   80%


2017.6.27
	1.处理掉手上的一些杂项任务												 ***			 80%
	2.主要的任务是看高通的文档，fuelgauge8937+fg的一些代码					 ****			 80%
	3.中国大学慕课网第二周及以后的课程，整理下敲过的代码							 ***			100%
	4.心态要好，过自己的生活，尽量不去打扰别人									***				100%


2017.6.28
	1.看高通的文档+电量计的代码，今天争取把qpnp-fg.c和spec看完				   ****				80%
	2.整理下几个跟工作相关的重要的文档，结构内容，排版							 ***			  20%
	3.中国大学慕课网第三周课程												  ***			  80%
	4.调整心态，做自己想做的												  ***			   80%


2017.6.30
	1.处理掉手上的零散的事												   ****				80%
	2.完成中国大学慕课网考试												  ****			   100%
	3.看高通的文档+电量计相关的代码											***				 0%
	4.心态要好，别去多想														***				 0%



2017.7.3
	1.一切以工作为主，重要的是解决问题											***				100%
	2.必须要带电池或者假电才可以进入meta模式									   *****			100%
	3.心态要好																****			50%


2017.7.5
	1.搞清楚mmi测试充电显示不清楚的原因，然后解决问题								****			100%
	2.哪些是优先级比较高的，还有哪些事情要处理									 ****			  100%
	3.心态要好，分析问题，解决问题是重点										   ***				100%


2017.7.7
	1.整理好目前的buglist跟task											  ***			  80%
	2.熟悉高通代码														  ****			   80%
	3.慕课网课程，看完C语言进阶部分											 ***			  0%
	4.保持好的心态														  ***			   40%


2017.7.11
	1.按紧急程度解决p1试产出现的问题，一个一个解决处理好						  *****		       80%
	2.以工作为主，专注做自己的工作											 ****			  100%
	3.找好自己的生活节奏，保持好的心态										   ***				 50%
	4.有时间在把数据结构与算法这们课程看看									  ***				0%


2017.7.12
	1.重点解决电量显示不正确，过压和充电电流过小的问题							  *****			   90%
	2.以工作为主，做好自己该做的事，其他事情不用想，想也没用						****			 100%
	3.生活要有自己的节奏，合理调节自己的心态									 ****			   100%
	4.有时间在补充学习														 ***			  100%


2017.7.13
	1.充电电流过小，功耗问题，底电流问题										   *****			100%
	2.事情一个一个解决，做好自己的事											****			  100%
	3.保持好的生活节奏，坚持运动，调节心态									  ***				100%
	4.利用空闲时间多学习														***				  100%


2017.7.17
	1.处理好手上的BUG，17G06A调试，17G10A解决已有问题，G1605的电量跳变			*****			 90%
	2.按紧要程度排个序，把每个事情处理好										    ****			 100%
	3.保持好的生活节奏，不能乱，坚持运动											***				 90%
	4.心态问题，最近心态很不好，要及时调整									   ***				90%


2017.7.18
	1.17G10A的充电电流，充电时序问题，G1605A电量跳变问题						  *****				60%
	2.自动化解析log															****			  0%
	3.保持好的生活节奏，多运动，多思考											***  			   100%
	4.调整心态，做自己想做的事												   ***				  100%


2017.7.19
	1.17G10A的USB眼图然后是合入rt5081新的软件版本看看充电电流					  *****				80%
	2.在其位谋其事，做好自己该做的事											  ****				80%
	3.调整好自己的生活节奏，调整心态不要因为其他事而影响到自己的生活					****			 80%



2017.7.24
	1.17G06A充电问题，分析原因，解决问题										  *****				80%
	2.17G10A的rt5081合入新版本，解决充电电流过小的问题						    ****			  80%
	3.心态要好，做事要积极认真负责，头脑清晰，每天过的有动力						  ****			    80%
	4.多读书，多看报，少吃零食，多睡觉											  ***			   100%



2017.7.25
	1.17G10A的充电的电流														*****			  80%
	2.G1605A的电量跳变问题													   ****				  0%
	3.心态要好，做事积极认真													 ****			   100%
	4.管理好自己的情绪，有好的生活节奏，每天要有收获								 ***			   100%


2017.7.26
	1.G1605A的电量跳变问题													   *****			 50%
	2.17G10A的充电电流问题整理一下，还有哪些问题									****			  0%
	3.做事积极认真负责，在其位谋其事											  ****				80%
	4.管理好自己的情绪，养成良好的生活节奏，每天要有进步								***				 80%


2017.7.27
	1.电池曲线的导入和fuelgauge3.0客制化										*****
	2.G1605A的电量跳变问题													   ****
	3.在其位谋其事															***
	4.管理好自己的情绪，养成良好的生活习惯，每天要有进步							   ***	