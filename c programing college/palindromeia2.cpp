//check wether given number is palindrome or not 
#include<stdio.h>
int main()
{
	int l,n,n1,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
    	l=n%10;
    	rev=(rev*10)+l;
    	n=n/10;
	}
	printf("%d",rev);
	if(rev==n1)
	{
		printf("given number is palindrome");
	}else
	{
		printf("not palindrome");
	}
 return 0;
}
