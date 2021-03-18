#include<stdio.h>
int main()
{
    int i,j,z,t,x[3][3];
	printf("please input the number:");
	for(i=0;i<=2;i++)
	{
	   for(j=0;j<=2;j++)
		 x[i][j]=i*3+j+1;
	}
	printf("the final sorted one is:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%d ",x[i][j]);
            printf("\n");
	}
	for(i=0;i<=2;i++)
	{
	    for(j=0;j<=2;j++)
			if(i<=j)
			{
			   t=x[i][j];
               x[i][j]=x[j][i];
			   x[j][i]=t;
			}
	}
	printf("the final sorted two is:\n");
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%d ",x[i][j]);
			printf("\n");
	}
	return 0;
}
