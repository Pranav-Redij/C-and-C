//prog to print following pattern
/* ****
   ****
   ****
   ****
   ****  */
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter number of rows \n";
    cin>>a;
    cout<<"enter number of column \n";
    cin>>b;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}  

