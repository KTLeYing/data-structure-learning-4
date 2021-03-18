#include<stdio.h>
int main()
{
    int x[20],i,j,f1=1,f2=1,f3;
	printf("please intput the number:\n");
	f3=f1+f2;
	x[0]=f1;
	x[1]=f2;
	x[2]=2;
	for(i=3;i<=19;i++)
	{
		f1=f2;
	    f2=f3;
		f3=f1+f2;
        x[i]=f3;
	}
	for(i=0;i<=19;i++)
	{
		printf("%6d",x[i]);
	    if((i+1)%5==0)
			printf("\n");
	}
	return 0;
}
