/*prog to print following pattern
    ----1
    ---212
    --32123
     4321234
 row=1 to n
 column=1)for spaces
          1 to n-row   
        2)for numbers(j) 
         row to 1 and then j ko 1 karo and then vapas se j ko increase karo from 1to row */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter numbers of rows \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=i;j>1;j--)
        {
            cout<<j;
        }
       
       for(int j=1;j<=i;j++)
       {
           cout<<j;
       }
     cout<<endl;
    }
    return 0;
}          
        