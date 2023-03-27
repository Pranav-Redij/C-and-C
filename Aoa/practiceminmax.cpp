#include<iostream>
using namespace std;

int min(int a,int b)
{
    return (a>b)?b:a;
}
int max(int a,int b)
{
    return (a>b)?a:b;
}

void help(int a[],int mnmx[],int s,int e)
{
    int m;
    int lmnmx[2];
    int rmnmx[2];
    if(s==e)
    {
        mnmx[0]=a[s];
        mnmx[1]=a[s];
    }else if(s+1==e)
    {
        mnmx[0]=min(a[s],a[e]);
        mnmx[1]=max(a[s],a[e]);
    }else{
     m=(s+e)/2;
     help(a,lmnmx,s,m);
     help(a,rmnmx,m+1,e);
     mnmx[0]=min(lmnmx[0],rmnmx[0]);
     mnmx[1]=max(lmnmx[1],rmnmx[1]);
    }
}
int main()
{
    int a[1000];
    int mnmx[2];
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    cout<<"\nenter the element inside array...............";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    help(a,mnmx,0,n-1);
    cout<<"min and max:"<<mnmx[0]<<" "<<mnmx[1];
    return 0;
}