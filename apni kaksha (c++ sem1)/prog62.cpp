//method 2 =searching matrix or 2d array
//we need sorted array 
//means in increasing order form right to left and from top to bottom
//effiecient method 
//start from right top corner 
//if key is greater than found element than go down(row ++)
//else means key will be smaller than go left(column --)
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
 int r=0,c=m-1;
 bool found=false;
 while(r<n && c>=0)
 {
     if(arr[r][c]==key)
     {
         found=true;
     }
     if(arr[r][c]>key)
     {
         c--;
     }else{
         r++;
     }
     
 }
 if(found==true)
     {
         cout<<"found";
     }else{
         cout<<"not found";   
     }

 return 0;
}