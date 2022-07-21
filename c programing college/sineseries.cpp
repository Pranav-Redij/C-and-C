//sine series
#include<math.h>
#include<stdio.h>
int factorial(int x)
{
	int fact=1;
	for(int i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	float x,sum=0;;
	int n,sign=-1;

  printf(" Enter the value for x : ");
    scanf("%f",&x);
    printf(" Enter the value for n : ");
    scanf("%d",&n);
    x=x*3.14159/180;
    for(int i=1;i<=n;i=i+2)
    {   sign=sign*(-1);
    	sum=sum+(pow(x,i))*sign/factorial(i);
	}
	printf(" The value of Sin(%f) = %.4f",x,sum);
	return 0;
	
}
