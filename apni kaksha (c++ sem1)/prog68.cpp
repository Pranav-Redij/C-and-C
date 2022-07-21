//oops from now on
#include<iostream>
using namespace std;
class student
{ public:
 string name;
 int age;
 bool gender;
 void printinfo()
 {
       cout<<"name \n";
       cout<<name<<endl;
       cout<<"age \n";
       cout<<age<<endl;
       cout<<"gender if male then 0 else 1 \n";
       cout<<gender<<endl;
 }
};
int main()
{ student a;
  a.name='pranav';
  a.age=18;
  a.gender=0;
  a.printinfo();
    return 0;
}