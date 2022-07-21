//searching matrix or 2d array
//linear search
//ineffiecient method 
//we have to check for every element
#include<iostream>
using namespace std;
int main()
{
  int key,n,m;
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
 cout<<"enter element which need to search\n";
 cin>>key;
 bool q;
 for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"element is found\n";
            }
        }
        
    }  

 return 0;
}