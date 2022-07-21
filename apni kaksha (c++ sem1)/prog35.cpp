/* print reverse number
logic= when we divide any number with 10 we get remender is equal to last digit and the quotient is 
equal to the all digit excep the last one for example
123%10=3
123/10=12*/
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"enter a positive number \n";
    cin>>n;
    b=n;
    while(n>0)
    {   n=b;
        a=n%10;
        if(a>0)
        {
        cout<<a;
        }
        b=n/10;
    }
return 0;
}