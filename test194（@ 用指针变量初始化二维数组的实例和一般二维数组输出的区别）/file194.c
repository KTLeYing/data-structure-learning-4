#include<stdio.h>
int main()
{
    int a[4][5],i,n;
	int *p;
	p=a[0];
	printf("please input the number:");
	for(i=0;i<20;i++)
	{
		scanf("%d",&n);
		*p++=n;     //为指针变量赋值
	}
	printf("the two dimension array is:");
	p=a[0];
	for(i=0;i<20;i++)
	{
	    if(i%5==0)
			printf("\n");
		printf("%4d",*p++);    // 输出指针变量的内容（数据、值）
	}
	printf("\n");
	return 0;
}


/*#include<stdio.h>
int main()
{
    int a[4][5],i,j;
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
		  scanf("%d",&a[i][j]);  
	printf("the two dimension array is:\n");
    for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/