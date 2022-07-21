//sorting (bubble sort)
#include<stdio.h>
int main()
{   int temp=0;
	int n,arr[n],counter=1;
	printf("enter the value of N:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{   printf("enter the value of %d array element:",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-i;j++)
		{ 
		  if(arr[j]<arr[j+1])
		  {
		  	temp=arr[j];
		  	arr[j]=arr[j+1];
		  	arr[j+1]=temp;
		  }	
		}
	}
	printf("sorted array is:");
	for(int i=0;i<n;i++)
	{  
	 printf("%d ",arr[i]);
	
	}
	
	return 0;
}
