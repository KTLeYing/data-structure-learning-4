/*//��1��"need1.name"��ʽ(ʹ��һ��Ľṹ�������ʽṹ��Ա)
#include<stdio.h>
#define N 4
struct minneed   //�����ṹ��
{
    char *name;   //ָ��name
	char sex;
	unsigned short age;
	float amount;
};
void outdata(struct minneed);   //��������
int main()
{
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wumei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};  //��ʼ���ṹ��
	int i;
	for(i=0;i<N;i++)
		outdata(needs[i]);  //�ṹ�����ʱ�������������ṹ��������
	return 0;
}
void outdata(struct minneed need1)   //���庯��(����һ��Ķ��庯����struct�൱���������ͣ�need1�൱�ڱ���������int a��)
{
    printf("\nname:%s\n",need1.name);
	printf("sex:%s\n",(need1.sex==1)?"boy":"girl");
	printf("age:%d\n",need1.age);
	printf("add:%.2f\n",need1.amount);
}
*/


/*
//��2��"p->name"��ʽ��ʹ��ָ��ṹ�������ʽṹ��Ա��
#include<stdio.h>
#define N 4
struct minneed   
{
    char *name;
	char sex;
	unsigned short age;
	float amount;
};
int main()
{
	int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wumei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};  
    struct minneed *p;    //����һ���ָ���������������struct���൱���������͡�int����
	p=needs;        //ָ�븳ֵ
	for(i=0;i<N;i++)
	{
       printf("\nname:%s\n",p->name);
	   printf("sex:%s\n",(p->sex==1)?"boy":"girl");
 	   printf("age:%d\n",p->age);
   	   printf("add:%.2f\n",p->amount);
	   p++;
	}
	return 0;
}
*/



//��3��"(*p).name"��ʽ��ʹ��ָ��ṹ�������ʽṹ��Ա��
#include<stdio.h>
#define N 4
struct minneed   
{
    char *name;
	char sex;
	unsigned short age;
	float amount;
};
int main()
{
    int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wumei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};  
    struct minneed *p;   ////����һ���ָ���������������struct���൱���������͡�int����
	p=needs;        //ָ�븳ֵ
	for(i=0;i<N;i++)
	{
       printf("\nname:%s\n",(*p).name);
	   printf("sex:%s\n",((*p).sex==1)?"boy":"girl");
 	   printf("age:%d\n",(*p).age);
   	   printf("add:%.2f\n",(*p).amount);
	   p++;
	}
	return 0;
}
