
//��1:�ṹָ��"need.name"��ʽ��һ��ṹ������������ֱ�ӷ��ʽṹ��Ա��
#include<stdio.h>
#define N 4  //�궨��N
struct minneed
{
    char *name;     //����ָ�����name
	char sex;
	int age;
	float amount;
};
void outdata(struct minneed);      //��������������һ��ĺ���������struct�൱����������int��minneed�൱�ڱ�����a��
int main()
{
    struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};     //�ṹ������ʼ��
	int i;
	for(i=0;i<N;i++)
	   outdata(needs[i]);     //���ú���������ʱ����������
	return 0;
}
void outdata(struct minneed need)      //���庯��������һ��ĺ���������struct�൱����������int��need�൱�ڱ�����a��������������
{
    printf("\nname:%s\n",need.name);     //need.name��ָ���������ʽ
	printf("sex:%s\n",(need.sex==1)?"boy":"girl");    
	printf("age:%d\n",need.age);
	printf("address:%.2f\n",need.amount);
}


/*
//��2:�ṹָ��"(*p).name"��ʽ��ָ��ṹ����need���ʳ�Ա��
#include<stdio.h>
#define N 4
struct minneed
{
    char *name;
	char sex;
	int age;
	float amount;
};
int main()
{
	int i;
    struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};
	struct minneed *p;   //����ṹָ��p������һ���ָ������Ķ��壬struct�൱����������int��
	p=needs;      //Ϊָ�������ֵ
	for(i=0;i<N;i++)
	{
	   printf("\nname:%s\n",(*p).name);     //(*p).name��ָ�������ʽ    
	   printf("sex:%s\n",((*p).sex==1)?"boy":"girl");    
       printf("age:%d\n",(*p).age);
	   printf("address:%.2f\n",(*p).amount);
	   p++;
	}
	return 0;
}



//��3:�ṹָ��"p->name"��ʽ��ָ��ṹ����need���ʳ�Ա��
#include<stdio.h>
#define N 4
struct minneed
{
    char *name;
	char sex;
	int age;
	float amount;
};
int main()
{
	int i;
    struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,55,180.0},{"liping",1,56,150.0}};
	struct minneed *p;       //����ṹָ��p������һ���ָ������Ķ��壬struct�൱����������int��
	p=needs;       //Ϊָ�������ֵ 
	for(i=0;i<N;i++)
	{
	   printf("\nname:%s\n",p->name);     //p->name��ָ�������ʽ
	   printf("sex:%s\n",(p->sex==1)?"boy":"girl");    
       printf("age:%d\n",p->age);
	   printf("address:%.2f\n",p->amount);
	   p++;
	}
	return 0;
}
*/