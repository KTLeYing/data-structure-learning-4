#include<stdio.h>
#include<string.h>
int main()
{
    char b[30];
	strcpy(&b[0],"CH");   //��Ϊ�������b[1],����ֻ���Ƶ�һ��Ԫ��C��b[0]
	strcpy(&b[1],"DEF");   //��Ϊ�������b[2],����ֻ���Ƶ�һ��Ԫ��D��b[1]
	strcpy(&b[2],"ABC");   //��Ϊ����û����������ĳԪ�ظ����ˣ����ԻὫ����Ԫ��ABC������b[2]
	printf("%s\n",b);
    return 0;
}