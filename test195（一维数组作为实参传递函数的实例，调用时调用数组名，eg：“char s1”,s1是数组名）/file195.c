#include<stdio.h>
void comp(char s1[],char s2[]);
int main()
{
	char s1[30],s2[30];
    printf("please input the strings:\n");
	gets(s1);
	gets(s2);
	comp(s1,s2);
	return 0;
}
void comp(char s1[],char s2[])
{
	int i=0;
    while(s1[i]==s2[i] && s1[i]!='\0')
		i++;
	if(s1[i]=='\0' && s2[i]=='\0')
	   printf("tne same\n");
	else
		printf("the different\n");
}