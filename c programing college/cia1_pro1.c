//leap year or not 
#include<stdio.h>
int main()
{
    int y;
    printf("enter year:\n");
    scanf("%d",&y);
    if((y%400==0)||((y%100!=0)&&(y%4==0)))
    {
        printf("\nleap year");
    }else{
        printf("\nnot a leap year");
    }
    return 0;
}