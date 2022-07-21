/* write program to print following pattern
       *****
      *   *
     *   *
    *   *
   *****    */
  #include<iostream>
  using namespace std;
  int main()
  {
      int n;
      cout<<"enter number of column \n";
      cin>>n;
     for(int i=1;i<=n;i++) 
    {
     for(int j=1;j<=n-i;j++)
      {
          cout<<" ";
      }
      for(int k=1;k<=n;k++)
      { if(k==1||k==n||i==1||i==n){
          cout<<"*";}
          else{
              cout<<" ";
          }
      }
      cout<<endl;
    }
    return 0;
  }