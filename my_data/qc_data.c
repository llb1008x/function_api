高通培训用到的文档




->基本概念
{

    SPMI：system power management interface：系统电源管理接口

    AICL：automatic input current limit：自动化输入电流限制(这也是一个算法)

    warm reset:热复位，full reset：全复位

    ESR：Equivalent series resistance 等效串联电阻

	USB PD：usb power delivery是电源传输通信的一种协议，功率传输协议

    USB_IN,DC_IN：？

	PWM:pulse width modulation 

    LPG:light pulse generator 

	BMD ：battery missing detection


}




几个比较重要的点
{

	1.并行充电
	PM8998提供接口，给不同的设备提供不同的电压，管理不同设备电源供应
	SMB1381充电

	2.fuelgauge

	3.QC3.0

	4.reset

	5.BC1.2还是type-c检测，当然这两个协议的流程也要很清楚

	6.OA，OVP这类过压，过流问题

	7.LD0，buck/boost

	8.sink mode  ，source mode
	
	9.  Vconn:
	  {
	    Vconn（3.0~5.5V） 和VBUS（4.75~5.5V）一样可以提供能量，CC1.CC2中一个工作在CC模式，另一个是Vconn
	    USB3.0，USB PD使用的cables也不一样，内部还有芯片

	    通过Vconn传输控制命令时电压要降到2.7V

	    VPH_PWR 


	  }

	10.USB power delivery
	{
	

	}

	11.BC1.2中定义的充电类型
	SDP：标准下行接开口，电脑USB
	CDP：充电下行接口
	DCP：标准的座充
	OCP：other chargng port非标准充电器
	float charger:浮充？非标准充电器，兼容type-c接口


	weak charger

}




->相关的文档
{
  1.pm8998,pm8005,and pmi8998_power_management_ics_design_guidelines.pdf
  PM8998，PM8005作为pmic子系统供电管理的核心
  PMI8998管理系统供电的接口，充电，SMB1381充电

  整个系统比较耗电的部分：CPU,modem，LCD,audio,haptic,LED?

  pmic电源管理子系统的框架及IC
  {
	PM8998:  Most of the housekeeping (including system clocks) and
	output power management functions(core负责整个系统的日常电源管理包括系统时钟，和输出电能管理  可能是整个系统个模块能量的供应)

	PMI8998：Most of the input power management functions (including
	charger) and user interfaces（绝大部分充电的管理，还有一部分是SMB1381负责charging和提供用户接口）

	PM8005：Regulator integration on slave PMIC helps to balance
	power and thermal dissipation on either side of the MSM
	and optimize PDN routing（这个应该是起到辅助作用，充电时分散接口部分过热，降低充电过程不必要的功耗提高充电效率，优化给整个系统供电）

	SMB1381：Simultaneous DC_IN charging + OTG support via SMB1381 in parallel charging configuration
    （通过SMB1381支持OTG功能，分摊另一部分的充电功能）
  }


  Input Power Management  
  1.三个独立引脚可以输入供应能量USB_IN, DC_IN, and Vbatt
  2.modem模块的能量供应通过VPH_PWR而不是VBAT
  3.DC_IN and USB_IN的输入电压必须在UVLO，DVLO之间，P46
  4.当充电器移除后立刻停止充电，PMI8998进入低功耗模式，阻止电池的漏电流，延长寿命


  USB type-c的检测：
  设备的连接和断开通过检测CC引脚上的电压，并管理VBUS，当设备没有插入时关闭VBUS
DRP在待机模式下每50ms（50~100ms）在DFP和UFP间切换一次。当切换至DFP时，CC管脚上必须有一个上拉至VBUS的电阻Rp或者输出一个电流源，当切换至UFP时，
CC管脚上必须有一个下拉至GND的电阻Rd。此切换动作必须由CC Logic芯片来完成。当DFP检测到UFP插入之后才可以输出VBUS，当UFP拔出以后必须关闭VBUS。
此动作必须由CC Logic芯片来完成。

  sink mode：在tCCDebounce (100 to 200 ms)的检测中，CC引脚的电压在0.25V~2.04V，则为充电模式
  source mode：在tCCDebounce (100 to 200 ms)的检测中，CC引脚的电压小于1.65V，则为反向充电模式

  PMI8998可以配置一个低功耗模式，降低充电反向充电所消耗的能量

  上面有一个crude sensor好像会产生一些异常波形，正是的要关闭或者修改一些代码


  BC.1.2检测


  QC2.0 3.0检测
  手机端发送几个升降时序，充电器端回应一定的时序则是QC3.0，否则是QC2.0




  Power Sink Mode流程太长... 

  Power source mode

  Dead or Weak Battery Mode



}







