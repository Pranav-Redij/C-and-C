//error in my program loop is not stoping
//search an element using binary searching method;(for this we need data in ascending order)
//real life example=there are file containing result of your class(50 student)and your roll number is 
//lets say 30;so for finding your marksheet you will find this by first picking up half if you get 25 then
//you know my paper is more next so we take next one;  
/* 
     how actualy computer search(s=start and e=end and m=middle) 
      1 2 3 4 5 6 7 8 9 
      s       m       e
    1)we put s and e because we have to find middle element
  case1)   1 2 3 4 5 6 7 8 9 10 
           s     e
        if we want to find element smaller than middle 
       so we put e=m-1;
    case2)   1 2 3 4 5 6 7 8 9 10  
                       s       e
        if we want to find element bigger than middle
       so we put s=m+1; */
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
    int key;//variable to store value we need to find
    cout<<"enter value we need to search for \n";
    cin>>key;
    int s=0;
    int e=n;
    while(s<=e)//important condition
    {
     int m=(s+e)/2;
        if(array[m]==key)
        {
            cout<<"position of given number is "<<m;
        }
        else if(array[m]>key)
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }   
    }
    
    return 0;
}