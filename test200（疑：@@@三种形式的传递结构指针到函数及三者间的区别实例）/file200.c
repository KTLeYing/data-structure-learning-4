//��1:�ṹָ��"p->name"��ʽ
#include<stdio.h>
#define N 4
struct minneed
{
   char name[30];
   char sex[10];
   int age;
   float amount;
}
void outdata(struct minneed *p);   //��������
int main()
{
    int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,57,180.0},{"liping",1,56,150.0}};
	struct minneed *p;   //����ṹָ��
	p=needs;           //�ṹָ�븳ֵ
	for(i=0;i<N;i++)
		outdata(p++);   //ָ��ָ����һ��Ԫ��
	return 0;
}
void outdata(struct minneed *p)       //���庯��
{
    printf("\nname:%s\n",p->name);  //p->name��ʽ
	printf("sex:%s\n",(p->sex==1)?"boy":"girl");
	printf("age:%d\n",p->age);
	printf("address:%.2f\n",p->amount);
}


/*
//��2::�ṹָ��"(*p).name"��ʽ
#include<stdio.h>
#define N 4
struct minneed
{
   char *name[30];
   char sex[10];
   int age;
   float amount;
}
void outdata(struct minneed *p);   //��������
int main()
{
    int i;
	struct minneed needs[N]={{"zhangjun",1,55,150.0},{"wuwei",0,48,130.0},{"duli",0,57,180.0},{"liping",1,56,150.0}};
	struct minneed *p;   //����ṹָ��
	p=needs;           //�ṹָ�븳ֵ
	for(i=0;i<N;i++)
		outdata(p++);   //ָ��ָ����һ��Ԫ��
	return 0;
}
void outdata(struct minneed *p)       //���庯��
{
    printf("\nname:%s\n",(*p).name);    //(*p).name��ʽ
	printf("sex:%s\n",((*p).sex==1)?"boy":"girl");
	printf("age:%d\n",(*p).age);
	printf("address:%.2f\n",(*p).namount);
}




//��3:һ��Ľṹ������ʽ"need.name"��ʽ
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
*/
