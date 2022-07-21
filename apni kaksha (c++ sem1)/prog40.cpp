//write a program using function to find factorial of a number
#include<iostream>
using namespace std;
int fact(int n1)
{ int factorial=1;
    for(int i=2;i<=n1;i++)
    {
      factorial=factorial*i;
    } 
    return factorial;
}

int main()
{
    int n;
    cout<<"enter a number to find factorial of that number";
    cin>>n;
    cout<<fact(n);
    return 0;
}