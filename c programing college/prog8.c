//given number is armstrong or not 
//this program is right but not showing right out here but when we check it on online compiler then it shows
#include<stdio.h>
#include<math.h>
int main()
{
    int l,n,n1,k=0,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
      n1=n1/10;
      k++;
    }
    n1=n;
    while(n1!=0)
    {
        l=n1%10;
        sum=sum+pow(l,k);
        n1=n1/10;
    }
    if(sum==n)
    {
        printf("given number is armstrong");
    }
    else
    {
        printf("given number is not a armstrong %d",sum);
        
    }
 return 0;
}