#include<stdio.h>
int main()
{
    int x,y;
	printf("plaese input a number:");
	scanf("%d",&x);
	if(x<0)
		printf("0");
	else
		if(x>=0 && x<10)
			printf("%d\n",7*x/3);
		else
			if(x>=10)
				printf("%f\n",3.5*x*x-12.5);
	return 0;
}