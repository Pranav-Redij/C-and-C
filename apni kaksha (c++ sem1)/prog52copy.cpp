//selection sort
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter length of array \n";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter"<<" "<<i+1<<" "<<"element in array in ascending order\n";
        cin>>array[i];
        
    }
    for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(array[j]<array[i])
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;

            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<array[i];
        
    }
    return 0;
}