#include<stdio.h>
int main()
{
    int i;
	char *s[]={"C","Basic","Foxpro","Visual Studio"};
	for(i=0;i<sizeof(s)/4;i++)    //forѭ�����ÿ���ַ���������
		printf("%s\n",s[i]);   //���s[i]������
	return 0;
}