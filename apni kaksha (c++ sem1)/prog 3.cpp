//find the greatest number in 3 
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
 cout<<"enter the 3 numbers:\n";
 cin>>a>>b>>c;
 if(a>b)
 {
   if(a>c)
   {
       cout<<a;
   }else if(b>c)
   {
       cout<<b;
   }
 }else
 {
     cout<<c;
 }
 return 0;
}