#include<stdio.h>
#include<string.h>
int main()
{
    char b[30];
	strcpy(&b[0],"CH");   //因为后面存在b[1],所以只复制第一个元素C给b[0]
	strcpy(&b[1],"DEF");   //因为后面存在b[2],所以只复制第一个元素D给b[1]
	strcpy(&b[2],"ABC");   //因为后面没有其他数组某元素复制了，所以会将所有元素ABC都复制b[2]
	printf("%s\n",b);
    return 0;
}