/* write a program to find factorial of a given number 
factorial=5!=1*2*3*4*5=5*4*3*2*1   */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number \n";
    cin>>n;
    int fact=n;
    for(int i=1;i<n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial is "<<fact;
    return 0;
} 