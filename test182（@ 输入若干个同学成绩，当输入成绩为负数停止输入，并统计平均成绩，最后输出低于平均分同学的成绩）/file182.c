#include<stdio.h>
int main()
{
    float sum=0.0,stu[1000],ave,a;
	int i=0,j;
    printf("please input the first result:");
	scanf("%f",&a);
	while(a>=0.0 && i<1000)
	{
		sum+=a;
		stu[i]=a;
		i++;
		scanf("%f",&a);
	}
	ave=sum/i;
	printf("the average is:%f",ave);
	printf("the result that more over the average is:");
    for(j=0;j<i;j++)
    {
		if(stu[j]<ave)
		   printf("%f ",stu[j]);
	}
	printf("\n");
	return 0;
}