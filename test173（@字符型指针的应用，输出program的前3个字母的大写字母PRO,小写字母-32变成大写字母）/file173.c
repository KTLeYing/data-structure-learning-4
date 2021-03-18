#include<stdio.h>
int main()
{
   char x[]="program",*p;
   p=x;
   while(*p!='g')
   {
	   printf("%c",*p-32);
	   p++;
   }
   printf("\n");
   return 0; 
}