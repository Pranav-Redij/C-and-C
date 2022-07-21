//contructor in c++
#include<iostream>
using namespace std;
class student
{ 
  string name;
  public:
  int age;
  bool gender;
  student()
  {
      cout<<"default contructor"<<endl;
  }//default constructor
  student(string s,int a,int g)
  {
      cout<<"parameterized constructor"<<endl;
      name =s;
      age=a;
      gender=g;
  }//parameterized constructor
 void printinfo()
 {
       cout<<"name ";
       cout<<name<<endl;
       cout<<"age ";
       cout<<age<<endl;
       cout<<"gender  ";
       cout<<gender<<endl;
 }
};
int main()
{ student b;//calling default constructor(calling without passing values in parameter)
  student a("Pranav",18,0);//calling parameterized constructor
  a.printinfo();
  return 0;
}