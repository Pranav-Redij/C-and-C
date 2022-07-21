#include<iostream>
using namespace std;
class student
{ public:
 string name;
 int age;
 bool gender;
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
{  student arr[3];
   for(int i=0;i<1;i++)
   {   cout<<"name \n";
       cin>>arr[i].name;
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