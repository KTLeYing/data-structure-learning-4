#include<stdio.h>
int cmpstring(char *s1,char *s2);  //�����ȽϺ�����*s1,*s2���ַ���ָ�루һ����*��������ָ������ˣ�
int main()
{
    int w;
	char str1[80],str2[80];
	printf("please input the first string:");
	scanf("%s",str1);
	printf("please input the second string:");
	scanf("%s",str2);
	printf("the result is:");
	w=cmpstring(str1,str2);   //�������飨����������
	if(w>0)
		printf("the first string longer than the second string\n");
	else
		if(w<0)
			printf("the first string's length shorter than the second string's length\n");
		else
			printf("the first string's length is equal to the second string's length\n");
    return 0;
}
int cmpstring(char *s1,char *s2)
{
    while(*s1)    //��*��ȡs1��ASCll�룬�ַ�����Ϊ�գ���ֵ��Ϊ0��Ϊ�棬ִ����������
	{
		if(*s1-*s2)    //����ASCll��֮���Ϊ0�������ַ�����ʱ��ִ���������
           return (*s1-*s2);
		else
		{           //�����ַ����ʱ����ָ�����
		   s1++;  
		   s2++;
		}
	}
	return 0;
}