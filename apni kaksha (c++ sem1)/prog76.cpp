//funtion overloading
//we declare same funtion but to differentiate we declares different arguments
//eg area of circle and rectangle 
// circle need r and rectangle need l and b
#include<iostream>
using namespace std;
    class funcovr
    { 
        public:
      void func()
      {
          cout<<"hello 0 \n";
      }
      void func(int a)
      {
          cout<<"hello 1 \n";
      }
      void func(double a)
      {
          cout<<"hello 2 \n";
      }
    };
int main()
{
    funcovr a;
    a.func();
    a.func(1);
    a.func(1.22);
    return 0;

}
