//prog to print following pattern
/* 1 2 3 4
   1 2 3
   1 2
   1  */
   #include<iostream>
  using namespace std;
  int main()
  {
    int a;
    cout<<"enter number of rows \n";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(j<=a-i+1){
                cout<<j<<" ";
            }
        }
    cout<<endl;
    }
    return 0;
  }