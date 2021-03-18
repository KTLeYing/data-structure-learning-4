//法1:结构指针"p->name"形式
#include<stdio.h>
#define N 4
struct minneed
{
   char name[30];
   char sex[10];
   int age;
   float amount;
}
void outdata(struct minneed *p);   //声明函数
int main()
{
    int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,57,180.0},{"liping",1,56,150.0}};
	struct minneed *p;   //定义结构指针
	p=needs;           //结构指针赋值
	for(i=0;i<N;i++)
		outdata(p++);   //指针指向下一个元素
	return 0;
}
void outdata(struct minneed *p)       //定义函数
{
    printf("\nname:%s\n",p->name);  //p->name形式
	printf("sex:%s\n",(p->sex==1)?"boy":"girl");
	printf("age:%d\n",p->age);
	printf("address:%.2f\n",p->amount);
}


/*
//法2::结构指针"(*p).name"形式
#include<stdio.h>
#define N 4
struct minneed
{
   char *name[30];
   char sex[10];
   int age;
   float amount;
}
void outdata(struct minneed *p);   //声明函数
int main()
{
    int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,57,180.0},{"liping",1,56,150.0}};
	struct minneed *p;   //定义结构指针
	p=needs;           //结构指针赋值
	for(i=0;i<N;i++)
		outdata(p++);   //指针指向下一个元素
	return 0;
}
void outdata(struct minneed *p)       //定义函数
{
    printf("\nname:%s\n",(*p).name);    //(*p).name形式
	printf("sex:%s\n",((*p).sex==1)?"boy":"girl");
	printf("age:%d\n",(*p).age);
	printf("address:%.2f\n",(*p).namount);
}




//法3:一般的结构变量形式"need.name"形式
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
*/
