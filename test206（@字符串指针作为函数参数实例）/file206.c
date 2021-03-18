#include<stdio.h>
int cmpstring(char *s1,char *s2);  //声明比较函数，*s1,*s2是字符串指针（一定有*，否则不是指针变量了）
int main()
{
    int w;
	char str1[80],str2[80];
	printf("please input the first string:");
	scanf("%s",str1);
	printf("please input the second string:");
	scanf("%s",str2);
	printf("the result is:");
	w=cmpstring(str1,str2);   //调用数组（用数组名）
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
    while(*s1)    //用*读取s1的ASCll码，字符串不为空，即值不为0，为真，执行下面的语句
	{
		if(*s1-*s2)    //计算ASCll码之差，不为0，即两字符不等时，执行下面语句
           return (*s1-*s2);
		else
		{           //当两字符相等时，两指针后移
		   s1++;  
		   s2++;
		}
	}
	return 0;
}