//bubble sorting using array;
//bubble sort ko bubble sort kyu kehatehe kyunki big number bubble ki taraha upper atta hai
//for 4 elements 
//eg' 1 2 5 4
//compare two element at a time if there order is wrong then swap the elements
//1;5421  2;2415   3;1245 we get sorted array 
//  4521    21 45
//  4251    
//  421 5
// conclusion and important point 
//1)if you have 4 element this continues till 4-1=3 {n-1}
//2)and for swaping countinues till in first round n-1,in 2nd round n-2,in 3rd round till n-3 {n-counter(i)}
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
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
            
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        
    }
    return 0;
}   