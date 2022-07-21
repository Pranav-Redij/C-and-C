//using function print all prime numbers b/w 2 numbers 
#include<iostream>
using namespace std;
bool prime(int n1)
{
  for(int j=2;j<n1;j++)
  {
    if(n1%j==0)
    {
       return false;
    }else
    { 
        return true;
    }
  }

}
int main()
{
    int a,b;
    cout<<"enter 2 numbers \n";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        {
            cout<<i;
        }
    }
    return 0;   
}