//form simple calculator using switch case
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter 1 number \n";
    cin>>a;
    cout<<"enter 2 number \n";
    cin>>b;
    cout<<"which operation you wanted to do \n";
    cin>>op;
    switch(op)
    {
      case '+':
      cout<<a+b <<endl;
      break;
      case '-':
      cout<<a-b  <<endl;
      break;
      case '*':
      cout<<a*b  <<endl;
      break;case '/':
      cout<<a/b  <<endl;
      break;
    }
return 0;
}
