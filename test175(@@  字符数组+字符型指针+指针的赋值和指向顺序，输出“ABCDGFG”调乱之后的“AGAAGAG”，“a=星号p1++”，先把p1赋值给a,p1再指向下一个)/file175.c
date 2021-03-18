#include<stdio.h> 
#include<string.h>
void fun(char *s,int n);
int main()
{
	int i;
    char b[]="ABCDEFG";
	fun(b,7);
    for(i=0;i<=6;i++)
	   printf("%c",b[i]);
	//puts(b);
	printf("\n");
	return 0;
}
void fun(char *s,int n)
{
     char a,*p1,*p2;
	 p1=s;
	 p2=s+n-1;
	 while(p1<p2)
     {
	     a=*p1++;
         *p1=*p2--;
		 *p2=a;
	 }
}