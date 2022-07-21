//inheritence
//single inheritance 
//b--->a
//parent class and b is derived class 
// so b can access the function of a
#include<iostream>
using namespace std;

    class a{
  public:
  void func()
  {
      cout<<"Inherited";
  }
    };
    class b:public a{

    };

int main()
{
    b B;
    B.func();
    return 0;
}