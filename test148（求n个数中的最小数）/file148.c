#include<stdio.h>
int main()
{
   int i,n,m,max;
   printf("the number of intput:");
   scanf("%d",&n);
   printf("please input the number 1: ");
   scanf("%d",&m);
   max=m;
   for(i=2;i<=n;i++)
   {
       if(m>max)
		   max=m;
	   printf("please intput the number %d: ",i);
	   scanf("%d",&m);
   }
   printf("the max number is:%d\n",max);
   return 0;
}
    
