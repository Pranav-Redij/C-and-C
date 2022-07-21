//prog to print following pattern
/* 1
   0 1
   1 0 1
   0 1 0 1*/
   #include<iostream>
  using namespace std;
  int main()
  {
    int a;
    cout<<"enter number of rows \n";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0){

              cout<<"1";  
            }else
            {
                cout<<"o";
            } 
            }
            cout<<endl;
        }
    return 0;
    }
    
  