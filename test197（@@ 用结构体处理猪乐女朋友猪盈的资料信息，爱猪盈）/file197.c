#include<stdio.h>
struct boyfriend
{
    char name1[40];
	char sex1[40];
	int age1;
	char scho1[40];
    char tendresselan1[100];
};
struct girlfriend
{
    char name2[40];
	char sex2[40];
	int age2;
    char scho2[40];
	char tendresselan2[100];
    struct boyfriend zhule;
};
int main()
{
    struct girlfriend zhuying={"guo qian ying","female",18,"hua guang","lose her heart to ma zhen le and live a happy life with ma zhen le forever",{"ma zhen le","male",19,"lingshi","lose his heart to guo qian ying and live a happy life with guo qian ying forever"}};
	printf("name:%s\n",zhuying.name2);
	printf("sex:%s\n",zhuying.sex2);
	printf("age:%d\n",zhuying.age2);
	printf("school:%s\n",zhuying.scho2);
	printf("tendresse language:%s\n",zhuying.tendresselan2);
	printf("boyfriend:%s ; %s ; %d ; %s ; %s\n\n",zhuying.zhule.name1,zhuying.zhule.sex1,zhuying.zhule.age1,zhuying.zhule.scho1,zhuying.zhule.tendresselan1);
	return 0;
}