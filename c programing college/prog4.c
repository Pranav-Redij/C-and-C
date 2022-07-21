//for practice
#include<stdio.h>
#include<math.h>
int main()
{
    int a,count=0;
    printf("enter number:\n");
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        { 
            count=1;
        }
    }
    if(count==1)
    {
        printf("not prime\n");
    }else{
        printf("prime \n");
    }
    return 0;
}
