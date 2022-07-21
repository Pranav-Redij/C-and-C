//gcd using recursion
#include<stdio.h>
int gcd(int x,int y)
{
	if(x==0)
	return y;
	else if(x>y)
	return gcd(x%y,y);
	else
	return gcd(y,x);
}
int main()
{
	int a,b;
	printf("enter 2 no:");
	scanf("%d %d",&a,&b);
	printf("\n gcd of 2 no is:%d",gcd(a,b));
    return 0;
}
