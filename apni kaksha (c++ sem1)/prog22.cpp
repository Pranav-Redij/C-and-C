/* prog to print following pattern
    ---*     1
    --***    2 <=consider rows as this
    -*****   3
    *******  4______________form different conditions for upper and lower triangle
    *******  4--------------and also form loops for spaces and stars
     *****   3
      ***    2
       *     1
       */ 
       
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of columns:\n";
    cin>>n;
    int p=n;
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n-i;j++)
     {
       cout<<" ";
     }
    for(int k=1;k<=i*2-1;k++)
    {
        cout<<"*";
    }
    
    cout<<endl;
 }
 
 for(int i=n;i>=1;i--)
    {
     for(int j=1;j<=n-i;j++)
     {
       cout<<" ";
     }
    for(int k=1;k<=i*2-1;k++)
    {
        cout<<"*";
        
    }
    
    cout<<endl;
 }
 
 
 return 0;
}