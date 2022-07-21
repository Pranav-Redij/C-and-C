/* write a program to find givem number is armstrong or not
armstrong is a number which=153
1 cube+ 5 cube+3 cube=153*/
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,t;
    cout<<"enter a positive number \n";
    cin>>n;
    int orgi_nu=n;
    b=n;
    t=0;
    while(n>0)
    {   n=b;
        a=n%10;
        t=t+(a*a*a);

        b=n/10;
    }
    if(orgi_nu==t){                  //doubt== why we need to do same original number to differ word
cout<<"given number is armstrong";
    }else{
        cout<<"given number is not armstrong";
    }
return 0;
}