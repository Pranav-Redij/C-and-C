//largest of two number using conditional operator
//()?():();
#include<stdio.h>
int main()
{
    int max,a,b;
    printf("enter 2 number:");
    scanf("%d%d",&a,&b);
    max=(a>b)?(a):(b);
    printf("max number is:%d",max);
    return 0;
}