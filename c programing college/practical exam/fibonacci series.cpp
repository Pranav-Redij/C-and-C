//print fibonacci series
#include<stdio.h>
int main()
{   
    int f=0,s=1,t,n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("\nfibonacci series is:");
    printf("%d \t",f);
    printf("%d \t",s);
    for(int i=3;i<=n;i++)
    {
    	t=f+s;
    	f=s;
    	s=t;
    	printf("%d \t",t);
	}
    
	return 0;
}
