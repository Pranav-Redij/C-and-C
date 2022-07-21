//2-D array 
//taking input and output
#include<iostream>
using namespace std;
int main()
{   int n,m;
    cout<<"enter number of rows";
    cin>>n;
    cout<<"enter number of columns";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            cout<<"enter element for "<<i<<j<<"=";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int p=0;p<=n-1;p++)
    {
        for(int q=0;q<=m-1;q++)
        {
            cout<<arr[p][q]<<" ";
        }
        cout<<endl;
    }
    return 0;
}