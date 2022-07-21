//3digit number 
//find sum of digit and reverse of number
#include<stdio.h>
int main()
{
    int n,n1,rev=0,sum=0,r;
    printf("enter 3 digit number:");
    scanf("%d",&n);
    n1=n;
    r=n1%10;
    sum=sum+r;
    rev=rev*10+r;
    n1=n1/10;

     r=n1%10;
    sum=sum+r;
    rev=rev*10+r;
    n1=n1/10;

    r=n1%10;
    sum=sum+r;
    rev=rev*10+r;
    n1=n1/10;
    printf("sum and rev of %d is:%d %d",n,sum,rev);
    return 0;
}