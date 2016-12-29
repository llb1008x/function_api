//***************************************************************************************
//烈火微型四轴飞行器源码版权归烈火团队所有，未经烈火团队同意，请勿随意在网上传播本源码。
//与本软件相关书籍<<四轴飞行器DIY-基于STM32微控制器>>，由北航出版社正式出版，内容对本套包
//含的所有软件以及硬件相关都做了详细的讲解，有兴趣的网友可以从各大书店购买。
//与本软件配套的硬件：http://fire-dragon.taobao.com
//如果有网友做了各种有意义的改进，请随时与我们保持联系。
//QQ：16053729    烈火QQ群：234879071
//***************************************************************************************
#ifndef _FILTER_H_
#define _FILTER_H_
#include "stm32f10x.h"
#include "struct_all.h"

/******************************************************************************
							全局函数声明
*******************************************************************************/ 
void Calculate_FilteringCoefficient(float Time, float Frequency);
void ACC_IIR_Filter(struct _acc *Acc_in,struct _acc *Acc_out);
void Gyro_Filter(struct _gyro *Gyro_in,struct _gyro *Gyro_out);
void US_100_Filter(float *in,float *out);

#endif

