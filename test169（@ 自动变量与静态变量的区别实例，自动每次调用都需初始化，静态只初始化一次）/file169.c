#include<stdio.h>
void  auto_static();
int main()
{
	int i;
    for(i=0; i<5; i++) 
		auto_static();
	return 0;
}
void  auto_static()
{  
	int var_auto=0;		/*自动变量：每次调用都重新初始化，不会以上一次的值为基础去计算*/
    static int var_static=0;		/*静态局部变量：只初始化1次,后面的以上一次的值为基础计算*/
    printf("var_auto=%d, var_static=%d\n", var_auto, var_static);
    ++var_auto;
    ++var_static;
}			