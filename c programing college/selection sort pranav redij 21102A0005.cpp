//sorting (selection sort)
#include<stdio.h>
int main()
{   int temp=0;
	int n,arr[n];
	printf("enter the value of N:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{   printf("enter the value of %d array element:",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n;j++)
		{ 
		  if(arr[i]<arr[j])
		  {
		  	temp=arr[i];
		  	arr[i]=arr[j];
		  	arr[j]=temp;
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
