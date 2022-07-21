//find the triangle is isosceles,scalene or equilateral triangle
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 sides of triangle \n";
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<<"equilateral triangle\n";
    }else if(a==b||b==c||c==a)
    {
       cout<<"isoscelen triangle\n";
    }else{
        cout<<"scalen triangle\n";
    }
    return 0;
}