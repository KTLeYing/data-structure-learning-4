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
	};//stu[]={100,"Wang Lin",'M',20,101,"Li Gang",'M',19,110,"Liu Yan",'F',19};    //结构数组的初始化方式1，（中括号后不用加“；”，与一般结构体的初始化类似）
	struct student stu[]={100,"Wang Lin",'M',20,101,"Li Gang",'M',19,110,"Liu Yan",'F',19};   //结构数组的初始化方式2（与一般结构体的初始化类似）
	for(i=0;i<=2;i++)
	{
       printf("the information of %d student is:",i+1);
       printf("NO.:%d; name:%s; sex:%c; address:%d\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].addr);
	}
	return 0;
}