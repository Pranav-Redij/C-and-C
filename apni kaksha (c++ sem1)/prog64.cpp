//setbit
#include<iostream>
using namespace std;
int setbit(int n,int pos)
{
  return(n&(1<<pos)!=0);
}
int main()
{ 
  cout<<setbit(5,2);
  return 0;  
}  