#include<stdio.h>
#include<string.h>
int main()
{
    void strsort(char *s[],int n);  //�������麯��,*s[]����ָ�����飬n�����ַ������ȣ�Ԫ�س��ȣ�
	int i;
	char *s1[]={"C","Basic","Visual Studio","Foxcar","Doing"};      //��ʼ��ָ������
	strsort(s1,sizeof(s1)/4);    //�����ַ������к���,sizeof(s1)/4�������������Ԫ�ظ�����4��ָһ��ָ��ռ��4���ֽڣ���sizeof(������)/4��
	for(i=0;i<sizeof(s1)/4;i++)  
	    printf("%s\n",s1[i]);    //%s��s1[i]���ã����Ի�ӵ�һ���ַ���ʼ����Ժ���ַ�
	return 0;
}
void strsort(char *s[],int n)
{
    int i,j;
	char *t;    //�������ڽ������ַ���ָ��
    for(i=0;i<n-1;i++)
	   for(j=i+1;j<n;j++)
	   {
	      if(strcmp(s[i],s[j])>0)     //���s[i]��s[j]��ָÿ���ַ����Ŀ�ͷ��һ���ַ������׵�ַ����ASCll�Ĵ�С������ʼִ�н�������
		  {
		     t=s[i];         //����ָ�������λ�ã���s[i]��s[j]��ָ�򽻻����׵�ַ�����������ַ���Ҳ��֮��������Ϊ��%s��s1[i]���ã����Ի�ӵ�һ���ַ���ʼ����Ժ���ַ�
			 s[i]=s[j];
			 s[j]=t;
		  }
	   }
}