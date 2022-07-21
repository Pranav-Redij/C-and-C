//find an element in array using linear searching method 
//linear search is simplest method 
//go from 1 element to last element 1 by 1 if find the element you searching then end the program
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
    int key;//variable to store value we need to find
    cout<<"enter value we need to search for \n";
    cin>>key;
    for(int j=0;j<n;j++)
    {
        if(array[j]==key)
        {
            cout<<"position in array is"<<j;
          return 0;//after returning value it will jump out of the loop
                   //otherwise it will print -1(because this statement gets false so it will jump on next)
        }
        else
        {
            cout<<"-1";
            return 0;
        }
    }
 return 0;
} 