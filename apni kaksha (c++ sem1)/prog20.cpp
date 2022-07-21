/*prog to print following pattern
    ----1
    ---1 2 
    --1 2 3
     1 2 3 4 
 row=1 to n
 column=1)for spaces
          1 to n-row   
        2)for numbers(j) 
          1 to row */
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
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
     cout<<endl;
    }
    return 0;
}          
        