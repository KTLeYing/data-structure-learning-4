#include<stdio.h>
#define M 4
void read(int b[][M],int n);   //n为数组b列指针长度，一般一维数组声明：void read(int b[],int n)；二维数组声明:void read(int b[][M],int n)
void sum(int c[][M],int n);
int main()
{
   int a[M][M];
   read(a,M);  //调用read函数，a对应二维数组b，M对应n（调用数组名a）
   return 0;
}
void read(int b[][M],int n)
{
   int i,j;
   printf("please input the numbers:");
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
		  scanf("%d",&b[i][j]);
   }
   sum(b,n);   //调用sum函数  
}
void sum(int c[][M],int n)
{
   int i,j,k=0,t=0;
   for(i=0;i<n;i++)
   {
	   k+=c[i][i];  //计算主对角线
	   t+=c[i][3-i];  //计算次对角线
   }
  
   printf("矩阵主对角线元素之和:%d;次对角线之和为:%d\n",k,t);
}