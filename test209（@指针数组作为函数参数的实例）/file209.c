#include<stdio.h>
#include<string.h>
int main()
{
    void strsort(char *s[],int n);  //声明数组函数,*s[]代表指针数组，n代表字符串长度（元素长度）
	int i;
	char *s1[]={"C","Basic","Visual Studio","Foxcar","Doing"};      //初始化指针数组
	strsort(s1,sizeof(s1)/4);    //调用字符串排列函数,sizeof(s1)/4用来计算数组的元素个数，4是指一个指针占用4个字节，“sizeof(数组名)/4”
	for(i=0;i<sizeof(s1)/4;i++)  
	    printf("%s\n",s1[i]);    //%s与s1[i]连用，所以会从第一个字符开始输出以后的字符
	return 0;
}
void strsort(char *s[],int n)
{
    int i,j;
	char *t;    //定义用于交换的字符型指针
    for(i=0;i<n-1;i++)
	   for(j=i+1;j<n;j++)
	   {
	      if(strcmp(s[i],s[j])>0)     //如果s[i]比s[j]大（指每个字符串的开头第一个字符（即首地址）的ASCll的大小），则开始执行交换步骤
		  {
		     t=s[i];         //交换指针数组的位置，是s[i]和s[j]的指向交换，首地址交换，整个字符串也随之交换，因为是%s与s1[i]连用，所以会从第一个字符开始输出以后的字符
			 s[i]=s[j];
			 s[j]=t;
		  }
	   }
}