#include<stdio.h>
struct date      //�����ڽṹ�� ��date�ǽṹ������
{
    int year;  //year�ǽṹ�����������Ա��1��
    int month;  //month�ǽṹ�����������Ա2��
    int day;
};
struct people    //������ṹ��  ��peopleΪ�ṹ����
{
   char name[40];  //nameΪ�ṹ�������
   char add[40];  //addrΪ�ṹ�������
   char sex[20];
   struct date birthday;   //�ṹ���Ƕ��
   struct date entryday;
};
int main()
{
    struct people peo1={"wuyunhui","No.609 street Wanda","male",{1976,10,1},{2000,7,1}};   //����ṹ���Ƕ�׳�ʼ����peo1Ϊ�ṹ��������ʼ���ṹ��������
	printf("name:%s\n",peo1.name);
    printf("address:%s\n",peo1.add);
	printf("sex:%s\n",peo1.sex);   //��peo1.sex���൱��һ������
	printf("birthday:%d/%d/%d\n",peo1.birthday.year,peo1.birthday.month,peo1.birthday.day);
	printf("entryday:%d/%d/%d\n",peo1.entryday.year,peo1.entryday.month,peo1.entryday.day);
	return 0;
}