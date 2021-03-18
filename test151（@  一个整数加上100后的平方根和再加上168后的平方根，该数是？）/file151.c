#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n;
	for(i=0;i<=10000;i++)
	{
	    m=sqrt(i+100);
		n=sqrt(i+268);
		if(m*m==i+100 && n*n==i+268)
			printf("the number is right:%d\n",i);
	}
    return 0;
}
