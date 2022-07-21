//find min and max number from array method 2(take values from users)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter length of array \n";
    cin>>n;
    int number[n];
    for(int i=0;i<=n-1;i++)
    {   cout<<"enter"<<" "<<i+1<<" "<<"element";
        cin>>number[i];
    }
    int maxno=0;
    int minno=1;
    for(int j=0;j<=n-1;j++)
    {
        maxno=max(maxno,number[j]);//builtin function to find maximum of two number
        minno=min(minno,number[j]);//builtin function to find minimun of two number
    }
    cout<<"max number is \n"<<" "<<maxno<<endl<<"min number is \n"<<minno;
    return 0;
}