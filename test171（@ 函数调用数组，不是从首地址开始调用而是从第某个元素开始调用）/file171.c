#include<stdio.h>
int sum(int x[],int n);
int main()
{
	int a[5]={1,2,3,4,5};
	sum(&a[2],2);    //此处是从数组a的第三个元素开始调用，而不是从首地址开始调用
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