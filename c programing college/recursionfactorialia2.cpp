//factorial of number using recursion
#include<stdio.h>
int factorial(int n)
{  
	if(n==0)
	{
		return 1;
	}else
	{
       return n*factorial(n-1);		
	}
}
int main()
{ int n,fact;
  printf("enter number:");
  scanf("%d",&n);
  fact=factorial(n);
  printf("factorial of number:%d",fact);
 return 0;
}
