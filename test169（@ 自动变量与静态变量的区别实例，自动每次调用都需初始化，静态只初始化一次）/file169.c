#include<stdio.h>
void  auto_static();
int main()
{
	int i;
    for(i=0; i<5; i++) 
		auto_static();
	return 0;
}
void  auto_static()
{  
	int var_auto=0;		/*�Զ�������ÿ�ε��ö����³�ʼ������������һ�ε�ֵΪ����ȥ����*/
    static int var_static=0;		/*��̬�ֲ�������ֻ��ʼ��1��,���������һ�ε�ֵΪ��������*/
    printf("var_auto=%d, var_static=%d\n", var_auto, var_static);
    ++var_auto;
    ++var_static;
}			