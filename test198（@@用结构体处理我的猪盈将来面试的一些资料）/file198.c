#include<stdio.h>
struct date
{
    int year;
	int month;
	int day;
};
struct emp
{
   char name[40];
   char add[50];
   char sex[10];
   char job[20];
   struct date birthday;
   struct date entryday;
};
int main()
{
    struct emp emp1;
	printf("please input the employer's name:");
	scanf("%s",&emp1.name);
	printf("please input the employer's address:");
	scanf("%s",&emp1.add);
	printf("please input the employer's sex:");
	scanf("%s",&emp1.sex);
	printf("please input the employer's job:");
	scanf("%s",&emp1.job);
	printf("please input the employer's birthday:");
	scanf("%d%d%d",&emp1.birthday.year,&emp1.birthday.month,&emp1.birthday.day);
	printf("please input the employer's entryday:");
	scanf("%d%d%d",&emp1.entryday.year,&emp1.entryday.month,&emp1.entryday.day);
	printf("\n\n\n");
	printf("the following is employer's information:\n");
	printf("name:%s\n",emp1.name);
	printf("address:%s\n",emp1.add);
	printf("sex:%s\n",emp1.sex);
	printf("job:%s\n",emp1.job);
	printf("birthday:%d/%d/%d\n",emp1.birthday.year,emp1.birthday.month,emp1.birthday.day);
	printf("entryday:%d/%d/%d\n",emp1.entryday.year,emp1.entryday.month,emp1.entryday.day);
	return 0;
}