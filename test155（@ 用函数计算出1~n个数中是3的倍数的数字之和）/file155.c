#include<stdio.h>
int sum(int a);
int main()
{
    int n;
	printf("please input the lastest number:");
	scanf("%d",&n);
	sum(n);
	printf("the sum of three's mutiple is:%d\n",sum(n));
	return 0;
}
int sum(int a)
{
   int i,z=0;
   for(i=1;i<=a;i++)
   {
      if(i%3==0)
        z+=i;
   }
   return (z);
}
