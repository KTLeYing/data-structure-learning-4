/*
//法1：函数传递数组形式（s1[]）
#include<stdio.h>
void puts1(char s1[]);
int main()
{
    char s[]="guo qian ying:wo ai ni!";
	puts1(s);
	return 0;
}
void puts1(char s1[])
{
   int i;
   for(i=0;s1[i]!='\0';i++)
	   //printf("%c",s1[i]);
       putchar(s1[i]);
   printf("\n");
}
*/



//法2:函数传递指针形式(*s1)
#include<stdio.h>
void puts1(char *s1);
int main()
{
    char s[]="guo qian ying:wo ai ni!";
	puts1(s);
	return 0;
}
void puts1(char s1[])
{
   int i;
   //while(*s1)        //法1(*s1代替*s1!='\0'，*s1的值为'\0'时，值为0（假），结束循环；*s1的值不为'\0'，值为1（真），继续执行)  
   while(*s1!='\0')    //法2
	   //printf("%c",*s1++);  //法1（输出）
       putchar(*s1++);    //法2（输出）
   printf("\n");
}
