#include<stdio.h>
void count(int m);
int main()
{
	int n;
    printf("plaese intput a number:");
	scanf("%d",&n);
    printf("the final formula is:1/2");
	count(n);
	return 0;
}
void count(int m)
{
    int i,j,z1,y1=1/2,y2=2,z2;
	for(i=2;i<=m;i++)
	{
	    z1=2*i*i;
		y1=y1+z1;
		printf("+1/%d",z1);
	}
	printf("=?");
	printf("\n");
    printf("the final formula is:2");
    for(j=2;j<=m;j++)
	{
	    z2=2*j*j;
		y2=y2+z2;
        printf("+%d",z2);
	}
	printf("=%d",y2);
	printf("\n");
	return 0;
}