#include<stdio.h>
int main()
{
    int i,j,k,z,n;
	printf("please input the number of the line:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n-i;j++)
		  printf(" ");
		for(k=1;k<=2*i-1;k++)
			printf("*");
		for(z=1;z<=n-i;z++)
			printf(" ");
		printf("\n");
	}
	return 0;
}

