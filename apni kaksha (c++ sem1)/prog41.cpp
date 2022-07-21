//find nCr using functions
#include<iostream>
using namespace std;
int fact(int n1)
{ int factorial=1;
    for(int i=2;i<=n1;i++)
    {
      factorial=factorial*i;
    } 
    return factorial;
}
int main()
{
    int n,r;
    cout<<"enter the values of n and r \n";
    cin>>n>>r;
    int ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;
    return 0;
}