//prog to print following pattern
/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15*/
   #include<iostream>
  using namespace std;
  int main()
  {
    int a,c=1;
    cout<<"enter number of rows \n";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(j<=i){
                cout<<" "<<c;
            c++;
            }
        }
    cout<<endl;
    }
    return 0;
  }