/*
//��1����������������ʽ��s1[]��
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



//��2:��������ָ����ʽ(*s1)
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
   //while(*s1)        //��1(*s1����*s1!='\0'��*s1��ֵΪ'\0'ʱ��ֵΪ0���٣�������ѭ����*s1��ֵ��Ϊ'\0'��ֵΪ1���棩������ִ��)  
   while(*s1!='\0')    //��2
	   //printf("%c",*s1++);  //��1�������
       putchar(*s1++);    //��2�������
   printf("\n");
}
