#include<stdio.h>
int main()
{
    int i=2,max,n;
	printf("please input the number1:");
	scanf("%d",&n);
	max=n;
	while(n>=0)
	{
	    if(n>max)
			max=n;
		printf("input the number%d:",i);
		scanf("%d",&n);
		i++;
	}
	printf("the max number is:%d",max);
	return 0;
}