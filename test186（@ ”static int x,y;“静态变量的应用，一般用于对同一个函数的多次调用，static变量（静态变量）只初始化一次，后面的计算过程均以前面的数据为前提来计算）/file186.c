#include<stdio.h>
int func(int a,int b);
int main()
{
    int m=1,n=4,p;
	p=func(m,n);
	printf("after the first transfer is:%d\n",p);
    p=func(m,n);
	printf("after the second transfer is :%d\n",p);
	return 0;
}
int func(int a,int b)
{
    static int i=2,j=0;    //��̬����ֻ��ʼ��һ�Σ��ڶ��ε���ʱ��i��j��ֵ����һ�ε��ú�i��j��ֵ�����㣬һ�����ڶ�ε���ͬһ������
	i+=j+1;
	j=i+a+b;
	return j;
}