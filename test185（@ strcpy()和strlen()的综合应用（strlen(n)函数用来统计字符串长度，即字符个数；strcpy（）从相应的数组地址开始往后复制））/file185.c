#include<stdio.h>
int main()
{
    char str[]="I love playing basketball",*p=str;
	strcpy(str+strlen(str)/4," Zhu Ying!");  //从str数组的第7个元素（str+strlen(str)/4），即“e”后开始向后复制
	printf("%s\n",p);
	return 0;
}