//convert octal to decimal
#include<iostream>
using namespace std;
int octaltobinary(int a)
{
    int ans=0;
    int x=1;
    while(a>0)
    {
        int y=a%10;
        ans+=x*y;
        x*=8;
        y=a/10;
    }
return ans;
}
int main()
{
    int n;
    cout<<"enter a number \n";
    cin>>n;
    cout<<"octal number is \n "<<octaltobinary(n);
    return 0;
}