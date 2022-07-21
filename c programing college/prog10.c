//write a c program to read 3 values and check if they forms sides of trinagle if yes specify the type equil,isoscelene,scelene
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 values");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(c+b>a))
    {
        printf("these forms triangle");
        if((a==b)&&(b==c))
        {
            printf("equilateral");
        }
        else if((a==b)||(b==c)||(c==a))
        {
            printf("isoscelen");
        }else{
            printf("scalene triangle");
        }
    }
 return 0;
}