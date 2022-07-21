//answer is not coming error is there answer always showing is pythagorian triplet
//check pythagorian triplet using function;
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool pyt(int a,int b,int c)
{
    int x,y,z;
    if(a>b)
    {
        if(a>c)
        {
            x==a;
        }else{
            x==c;
        }
    }else
    {
        x==b;
    }
    if(x == a)
    {
        y==b;
        z==c;
    }
   else if(x == b)
    {
        y==a;
        z==c;
    }
   else if(x == c)
    {
        y==a;
        z==b;
    }
    int w=x*x;
    int u=y*y;
    int v=z*z;
    if(w = u + v)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}   
int main()
{
    int p,q,r;
    cout<<"enter 3 numbers \n";
    cin>>p>>q>>r;
    if(pyt(p,q,r)==1)
    {
        cout<<"is pythagorian triplet \n";
    }
    else if(pyt(p,q,r)==0)
    {
        cout<<"is not a pythagorian triplet \n";
    }
    return 0;
}