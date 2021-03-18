/*//法1："need1.name"形式(使用一般的结构变量访问结构成员)
#include<stdio.h>
#define N 4
struct minneed   //声明结构体
{
    char *name;   //指针name
	char sex;
	unsigned short age;
	float amount;
};
void outdata(struct minneed);   //声明函数
int main()
{
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wumei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};  //初始化结构体
	int i;
	for(i=0;i<N;i++)
		outdata(needs[i]);  //结构体调用时调用数组名（结构变量名）
	return 0;
}
void outdata(struct minneed need1)   //定义函数(类似一般的定义函数，struct相当于数据类型，need1相当于变量名，“int a”)
{
    printf("\nname:%s\n",need1.name);
	printf("sex:%s\n",(need1.sex==1)?"boy":"girl");
	printf("age:%d\n",need1.age);
	printf("add:%.2f\n",need1.amount);
}
*/


/*
//法2："p->name"形式（使用指向结构变量访问结构成员）
#include<stdio.h>
#define N 4
struct minneed   
{
    char *name;
	char sex;
	unsigned short age;
	float amount;
};
int main()
{
	int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wumei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};  
    struct minneed *p;    //类似一般的指针变量的声明（“struct”相当于数据类型“int”）
	p=needs;        //指针赋值
	for(i=0;i<N;i++)
	{
       printf("\nname:%s\n",p->name);
	   printf("sex:%s\n",(p->sex==1)?"boy":"girl");
 	   printf("age:%d\n",p->age);
   	   printf("add:%.2f\n",p->amount);
	   p++;
	}
	return 0;
}
*/



//法3："(*p).name"形式（使用指向结构变量访问结构成员）
#include<stdio.h>
#define N 4
struct minneed   
{
    char *name;
	char sex;
	unsigned short age;
	float amount;
};
int main()
{
    int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wumei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};  
    struct minneed *p;   ////类似一般的指针变量的声明（“struct”相当于数据类型“int”）
	p=needs;        //指针赋值
	for(i=0;i<N;i++)
	{
       printf("\nname:%s\n",(*p).name);
	   printf("sex:%s\n",((*p).sex==1)?"boy":"girl");
 	   printf("age:%d\n",(*p).age);
   	   printf("add:%.2f\n",(*p).amount);
	   p++;
	}
	return 0;
}
