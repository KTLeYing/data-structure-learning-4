
//法1:结构指针"need.name"形式（一般结构变量句点运算符直接访问结构成员）
#include<stdio.h>
#define N 4  //宏定义N
struct minneed
{
    char *name;     //定义指针变量name
	char sex;
	int age;
	float amount;
};
void outdata(struct minneed);      //声明函数（类似一般的函数声明，struct相当于数据类型int，minneed相当于变量名a）
int main()
{
    struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};     //结构变量初始化
	int i;
	for(i=0;i<N;i++)
	   outdata(needs[i]);     //调用函数（调用时用数组名）
	return 0;
}
void outdata(struct minneed need)      //定义函数（类似一般的函数声明，struct相当于数据类型int，need相当于变量名a，调用数组名）
{
    printf("\nname:%s\n",need.name);     //need.name的指针变量的形式
	printf("sex:%s\n",(need.sex==1)?"boy":"girl");    
	printf("age:%d\n",need.age);
	printf("address:%.2f\n",need.amount);
}


/*
//法2:结构指针"(*p).name"形式（指向结构变量need访问成员）
#include<stdio.h>
#define N 4
struct minneed
{
    char *name;
	char sex;
	int age;
	float amount;
};
int main()
{
	int i;
    struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};
	struct minneed *p;   //定义结构指针p（类似一般的指针变量的定义，struct相当于数据类型int）
	p=needs;      //为指针变量赋值
	for(i=0;i<N;i++)
	{
	   printf("\nname:%s\n",(*p).name);     //(*p).name的指针变量形式    
	   printf("sex:%s\n",((*p).sex==1)?"boy":"girl");    
       printf("age:%d\n",(*p).age);
	   printf("address:%.2f\n",(*p).amount);
	   p++;
	}
	return 0;
}



//法3:结构指针"p->name"形式（指向结构变量need访问成员）
#include<stdio.h>
#define N 4
struct minneed
{
    char *name;
	char sex;
	int age;
	float amount;
};
int main()
{
	int i;
    struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};
	struct minneed *p;       //定义结构指针p（类似一般的指针变量的定义，struct相当于数据类型int）
	p=needs;       //为指针变量赋值 
	for(i=0;i<N;i++)
	{
	   printf("\nname:%s\n",p->name);     //p->name的指针变量形式
	   printf("sex:%s\n",(p->sex==1)?"boy":"girl");    
       printf("age:%d\n",p->age);
	   printf("address:%.2f\n",p->amount);
	   p++;
	}
	return 0;
}
*/