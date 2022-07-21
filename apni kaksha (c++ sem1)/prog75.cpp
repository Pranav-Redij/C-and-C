//hybrid inheritance
//  ->c
//d-   
//  ->b-
//      -
//       ->a
#include<iostream>
using namespace std;

    class a{
  public:
  void funca()
  {
      cout<<"Inherited A \n";
  }
    };
        class b:public a{
  public:
  void funcb()
  {
      cout<<"Inherited B \n";
  }
    };
    class c{
 public:
 void funcc()
 {
     cout<<"Inherited C \n";
 }
    };
    class d:public b,public c{


    };

int main()
{
    d D;
    D.funca();
    D.funcb();
    D.funcc();
    return 0;
}