//find sum of n natural number
#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"enter till how much number you need sumation \n";
    cin>>n;
    for(int a=1;a<=n;a++)
    {
      s=s+a;
      
    }
    cout<<"summation is:\n"<<s;
    return 0;
}