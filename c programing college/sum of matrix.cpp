//sum of matrix
#include<stdio.h>
int main()
{   int i,j,n,arr[i][j],sum=0;
	printf("enter the order of matrix:");
	scanf("%d",&n);
	i=n;
	j=n;
	for(int p=0;p<i;p++)
	{
		for(int q=0;q<j;q++)
		{
			scanf("%d",&arr[p][q]);
		}
	}
	//sum of all elements in array
	for(int p=0;p<i;p++)
	{	
	for(int q=0;q<j;q++)
		{
		  sum=sum+arr[p][q];
		}
	}
	printf("sum of matrix:%d",sum);
	return 0;
}
