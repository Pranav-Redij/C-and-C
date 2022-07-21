//sum of all element in matrix
#include<stdio.h>
int main()
{
  	int a[2][2],sum=0;
	printf("enter the value of matrix 1:");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		  sum=sum+a[i][j];	
		}
	}
	printf("additon of matrix:\n");

		  	printf("%d \t",sum);	
	
	return 0;
}
