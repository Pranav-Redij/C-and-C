//largest number from 1d array
#include<stdio.h>
int main()
{
	int n,key;
	printf("enter number elements you wanted to input:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	key=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(a[i]>key)
		key=a[i];
	}
	printf("\n largest number is:%d",key);
	return 0;
}
