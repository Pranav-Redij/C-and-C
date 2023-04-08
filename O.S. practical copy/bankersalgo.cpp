//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

 int nr;
 int np;
 int nresource[100];
 int allocation[100][100];
 int mx[100][100];
 int need[100][100];
 int available[100];

bool check()
{
     int npremaining=np;
    //1)travelling infinite time in row of need matrix
    //2)if available > need for that row 
    //3)increase available by allocated of that process
while(1)
{
    int k=0;
    k++;
    for(int i=0;i<np;i++)
    {
        int check=1;
        for(int j=0;j<nr;j++)
        {
            if(need[i][j]>available[j])
            {//ek bhi bada mila to age badho
                check=0;
                break;
            }
        }

        if(check==1)
        {
            npremaining--;
            //means we can allocate this
            for(int j=0;j<nr;j++)
            {
                available[j]+=allocation[i][j];
                //and update need with large value
                need[i][j]=1000000;
            }
        }

    //sare khatam hogaye so return true;
        if(npremaining==0)
        {
            return true;
        }
    }
    if(k==10)return false;
}
}

void input()
{
    cout<<"enter the number of resource:";
    cin>>nr;

    cout<<"enter the number of process:";
    cin>>np;

    cout<<"\nenter the number of resource of each resource are available....... ";
   

    for(int i=0;i<nr;i++)
    {
        cout<<"\n enter quantity of resources number "<<i+1<<":";
        cin>>nresource[i];
    }

   //printing
    for(int i=0;i<nr;i++)
    {
        cout<<nresource[i]<<"\t";
    }
    cout<<"\n";
   //.................
    cout<<"\nenter the allocation of each process.......";

 

    for(int i=0;i<np;i++)
    {
        for(int j=0;j<nr;j++)
        {
            cout<<"enter the allocated for process "<<i+1<<" and for resource num"<<j+1<<" :";
            cin>>allocation[i][j];
        }
    }
    //printing
     for(int i=0;i<np;i++)
    {
        for(int j=0;j<nr;j++)
        {
            cout<<allocation[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n";
   //.................
   
  
    for(int i=0;i<np;i++)
    {
        for(int j=0;j<nr;j++)
        {
            cout<<"enter the max need  for process "<<i+1<<" and for resource num"<<j+1<<" :";
            cin>>mx[i][j];
        }
    }
 //printing
     for(int i=0;i<np;i++)
    {
        for(int j=0;j<nr;j++)
        {
            cout<<mx[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n";
   //.................
   
    for(int i=0;i<np;i++)
    {
        for(int j=0;j<nr;j++)
        {
            need[i][j]=mx[i][j]-allocation[i][j];
        }
    }
 //printing
     for(int i=0;i<np;i++)
    {
        for(int j=0;j<nr;j++)
        {
            cout<<need[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n";
   //.................
   
    for(int i=0;i<nr;i++)
    {
        int alloc=0;
        for(int j=0;j<np;j++)
        {
            alloc+=allocation[j][i];
        }
        available[i]=nresource[i]-alloc;
    }
    //printing
     for(int i=0;i<nr;i++)
    {
            cout<<available[i]<<"\t";
    }
    cout<<"\n";
   //.................
}
int main()
{
    input();
    if(check())
    {
        cout<<"safe"<<endl;
    }else{
        cout<<"not safe"<<endl;
    }
    return 0;
}