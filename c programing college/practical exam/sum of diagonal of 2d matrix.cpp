//accept of 2d matrix and find the sum of diagonal elements.
//program addition of 2 matrix 
#include<stdio.h>
int main()
{
	int a[2][2],sum1=0,sum2=0;
	printf("enter the value of matrix 1:");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//sum of 1st diagonal
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		  if(i==j)
		  sum1=sum1+a[i][j];
		}
	}

		//sum of 2st diagonal
		int k=1;
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		  if(i+2-k==j)//k==1 and k=k+2;
		 {
		   sum2=sum2+a[i][j];
	      k=k+2;
		  } 
		}
	}
	
	printf("diagonal 1:%d and diagonal 2:%d",sum1,sum2);	
	return 0;
}
