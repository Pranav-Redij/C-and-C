//binary search
#include<stdio.h>
int binarysearch(int a[],int key,int n)
{
	int start=0;
	int end=n-1;
	int mid;
	while(start<=end)
	{   mid=(start+end)/2;
	
	    if(a[mid]==key)
	    {
	    	return 1;
		}else if(key<a[mid])
		{
			end=mid-1;
		}else{
			start=mid+1;
		}

	}
	return 0;
}
//but we need sorted array;(sorting in asending order because searching program is written in that way)
void bubblesort(int a[],int n)
{   
for(int i=0;i<n-1;i++)
{
  for(int j=0;j<n-1;j++)
  {
 	if(a[j]>a[j+1])
	{
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
  }	
}
   

}
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
/*	//now search key
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
	   { printf("\nfound");
		 return 0;
	   }	
	}
	printf("\nnot found!!!!");
*/
//sort array because to perform binary search we need sorted array
bubblesort(a,n);
printf("\n");
	for(int i=0;i<n;i++)
	printf("\t%d",a[i]);
   //search	with the help of binary search
	if(binarysearch(a,key,n))
	{
	 printf("\nfound");
		 return 0;	
	}
	printf("\nnot found!!!!");

	return 0;
}
