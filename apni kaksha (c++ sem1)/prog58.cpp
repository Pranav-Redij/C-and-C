//2-D array 
//spiral order print
//eg 1 2
//   3 4
// output=1243
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
    int rowstart=0,rowend=n-1,columnstart=0,columnend=m-1;
while(rowstart<=rowend && columnstart<=columnend)
{
    //for rowstart
    for(int col=columnstart;col<=columnend;col++)
    {
        cout<<arr[rowstart][col];
    }
    rowstart++;
    //for columnend
    for(int row=rowstart;row<=rowend;row++)
    {
        cout<<arr[row][columnend];
    }
    columnend--;
    //for rowend;
    for(int col=columnend;col>=columnstart;col--)
    {
        cout<<arr[rowend][col];
    }
    rowend--;
    //columnstart
    for(int row=rowend;row>=rowstart;row--)
    {
        cout<<arr[row][columnstart];
    }
    columnstart++;
}
    return 0;
}