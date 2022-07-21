/*function program to add 2 number */
#include<iostream>
using namespace std;
int add(int n1,int n2);//declaration of function
int main()
{
    int a,b;
    cout<<"enter 2 number \n";
    cin>>a>>b;
    cout<<add(a,b);//calling of function
    return 0;
}
int add(int n1,int n2)/*actual function 
                        returntype function name(returntype variable)     
                        {
                            actual code
                        }     */
{  
    int sum=n1+n2;
    return sum;
}  
