#include<stdio.h>
int func(int a,int b);
int main()
{
    int m=1,n=4,p;
	p=func(m,n);
	printf("after the first transfer is:%d\n",p);
    p=func(m,n);
	printf("after the second transfer is :%d\n",p);
	return 0;
}
int func(int a,int b)
{
    static int i=2,j=0;    //静态变量只初始化一次，第二次调用时的i和j的值均第一次调用后i和j的值来计算，一般用于多次调用同一个函数
	i+=j+1;
	j=i+a+b;
	return j;
}