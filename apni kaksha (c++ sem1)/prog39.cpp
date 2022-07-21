//write program using function to print fibonacci sequence
#include<iostream>
using namespace std;
void fib(int num)
{
    int n1=0;
    int n2=1;
    int n3;
    cout<<n1<<" "<<n2<<" ";
    for(int i=1;i<=num;i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return ;
}
int main()
{
    int n;
    cout<<"enter number \n";
    cin>>n;
    fib(n);
    return 0;
}