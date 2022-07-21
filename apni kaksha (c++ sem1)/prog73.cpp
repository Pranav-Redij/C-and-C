// multiple inheritence
//c--->a
//-
// -
//  -
//   ->b
#include<iostream>
using namespace std;

    class a{
  public:
  void funca()
  {
      cout<<"Inherited A \n";
  }
    };
        class b{
  public:
  void funcb()
  {
      cout<<"Inherited B \n";
  }
    };
    class c:public a,public b{

    };

int main()
{
    c C;
    C.funca();
     C.funcb();
    return 0;
}