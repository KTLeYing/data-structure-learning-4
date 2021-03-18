#include<stdio.h>
#define M 3
#define N 4
void line_max(int y[M][N]);
int main()
{
    int x[M][N]={1,5,7,4,2,6,4,3,8,2,3,1};
	line_max(x);
	return 0;
}
void line_max(int y[M][N])
{
    int i,j,k,t;
	for(i=0;i<M;i++)
	{
	   k=0;
	   for(j=1;j<N;j++)
	   {
	      if(y[i][k]<y[i][j])
		  {
		     /*t=y[i][k];     //处理方式1
			 y[i][k]=y[i][j];
			 y[i][j]=t;*/
			 //y[i][k]=y[i][j];    //处理方式2
			  k=j;      //处理方式3
		  }
	   }
       printf("the max of line %d is:%d\n",i,y[i][k]);
	}
}