//take p,r,n and give simple interest and compound interest
//si=p*r*n/100
//compound i=a-p
//a=p(1+r/100)^n
#include<stdio.h>
#include<math.h>
int main()
{
    float si,ci,p,r,n;
    printf("enter p r n values:");
    scanf("%f%f%f",&p,&r,&n);
    si=(p*r*n)/100;
    ci=p*pow((1+(r)/100),n)-p;
    printf("si is:%f",si);
    printf("ci is:%f",ci);
    return 0;
}