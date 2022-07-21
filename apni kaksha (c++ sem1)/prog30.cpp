/* check wether following number is prime or not?
set coutner of boolean type*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    bool flag=true; 
    cout<<"enter a number \n";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=false;
        } 
        
    }
    if(n<=1)
    {
        flag=false;
    }
       if(flag==false){
           cout<<"not a prime";
       }else if(flag==true){
           cout<<"prime";
       }
return 0;
}