->相关的代码
{


-->高通平台电池设备树的配置
   	pmi8950_charger: qcom,qpnp-smbcharger {
		spmi-dev-container;
		compatible = "qcom,qpnp-smbcharger";
		#address-cells = <1>;
		#size-cells = <1>;

		qcom,iterm-ma = <100>;		//充电截止时的电流
		//Gionee <GN_BSP_CHG> <liujiang> <20161025> modify for CR01748202 begin
		qcom,float-voltage-mv = <4400>;
		//Gionee <GN_BSP_CHG> <liujiang> <20161025> modify for CR01748202 end
		qcom,resume-delta-mv = <200>;
		qcom,chg-inhibit-fg;
		qcom,rparasitic-uohm = <100000>;
		qcom,bms-psy-name = "bms";
		//Gionee <GN_BSP_CHG> <liujiang> <2016-11-28> add for 35113 begin
		qcom,thermal-mitigation = <3000 2500 2000 1500 1000 0>;
		//Gionee <GN_BSP_CHG> <liujiang> <2016-11-28> add for 35113 end
		//Gionee <GN_BSP_CHG> <liujiang> <20161025> modify for CR01748202 begin
		qcom,parallel-usb-min-current-ma = <2000>; //<1400>;
		//Gionee <GN_BSP_CHG> <liujiang> <20161025> modify for CR01748202 end
		qcom,parallel-usb-9v-min-current-ma = <900>;
		qcom,parallel-allowed-lowering-ma = <500>;
		qcom,autoadjust-vfloat;
		qcom,pmic-revid = <&pmi8950_revid>;
		qcom,charge-unknown-battery;
		qcom,force-aicl-rerun;
		qcom,aicl-rerun-period-s = <180>;
		//Gionee <GN_BSP_CHG> <liujiang> <20161025> add for CR01764517 begin
		qcom,usbin-vadc = <&pmi8950_vadc>;
		qcom,usbin-adc-channel-id = <0>;
		//Gionee <GN_BSP_CHG> <liujiang> <20161025> add for CR01764517 end
		//Gionee BSP wuxh modify for chg led control by triple ic in kernel on 20161009 begin
		qcom,chg-led-support;
		qcom,chg-led-sw-controls;
		//Gionee BSP wuxh modify for chg led control by triple ic in kernel on 20161009 end
		qcom,chgr@1000 {
			reg = <0x1000 0x100>;
			interrupts =	<0x2 0x10 0x0>,
					<0x2 0x10 0x1>,
					<0x2 0x10 0x2>,
					<0x2 0x10 0x3>,
					<0x2 0x10 0x4>,
					<0x2 0x10 0x5>,
					<0x2 0x10 0x6>,
					<0x2 0x10 0x7>;

			interrupt-names =	"chg-error",
						"chg-inhibit",
						"chg-prechg-sft",
						"chg-complete-chg-sft",
						"chg-p2f-thr",
						"chg-rechg-thr",
						"chg-taper-thr",
						"chg-tcc-thr";
		};

		qcom,otg@1100 {
			reg = <0x1100 0x100>;
			interrupts =	<0x2 0x11 0x0>,
					<0x2 0x11 0x1>,
					<0x2 0x11 0x3>;
			interrupt-names =	"otg-fail",
						"otg-oc",
					"usbid-change";
		};

		qcom,bat-if@1200 {
			reg = <0x1200 0x100>;
			interrupts =	<0x2 0x12 0x0>,
					<0x2 0x12 0x1>,
					<0x2 0x12 0x2>,
					<0x2 0x12 0x3>,
				<0x2 0x12 0x4>,
					<0x2 0x12 0x5>,
					<0x2 0x12 0x6>,
					<0x2 0x12 0x7>;

			interrupt-names =	"batt-hot",
						"batt-warm",
						"batt-cold",
						"batt-cool",
					"batt-ov",
						"batt-low",
						"batt-missing",
						"batt-term-missing";
		};

		qcom,usb-chgpth@1300 {
			reg = <0x1300 0x100>;
			interrupts =	<0x2 0x13 0x0>,
					<0x2 0x13 0x1>,
				<0x2 0x13 0x2>,
					<0x2 0x13 0x5>;

			interrupt-names =	"usbin-uv",
					"usbin-ov",
						"usbin-src-det",
						"aicl-done";
		};

		qcom,dc-chgpth@1400 {
			reg = <0x1400 0x100>;
			interrupts =	<0x2 0x14 0x0>,
					<0x2 0x14 0x1>;
			interrupt-names =	"dcin-uv",
						"dcin-ov";
		};

		qcom,chgr-misc@1600 {
			reg = <0x1600 0x100>;
			interrupts =	<0x2 0x16 0x0>,
					<0x2 0x16 0x1>,
					<0x2 0x16 0x2>,
				<0x2 0x16 0x3>,
					<0x2 0x16 0x4>,
					<0x2 0x16 0x5>;

			interrupt-names =	"power-ok",
						"temp-shutdown",
						"wdog-timeout",
						"flash-fail",
						"otst2",
						"otst3";
		};
	};




	voters相关
	struct client_vote {
		int	state;
		int	value;
	};


	struct votable {
		struct client_vote	votes[NUM_MAX_CLIENTS];
		struct device		*dev;
		const char		*name;
		int			num_clients;
		int			type;
		int			effective_client_id;
		int			effective_result;
		int			default_result;
		struct mutex		vote_lock;
		int			(*callback)(struct device *dev,
							int effective_result,
							int effective_client,
							int last_result,
							int last_client);
	};


	/* voters */
	struct votable			*fcc_votable;
	struct votable			*usb_icl_votable;
	struct votable			*dc_icl_votable;
	struct votable			*usb_suspend_votable;
	struct votable			*dc_suspend_votable;
	struct votable			*battchg_suspend_votable;


}




















