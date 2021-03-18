#include<stdio.h>
int main()
{
    int i;
	char *s[]={"C","Basic","Foxpro","Visual Studio"};
	for(i=0;i<sizeof(s)/4;i++)    //for循环输出每个字符串的内容
		printf("%s\n",s[i]);   //输出s[i]的内容
	return 0;
}