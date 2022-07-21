//first n terms of fibonacci series 
#include<stdio.h>
int main()
{
    int f=0,s=1,t,n;
    printf("enter number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",f);
    }
    else if(n>=2)
    {   
        for(int i=1;i<=n-2;i++)
     {
        printf("%d\t%d\t",f,s);
        t=f+s;
          printf("%d\t",t);
        f=s;
        s=t;
      
     }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}