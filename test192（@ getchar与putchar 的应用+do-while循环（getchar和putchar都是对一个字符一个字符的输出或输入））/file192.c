#include<stdio.h>
int main()
{
    char c;
	do
	{
	   while((c=getchar())!=' ')
		   putchar(c);
	}while(c!='.');
	return 0;
}
