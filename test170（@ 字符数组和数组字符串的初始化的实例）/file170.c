#include<stdio.h>
int main()
{
	int i;
    char str[5]="he";   //对的，str里定义的元素个数要大于后面的字符串赋值的字符个数
	char str[5]="hello";   //错的，str里定义的元素个数要大于后面的字符串赋值的字符个数
	char str[5]={'h','e','l','l','o'};  //对的，str里定义的元素个数要大于或等于后面的赋值的字符数
	char str[]={'h','e','l','l','o'};    //对的，str的元素个数可以由系统根据后面赋值的字符个数来决定
	char str[3]={'h','e','l','l','o'};    //错的，	char str[5]="hello";   //错的，str里定义的元素个数要大于后面的字符串赋值的字符个数
	//for(i=0;i<=4;i++)       //字符数组里的字符也可用for循环来输出
	//	printf("%c",str[i]);
	puts(str);
	return 0;
}
