//how to excess private members of class
//default all members are private
#include<iostream>
using namespace std;
class student
{  string name;//now this is private
    public:

 int age;
 bool gender;
 void getinfo(string s)//this function is created due to we pass into private function
 {
     name = s;
 }
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
{  string s;//declaration of string s which will be past in getinfo fuction
    student arr[3];
   for(int i=0;i<1;i++)
   {   cout<<"name \n";
       cin>>s;
       arr[i].getinfo(s);
       cout<<"age \n";
       cin>>arr[i].age;
       cout<<"gender if male then 0 else 1 \n";
       cin>>arr[i].gender;
   }
   for(int i=0;i<1;i++)
   {
       arr[i].printinfo();
   }
    return 0;
}