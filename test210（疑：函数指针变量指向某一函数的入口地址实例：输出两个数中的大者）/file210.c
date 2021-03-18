#include<stdio.h>
int main()
{
	int max();
    int x,y,z,(*p)()=max;
	printf("please input x and y:");
	scanf("%d%d",&x,&y);
	z=(*p)(x,y);
	printf("the max is %d\n",z);
	return 0;
}
int comp(int a,int b)
{
    int c;
	c=a>b?a:b;
	return c;
}