//初始化方式1:
#include<stdio.h>
struct person
{  
	char name[30];
    int count;
};
int main()
{   
    struct person leader[3]={{"guo-qian-ying",0},{"du-li",0},{"zheng-xiao-mei",0}};   //在主函数里初始化方式(struct+结构体名+结构变量名=...)
	int i,j,m=0,n; 
    char leader_name[30];
	printf("please input five leader name:");
    for(i=1;i<6;i++)
    {  
		scanf("%s",leader_name);
        for(j=0;j<3;j++)
		{
	      if(strcmp(leader_name,leader[j].name)==0)
	        leader[j].count++;
		}
    }
    for(i=0;i<3;i++)
       printf("%5s:%d\n",leader[i].name,leader[i].count);
	for(n=1;n<=2;n++)
	{
	  if(leader[n].count>leader[m].count)
          m=n;
	}
	printf("the winner is:%s\n",leader[m].name);
	return 0;
}


/*
//初始化方式2:
#include<stdio.h>
struct person
{  
	char name[30];
    int count;
}leader[3]={{"guo-qian-ying",0},{"du-li",0},{"zheng-xiao-mei",0}};   //在结构体后面初始化（结构变量名=...）
int main()
{   
	int i,j,m=0,n; 
    char leader_name[30];
	printf("please input five leader name:");
    for(i=1;i<6;i++)
    {  
		scanf("%s",leader_name);
        for(j=0;j<3;j++)
		{
	      if(strcmp(leader_name,leader[j].name)==0)
	        leader[j].count++;
		}
    }
    for(i=0;i<3;i++)
       printf("%5s:%d\n",leader[i].name,leader[i].count);
	for(n=1;n<=2;n++)
	{
	  if(leader[n].count>leader[m].count)
          m=n;
	}
	printf("the winner is:%s\n",leader[m].name);
	return 0;
}
*/

