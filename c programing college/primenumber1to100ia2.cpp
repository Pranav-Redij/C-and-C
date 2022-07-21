//prime number between 1 to 100
#include<stdio.h>
int isprime(int i)
{
	int n,c=0;
	for(int i=2;i<n;i++)
	{
		if((n%i)!=0)
		{
		    c=1;
		}
	}
	if(c=0)
	{
	    return 0;
	}
	else{return 1;}
}
int main()
{
  for(int i=1;i<=100;i++)
  {
  	if(isprime(i)==1)
  	{
  		printf("%d \t",i);
	  }
  }
 return 0;
}
