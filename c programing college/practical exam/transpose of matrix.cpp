//tronspose of matrix

#include<stdio.h>
int main()
{
	int a[2][2],b[2][2];
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
		  b[i][j]=a[j][i];	
		}
	}
	printf("transpose of matrix:\n");
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
		  	printf("%d \t",b[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}
