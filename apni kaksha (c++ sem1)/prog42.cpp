//draw pascals triangle using nCr and functions
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
    int n;
    cout<<"enter column \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    { 
        for(int j=1;j<=i;j++)
        {
    int ans=fact(i)/(fact(i-j)*fact(j));
    cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}