#include<stdio.h>
void replace(char *a,char *b,int c);
int main()
{
    char x[1024],y[1024],z;
	printf("please input the origional string:");
	    scanf("%s",x);
	printf("please input the string thet you want:");
        scanf("%s",y);
    printf("please input the position that you start:");
        scanf("%d",&z);
	replace(x,y,z);
	printf("the fianl string is:%s",x);
	printf("\n");
	return 0;
}
void replace(char *a,char *b,int c)   //数组x传递给指针变量a后，指针变量a可以当做数组来使用，相当于数组x，但数后来的组名变了，与是指针变量名a一样（指针变量b也一样）
{
   int i=0;
   while(a[i+c]!='\0' && b[i]!='\0')   //进行复制过程
   {
        a[i+c]=b[i];
		i++;
   }
   a[i+c]='\0';
}
