//program to find table 
#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"enter the number to find table:\n";
    cin>>a;
    for(int i=1;i<=10;i++)
    { n=a*i;
      cout<<n<<endl;
    }
    return 0;
}