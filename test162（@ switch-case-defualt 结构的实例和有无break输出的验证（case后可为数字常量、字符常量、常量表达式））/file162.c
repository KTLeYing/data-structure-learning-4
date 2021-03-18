#include<stdio.h>
int main()
{
    int a;
	printf("1:Goodmoring!\n");
	printf("2:Goodafternoon!\n");
	printf("3:Goodnight!\n");
	printf("4:Goodmidnight!\n");
	printf("please input a number:");
	scanf("%d",&a);
	switch(a)
	{
	   case 1:
		  printf("1:Goodmorning!\n");
	      break;
	   case 2: 
	      printf("2:Goodafternoon!\n");
		  break;
       case 3:
		  printf("3:Goodnight!\n");
	      break;
	   case 4:
		  printf("4:Gooodmidnight!\n");
	  	  break;
	   default:
		  printf("there is an error!\n");
	}
	return 0;
}