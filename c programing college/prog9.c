//quadratic equation root 
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d;
    printf("enter the 3 coeff:");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
    printf("not a quadratic equation");
    }
    else
    {
     
      d=(b*b)-(4*a*c);
       printf("is quadratic equation %f",d);
      if(d>0)
      {
          r1=(-b+sqrt(d))/2*a;
          r2=(-b-sqrt(d))/2*a;
       printf("roots are %f and %f",r1,r2);
      }
      else if(d==0)
      {
          r1=(-b)/2*a;
          r1=(-b)/2*a; 
          printf("roots are %f and %f",r1,r2);  
      }
      else if(d<0)
      {
        r1=(-b)/2*a;
        r2=sqrt(-d)/2*a;
         printf("roots are %f+%f and %f-%f",r1,r2,r1,r2);  
      }
      
   }
      return 0;
 }
