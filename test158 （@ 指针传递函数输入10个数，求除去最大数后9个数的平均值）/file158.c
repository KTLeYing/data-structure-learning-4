#include<stdio.h>
int average(int y[10]);
int main()
{
   int x[10],i;
   printf("please input 10 numbers:");
   for(i=0;i<10;i++)
      scanf("%d",&x[i]);
   average(x);
   printf("the average of the final nine numbers is:%d\n",average(x));
   return 0;
}
int average(int y[10])
{
   int j,sum=0,max,*p,z;
   max=y[0];
   for(p=y;p<y+10;p++)
   {
	   sum+=*p;
      if(*p>max)
		  max=*p;
   }
   z=(sum-max)/9;
   return (z);
}
