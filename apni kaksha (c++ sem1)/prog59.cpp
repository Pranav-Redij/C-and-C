//transpose of matrix of 2d array
//we need to swap ij<->ji
//but when j<=i
#include<iostream>
using namespace std;
int main()
{
    int n,m;
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
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
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