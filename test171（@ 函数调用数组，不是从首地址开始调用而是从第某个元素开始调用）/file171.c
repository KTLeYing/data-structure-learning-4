#include<stdio.h>
int sum(int x[],int n);
int main()
{
	int a[5]={1,2,3,4,5};
	sum(&a[2],2);    //�˴��Ǵ�����a�ĵ�����Ԫ�ؿ�ʼ���ã������Ǵ��׵�ַ��ʼ����
	printf("sum=%d\n",sum(&a[2],2));
   return 0;
}
int sum(int x[],int n)
{
    int i,z=0;
	for(i=0;i<n;i++)
		z+=x[i];
	return (z);
}