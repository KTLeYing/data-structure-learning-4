#include<stdio.h>
int main()
{
    char str[]="I love playing basketball",*p=str;
	strcpy(str+strlen(str)/4," Zhu Ying!");  //��str����ĵ�7��Ԫ�أ�str+strlen(str)/4��������e����ʼ�����
	printf("%s\n",p);
	return 0;
}