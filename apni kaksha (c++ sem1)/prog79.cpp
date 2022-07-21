#include<iostream>
using namespace std;
int main()
{   int n;
    int a[n];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
      for(int i=0;i<n;i++)
      {
          sum=sum+a[i];
      }
cout<<sum;
 return 0;
 
}