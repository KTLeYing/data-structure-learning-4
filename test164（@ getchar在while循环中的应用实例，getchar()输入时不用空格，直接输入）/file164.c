#include<stdio.h>
int main()
{
    char c;
	int n=1;
	printf("please input the characters:");
	c=getchar();
	while(c=getchar()!='\n')
		n++;
	printf("the number of input char is:%d\n",n);
	return 0;
}