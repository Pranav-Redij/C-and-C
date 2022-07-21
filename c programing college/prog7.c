//given number is prime number or not
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("given number is not a prime number");
    }else{
         printf("given number is  a prime number");
    }
    return 0;
}