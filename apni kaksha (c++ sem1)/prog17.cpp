//prog to print following pattern
/* 1 1 1 1 1
   2 2 2 2
   3 3 
   4  */
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
                cout<<i<<" ";
            }
        }
    cout<<endl;
    }
    return 0;
  }