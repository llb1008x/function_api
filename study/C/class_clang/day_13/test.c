/************************************************************************
 *题目内容：

 题目说起来很简单，你会读到两个字符串，每个字符串占据一行，每个字符串的长度均小于10000字符，
 而且第一个字符串的长度小于第二个字符串的。你的程序要找出第一个字符串在第二个字符串中出现的位置，
 输出这些位置，如果找不到，则输出-1。

 注意，第一个字符的位置是0。


 注意，第一个字符串在第二个字符串中的位置可能不止一处。


 注意，字符串中可能含有空格。


 注意，两个字符串的长度一定大于0。


 输入格式:

 两个字符串，一行一个。


 输出格式：

 第一个字符串在第二个字符串中出现的位置，按照从小到到的顺序排列，每个数字后面有一个空格。

 如果在第二个字符串中找不到第一个字符串，则输出-1。


 输入样例：

 abba

 ababbba abbabbabbabbaacc
 ***********************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	int len1,len2;
	char str1[1000]="";
	char str2[1000]="";

	printf("请输入两个字符串:\n");
	gets(str1);
	gets(str2);
	

	puts(str1);
	puts(str2);
	
	len1=strlen(str1);
	len2=strlen(str2);

	printf("len(str1)->%d,len(str2)->%d\n",len1,len2);	
	
	if(len1)


	return 0;
}
