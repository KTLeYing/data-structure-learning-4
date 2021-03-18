#include<stdio.h>
int main()
{
    char x[10]={'1','2','3','4','5','6','7','8','9',0},*p;
	int i=8;
	p=x+i;
	printf("%s\n",p-3);
	return 0;
}