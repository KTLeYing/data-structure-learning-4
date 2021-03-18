#include<stdio.h>
struct date 
{
     short int year;
	 char month;
	 char day;
};
struct emp
{
    char name[10];
	char address[20];
	char sex;
	struct date birthday;
	struct date entryday;
};
int main()
{
    struct emp emp1;
	printf("please input the employ's name:");
	scanf("%s",&emp1.name);
	printf("please input the employ's address:");
	scanf("%s",&emp1.address);
	printf("please input the employ's sex:");
    scanf("%d",&emp1.address);
	printf("please input the employ's birthday:");
	scanf("%d/%d/%d",&emp1.birthday.year,&emp1.birthday.month,&emp1.birthday.day);  //结构嵌套，引用结构体时的变量从大到小（外到内）编写
	printf("please input the employ's entryday:");
	scanf("%d/%d/%d",&emp1.entryday.year,&emp1.entryday.month,&emp1.entryday.day);
	printf("\nthe information of the employ:\n");
	printf("name:%s\n",emp1.name);
	printf("address:%s\n",emp1.address);
	printf("sex:%s\n",(emp1.sex==1)?"girl":"boy");
	printf("birthday:%d/%d/%d\n",emp1.birthday.year,emp1.birthday.month,emp1.birthday.day);  //结构嵌套，输出时变量从大到小（外到内）编写
	printf("entryday:%d/%d/%d\n",emp1.entryday.year,emp1.entryday.month,emp1.entryday.day);
	return 0;
}
