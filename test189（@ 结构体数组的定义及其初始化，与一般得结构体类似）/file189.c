#include<stdio.h>
int main()
{
	int i;
    struct student
	{
	   int num;
	   char name[20];
	   char sex;
	   int addr;
	};//stu[]={100,"Wang Lin",'M',20,101,"Li Gang",'M',19,110,"Liu Yan",'F',19};    //�ṹ����ĳ�ʼ����ʽ1���������ź��üӡ���������һ��ṹ��ĳ�ʼ�����ƣ�
	struct student stu[]={100,"Wang Lin",'M',20,101,"Li Gang",'M',19,110,"Liu Yan",'F',19};   //�ṹ����ĳ�ʼ����ʽ2����һ��ṹ��ĳ�ʼ�����ƣ�
	for(i=0;i<=2;i++)
	{
       printf("the information of %d student is:",i+1);
       printf("NO.:%d; name:%s; sex:%c; address:%d\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].addr);
	}
	return 0;
}