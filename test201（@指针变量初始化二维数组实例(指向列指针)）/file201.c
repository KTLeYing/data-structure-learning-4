#include<stdio.h>
int main()
{
   int i,a[4][5];
   int *p;
   p=a[0];       //Ϊָ�븳ֵ
   for(i=0;i<20;i++)
	   *p++=i;   //ָ�������ʼ����ά����,*p++��a[1],a[2]...һ������ָ�룬�ǵ�ַ��
   printf("the two array is:");
   p=a[0];        //��ָ��pָ�ص�һ�е�һ��Ԫ�صĵ�ַ����ԭ����λ��(ָ��ָ����ָ��)
   for(i=0;i<20;i++)
   {
	   if(i%5==0)
		   printf("\n");
       printf("%4d",*p++);    //ָ����������ά��������
   }
   printf("\n");
   return 0;
}