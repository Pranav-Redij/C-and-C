//given alphabet is vowel or consonent;
#include<iostream>
using namespace std;
int main()
{
    char c;
    int a,b;
    cout<<"enter character \n";
    cin>>c;
    a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    b=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(a||b)
    {
        cout<<"is vowel\n";
    }
    return 0;
}
