#include<stdio.h>
void compare(int *p1,int *p2);
int main()
{
    int m,n;
	do
	{
		printf("the correct number:");
		scanf("%d%d",&m,&n);
	}while(m<=0||n<=0);
	if(m>n)
       compare(&m,&n);
	printf("the sorted from samll to big:%d %d\n",m,n);
	return 0;
}
void compare(int *p1,int *p2)
{
    int t;
    t=*p1;
	*p1=*p2;
    *p2=t;
}
