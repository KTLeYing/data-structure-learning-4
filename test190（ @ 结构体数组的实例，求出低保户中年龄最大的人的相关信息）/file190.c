#include<stdio.h>
#define N 4
struct minneed
{
    char *name;
	char sex;
	unsigned short int age;
	float amount;
};
int main()
{
    struct minneed needs[N]={{"zhangjun",'M',55,150.0},{"wumei",'F',48,130.0},{"duli",'M',55,180.0},{"liping",'F',56,150.0}};   //���ṹ�������ʼ��     
	int i,m=0;
	for(i=1;i<N;i++)
		if(needs[m].age<needs[i].age)    //�ó���������Ԫ��
			m=i;
	printf("the minneed of the max age:");
	printf("name:%s; sex:%c; age:%d; address:%f\n",needs[m].name,needs[m].sex,needs[m].age,needs[m].amount);
	return 0;
}
