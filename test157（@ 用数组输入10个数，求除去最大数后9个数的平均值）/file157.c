#include<stdio.h>
int main()
{
    int x[10],i,j,max,sum=0;
	float z;
	printf("please input 10 numbers:");
	for(i=0;i<10;i++)
	scanf("%d",&x[i]);
	max=x[0];
	for(j=0;j<10;j++)
	{
	   sum+=x[j];
	   if(x[j]>max)
          max=x[j];
	}
	z=(sum-max)/9.0;
	printf("the average of thefinal nine numbers is:%f\n",z);
	return 0;
}