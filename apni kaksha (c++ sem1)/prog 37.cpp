/* function display of number using function*/
#include<iostream>
using namespace std;
void display(int n1);
int main()
{
    int a;
    cout<<"enter your number\n";
    cin>>a;
    display(a);
    return 0;
}
void display(int n1)
{
    cout<<n1;
    return;
}