1--->presentation__msm8994.la_linux_pmic_light_pulse_generator_overview.pdf
这片文档大部分讲PWM ，LPG相关的


2--->msm8952 linux android charger software user guide.pdf
这片文档应该比较重要 
PMI8952提供的主要功能：
	1.输入电量的选择和判断，仲裁
	2.为整个系统提供能量和控制
	3.给电池充电



充电时序：
	1.涓流充电
	2.预处理，调节
	3.恒流充电
	4.恒压充电

充电调的参数：
	1.涓流充电电流
	2.快速充电流
	3.终止，截止电流
	4.浮充电压，充电电压的动态调节
	5.预充电截止电压
	6.输入电流的限制
	7.安全时间间隔safety timer
	8.电池温度的限制

	
充电器的状态：
	1.有效的充电器连接
	Input voltage < OVLO	过压闭锁
	Input voltage > UVLO	欠压闭锁
	Input voltage > VBAT+0.1 V
	
	2.涓流充电
	VBAT < 2.1 V
	IBAT 45 mA

	3.预充电
	VBAT from 2.4 V to 3.0 V
	IBAT from 100 to 250 mA

	4.恒流充电
	IBAT from 300 mA to 3000 mA

	5.恒压充电
	VFLOAT from 3.6 V to 4.5 V



充电完成之后：
	1.电池自动回充
	VBAT < VFLOAT - V_RECH
	电池温度回到正常

软件可以通过读写这两个寄存器
	SMBCHGL_USB _USBIN_IL_CFG – 0x000013F2
	SMBCHGL_DC _DCIN_IL_CFG – 0x000014F2
来改变USBIN，DCIN的值从而改变输入电流的限制

Battery missing detection 应该是对电池的检测	
BATT_MISSING_INT 可以被设置的寄存器
	每2.6s通过电池的正极对电池进行检测
	

充电电流和电压的调节阿取决于thermal zone

ship mode ：传输模式
	

通过adb命令 设置ship mode

	adb shell
	cd /sys/kernel/debug/spmi/spmi-0
	echo 0x12D0 > address
	echo 0xA5 > data
	echo 0x1240 > address
	echo 0x01 > data

通过adb命令 设置USB充电使能
	1. Type the following ADB commands:
	adb root
	adb wait-for-devices
	adb shell setprop persist.usb.chgdisabled 1
	adb root
	2. To enable the charger, replace 1 with 0.

通过adb命令 设置wifi充电使能
	1. Type the following ADB commands:
	adb root
	adb wait-for-devices
	adb shell setprop persist.adb.tcp.port 5555 && adb tcpip
	adb connect <the target ip>
	adb shell setprop persist.usb.chgdisabled 1
	2. To enable the charger, replace 1 with 0.

关机截止140度





3--->msm8952 system drivers pmic dead battery charging overview.pdf
	
     DBC ：dead battery charging
     dead battery： 电池电量较低的状态

在电池电量较低的情况下，系统要判断电池电压大于开机电压，或者充电电流大于500mA





4--->battery_characterization_process.pdf

     客制化电池参数以及电池的配置(battery profile),QTI fuel gauge

	 MTK客制化这些参数时好像是从不同温度下，到处开机log，读出相应的fuel gauge数值，然后通过软件计算出来的




5--->introduction_to_qualcomm_quick_charge_3.0.pdf		QC3.0

任何时间根据电池的电量水平，判断需要充多少电，动态调节充电电压，以最大的效率充电（可以达到减少充电过程不必要的电量损失）。
QC3.0充电电压从3.6V~20V，200mV步进调节，充电电流达到3A（但实际上充电电压在3.6V~10V以下，高于14V属于过压充电了，电流可以达到3A）

QC3.0的充电判断逻辑：
1.标准的USB连接到手机
2.手机通过一定的升压时序判断是QC3.0充电器（这个判断过程的代码）
3.智能动态调节算法，实时调节充电电压
4.手机从充电器端获取一个应该调节的充电电压
5.充电器接受到指令调整充电电压
（根据D+，D-的差分电压，判断可以升压到多少，然后以200mV步进升压）
	









