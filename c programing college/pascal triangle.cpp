//pascal triangle
#include<stdio.h>
int factorial(int x)
{
	int fact=1;
	if(x==0)
	{
		return 1;
	}
	else
	{
	
	 for(int i=1;i<=x;i++)
	 {
		fact=fact*i;
	 }
	 return fact;
   } 
}
int main()
{   
	int n,ncr;
	printf("enter the value n:");
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
	{
		//spaces
		//if there are n=5 then there are n-1
		for(int j=1;j<=n-i-1;j++)
		{
			printf(" ");
		}
		
	//now for each value of pascal triangle with nCr formula=n!/(n-r)!*r!
		for(int j=0;j<=i;j++)//i+1 because i starts from 0
		{
          	ncr=factorial(i)/(factorial(i-j)*factorial(j));	
          		printf("%d ",ncr);
		}
		//new line
		printf("\n");
		
	}
	return 0;
}
