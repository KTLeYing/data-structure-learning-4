#include<stdio.h>
int main()
{
   int i,a[4][5];
   int *p;
   p=a[0];       //为指针赋值
   for(i=0;i<20;i++)
	   *p++=i;   //指针变量初始化二维数组,*p++与a[1],a[2]...一样（列指针，是地址）
   printf("the two array is:");
   p=a[0];        //把指针p指回第一行第一个元素的地址，即原来的位置(指针指向列指针)
   for(i=0;i<20;i++)
   {
	   if(i%5==0)
		   printf("\n");
       printf("%4d",*p++);    //指针变量输出二维数组数据
   }
   printf("\n");
   return 0;
}