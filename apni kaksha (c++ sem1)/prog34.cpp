/* write a program to print the fibonacci series starting from 0,1
fibonaci series is the series which produce 3rd digit from addition of first 2
eg 0 1 1 2 3 5 8......*/
#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,n;
    cout<<"enter number till which you want fibonacci series \n";
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    for (int i=0;i<n;i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
      
    }
return 0;
}