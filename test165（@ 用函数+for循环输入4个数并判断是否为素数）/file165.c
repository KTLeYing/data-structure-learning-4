#include<stdio.h>
int  count(int a);
int main()
{
	int i,n;
	for(i=1;i<=4;i++)
	{
       printf("please input number %d:",i);
	   scanf("%d",&n);
	   count(n);
	   if(count(n)==1)
		   printf("yes\n");
	   else
		   printf("no\n");
	}
    return 0;
}
int  count(int a)
{
     int i,flag=1;
	 for(i=2;i<a;i++)
     {
	    if(a%i==0)
		{
			flag=0;
		    break;
		}
	 }
	 return (flag);
}