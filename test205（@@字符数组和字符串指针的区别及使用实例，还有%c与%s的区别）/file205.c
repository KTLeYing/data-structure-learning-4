#include<stdio.h>
int main()
{
    char a[]="Guo Qian Ying is Ma Zhen Le's girl friend!";  //初始化字符数组
	char *p="Ma Zhen Le love Guo Qian Ying forever!";    //初始化字符串指针
    printf("%s\n",a);   //输出字符数组（因为输出是%s,所以会从a的字符开始输出以后的字符）
	printf("%s\n",p);    //输出字符串指针（因为输出是%s，所以p不用*，%s会自动读取地址的数据）
    printf("%c\t%c\n",a[4],*(a+4));    //用数组输出第5个字符,a[4]同等于*(a+4),即 数组名[数组长度]=*(数组名+数组长度)（因为是%c,只会输出对应的一个字符，而且没有%s在，要加上*）
	printf("%c\t%c\n",p[4],*(p+4));    //用指针输出第5个字符，p[4]同等于*(p+4)，即 p[长度]=*(p+长度)（因为是%c,只会输出对应的一个字符，而且没有%s在，要加上*）
	printf("%s\n",&a[4]);    //数组名[数组长度]的形式与%s连用从第5个字符开始输出以后的字符时，要在数组名的前面加&，如果 数组名[数组长度]的形式与%c连用输出单个字符就不用加&
	printf("%s\n",a+4);     //数组名+数组长度 的形式与%s连用从第5个字符开始输出以后的字符时，不用在数组名的前面加&，如果 数组名+数组长度 的形式与%c连用输出单个字符就不用加&
	printf("%s\n",&p[4]);   //指针变量名[长度]的形式与%s连用从第5个字符开始输出以后的字符时，要在指针变量名的前面加&，如果 指针变量名[长度]的形式与%c连用输出单个字符就不用加&
	printf("%s\n",p+4);  //指针变量名+数组长度 的形式与%s连用从第5个字符开始输出以后的字符时，不用在指针变量名的前面加&，如果 指针变量名+数组长度 的形式与%c连用输出单个字符就不用加&
	return 0;
}