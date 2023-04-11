#include<iostream>
using namespace std;
int main()
{
    string a;
    string b;
    int n1,n2;
    cout<<"enter the string 1(big):";
    cin>>a;
    cout<<"enter the length:";
    cin>>n1;
    cout<<"enter the string 2(small):";
    cin>>b;
    cout<<"enter the length:";
    cin>>n2;

    int count=0;

    for(int i=0;i<=n1-n2;i++)
    {
        int j=0;
        int ptr=i;
        while(j<=n2 && a[ptr]==b[j])
        {
            ptr++;    
            j++;
            if(j==n2)
            {
                cout<<"\nfirst occerence="<<i;
            }
        }
    }
   return 0;
}
