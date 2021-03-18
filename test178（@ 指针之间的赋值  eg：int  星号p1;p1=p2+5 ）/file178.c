#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int *p1=x+5,*p2;
	p2=p1+5;
	printf("%d %d\n",*p1,*p2);
	return 0;
}