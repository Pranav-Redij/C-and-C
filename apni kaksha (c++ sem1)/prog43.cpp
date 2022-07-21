//write a prog to find sum of n natural numbers
#include<iostream>
using namespace std;
int sum(int n1)
{
    int total=0;
    for(int i=1;i<=n1;i++)
    {
        total=total+i;
    }
    return total;
}
int main()
{
    int n;
    cout<<"enter number till what you want sum\n ";
    cin>>n;
    cout<<sum(n);
    return 0;
}