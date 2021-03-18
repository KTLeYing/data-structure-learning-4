#include<stdio.h>
struct employer
{
    char name[30];
	char sex[30];
	int age;
	float weight;
};
void outdata(struct employer);
int main()
{
    struct employer emp[3]={{"lijun","male",50,180.5},{"zhangfei","male",45,160.5},{"liuping","female",38,100.7}};
	int i=0,j;
	for(j=1;j<=2;j++)
	{
		if(emp[i].age<emp[j].age)
            i=j;
	}
	outdata(emp[i]);
	return 0;
}
void outdata(struct employer empmax)
{
   printf("the information of the oldest employer is:");
   printf("\nname:%s\n",empmax.name);
   printf("sex:%s\n",empmax.sex);
   printf("age:%d\n",empmax.age);
   printf("weight:%f\n",empmax.weight);
}










