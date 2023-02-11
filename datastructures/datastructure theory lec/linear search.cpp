//linear search
#include<stdio.h>
int main()
{
	int n,a[n],key;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("\nenter the elements in array:");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nenter the element to be search:");
	scanf("%d",&key);
	//now search key
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
	   { printf("\nfound");
		 return 0;
	   }	
	}
	printf("\nnot found!!!!");
	return 0;
}
