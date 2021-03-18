#include<stdio.h>
struct date      //定义内结构体 （date是结构体名）
{
    int year;  //year是结构体变量名（成员名1）
    int month;  //month是结构体变量名（成员2）
    int day;
};
struct people    //定义外结构体  （people为结构名）
{
   char name[40];  //name为结构体变量名
   char add[40];  //addr为结构体变量名
   char sex[20];
   struct date birthday;   //结构体的嵌套
   struct date entryday;
};
int main()
{
    struct people peo1={"wuyunhui","No.609 street Wanda","male",{1976,10,1},{2000,7,1}};   //内外结构体的嵌套初始化（peo1为结构变量）初始化结构变量数据
	printf("name:%s\n",peo1.name);
    printf("address:%s\n",peo1.add);
	printf("sex:%s\n",peo1.sex);   //“peo1.sex”相当于一个变量
	printf("birthday:%d/%d/%d\n",peo1.birthday.year,peo1.birthday.month,peo1.birthday.day);
	printf("entryday:%d/%d/%d\n",peo1.entryday.year,peo1.entryday.month,peo1.entryday.day);
	return 0;
}