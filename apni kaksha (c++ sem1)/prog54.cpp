//sort using insertion sort
//see yt video apani kaksha
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
        cout<<"enter"<<" "<<i+1<<" "<<"element in array \n";
        cin>>array[i];
        
    }
    for(int i=1;i<n;i++)
    {
        int current=array[i];
        int j=i-1;
        while(array[j]>current && j>=0)
        {
          
            array[j+1]=array[j];
            j--;
        }  
          array[j+1]=current; //we need to add +1 because we -1 above;
    }   
   for(int i=0;i<n;i++)
    {
        
        cout<<array[i];
        
    }
     
 
  return 0;
}