#include<stdio.h>
int main()
{
    int i,n,z;
	i=z=0;
	while(z<=1000)
	{
	   ++i;
	   z+=i*i;
	}
	printf("i=%d\n",i-1);
	return 0;
}