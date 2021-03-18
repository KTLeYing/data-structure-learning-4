#include<stdio.h>
int main()
{
    char a;
	printf("please input a char:");
	scanf("%c",&a);
	printf("this char's ASCII is:%d\n",a);
	printf("the char before this char is:%c\n",a-1);
	printf("the char after this char is:%c\n",a+1);
	return 0;
}