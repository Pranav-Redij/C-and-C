//rotation of array 
//make choice press 1 for left shift and 2 for right shift
#include<stdio.h>
int main()
{   int n,c;
	int arr[n];

	printf("enter the value of n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter value(1.for left shift,2.for right shift):");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				int temp,i=0,j=1;
				temp=arr[i];
				while(j<n)
				{ 
				  arr[i]=arr[j];
				  i++;
				  j++;
				}
				arr[n-1]=temp;
					for(i=0;i<n;i++)
				{
					printf("\t%d",arr[i]);
				}
			break;
			}
	    case 2:
	    	{
	    	 	int temp,i=n-1,j=n-2;
				temp=arr[i];
				while(j>=0)
				{ 
				  arr[i]=arr[j];
				  i--;
				  j--;
				}
				arr[0]=temp;	
					for(i=0;i<n;i++)
				{
					printf("\t%d",arr[i]);
				}
			break;
			}
	}
	return 0;
}
