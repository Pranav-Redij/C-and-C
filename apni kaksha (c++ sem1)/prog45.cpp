//write program to find binary to decimal
#include<iostream>
using namespace std;
int binarytodecimal(int a)
{
    int ans=0;
    int x=1;
    while(a>0)
    {
        int y=a%10;
        ans+=y*x;
        x*=2;
        a/=10;
    }
return ans;
}
int main()
{
    int n;
    cout<<"enter number \n";
    cin>>n;
    cout<<binarytodecimal(n);
    return 0;
}