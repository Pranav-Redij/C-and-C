//Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
//out should be give max number till that 
//eg 132416
//output 133446
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter length of array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter"<<" "<<i+1<<" "<<"element in array \n";
        cin>>arr[i];
        
    }
    int max=arr[0];
for(int i=0;i<n;i++)
{ 
  if(max<=arr[i])
  {
      max=arr[i];
  }
  cout<<max<<" ";
}
return 0;
}