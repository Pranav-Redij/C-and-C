//gcd using recursion 
#include<stdio.h>
int gcd(int x,int y)
{
	if(x==0)
	{ 
	return y;
	}else if(x>y)
	{
		return gcd(x%y,y);
	}else{
		return gcd(y,x);
	}
}
int main()
{
	int a,b,g;
	printf("enter the two number:");
	scanf("%d%d",&a,&b);
	g=gcd(a,b);
	printf("\ngcd=%d",g);
	return 0;
}
