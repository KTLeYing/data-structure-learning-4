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
void replace(char *a,char *b,int c)   //����x���ݸ�ָ�����a��ָ�����a���Ե���������ʹ�ã��൱������x�������������������ˣ�����ָ�������aһ����ָ�����bҲһ����
{
   int i=0;
   while(a[i+c]!='\0' && b[i]!='\0')   //���и��ƹ���
   {
        a[i+c]=b[i];
		i++;
   }
   a[i+c]='\0';
}
