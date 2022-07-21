//power x^n using recursion
#include<stdio.h>
int pow(int x,int y)
{
	if(y==0)
    return 1;
    else
    return x*pow(x,y-1);
}
int main()
{
	int x,y,result;
	printf("enter the value of x and y:");
	scanf("%d %d",&x,&y);
	result=pow(x,y);
	printf("\n result:%d",result);
	return 0;
}
