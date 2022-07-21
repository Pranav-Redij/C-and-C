//matrix multiplication
//eg 12   12
//   34   34
//we multiply just like maths 
//code algo
//take 3 input because we know m*n n*k
//loop 1 for rows of m1,loop2 for column of m2,3 loop is for addition of elements and multiplication
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter three element for order of matrix \n";
    cin>>n1>>n2>>n3;
    int a[n1][n2];
    int b[n2][n3];
    cout<<"start taking input for matrix 1 \n";
    for(int i=0;i<=n1-1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>a[i][j];
            cout<<" ";
        }
cout<<endl;
    }
    cout<<"for input matrix 2 \n";
    for(int i=0;i<=n2-1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>b[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"multiplied matrix is \n";
 int ans[n1][n3];                      //initializing ans array
 for(int i=0;i<=n1-1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            ans[i][j]=0;
        }
    }

  for(int i=0;i<n1;i++)
  {
      for(int j=0;j<n3;j++)
      {
          for(int k=0;k<n2;k++)
          {
              ans[i][j]+=a[i][k]*b[k][j];
          }
          
      }
  }
  for(int i=0;i<=n1-1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}