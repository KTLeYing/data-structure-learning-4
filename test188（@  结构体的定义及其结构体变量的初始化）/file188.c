#include<stdio.h>
int main()
{
    struct student
	{
	   long int num;
	   char name[20];
	   char sex;
	   char addr[20];
	};//stu1={10101,"LiLin",'M',"123 Beijing Road"};    //��ʼ����ʽ1�������ź��üӡ�������
	struct student stu1={10101,"LiLin",'M',"123 Beijing Road"};   //��ʼ����ʽ2
	printf("NO.:%ld\nname:%s\nsex:%c\naddtess:%s\n",stu1.num,stu1.name,stu1.sex,stu1.addr);
	return 0;
} 