/* write a program to print following pattern
  *  6   * always remeber when we have to print hallow means we have  to print at the border so
  ** 4  ** always set condtion as j==1 and j==i
  * *2 * * 
  *  **  * 
  *  **  *
  * *  * *
  **    **
  *      *
    */
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number of rows \n";
  cin>>n;
  for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=i;j++)
     { 
          if(j==1||j==i)
       {
     
         cout<<"*";
       }else{
           cout<<" ";
       }   
     } 
     for(int k=1;k<=2*(n-i);k++)
     {
         cout<<" "; 
     }
     for(int j=1;j<=i;j++)
     {
          if(j==1||j==i)
       {
     
         cout<<"*";
       }else{
           cout<<" ";
       }   
     }
     cout<<endl; 
 }
   for(int i=n;i>=1;i--)
 {
     for(int j=1;j<=i;j++)
     {
          if(j==1||j==i)
       {
     
         cout<<"*";
       }else{
           cout<<" ";
       }   
     } 
     for(int k=1;k<=2*n-2*i;k++)
     {
         cout<<" "; 
     }
     for(int j=1;j<=i;j++)
     {
          if(j==1||j==i)
       {
     
         cout<<"*";
       }else{
           cout<<" ";
       }   
     } 
     cout<<endl;
 }
 return 0;
}