#include<stdio.h>
#define M 4
void read(int b[][M],int n);   //nΪ����b��ָ�볤�ȣ�һ��һά����������void read(int b[],int n)����ά��������:void read(int b[][M],int n)
void sum(int c[][M],int n);
int main()
{
   int a[M][M];
   read(a,M);  //����read������a��Ӧ��ά����b��M��Ӧn������������a��
   return 0;
}
void read(int b[][M],int n)
{
   int i,j;
   printf("please input the numbers:");
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
		  scanf("%d",&b[i][j]);
   }
   sum(b,n);   //����sum����  
}
void sum(int c[][M],int n)
{
   int i,j,k=0,t=0;
   for(i=0;i<n;i++)
   {
	   k+=c[i][i];  //�������Խ���
	   t+=c[i][3-i];  //����ζԽ���
   }
  
   printf("�������Խ���Ԫ��֮��:%d;�ζԽ���֮��Ϊ:%d\n",k,t);
}