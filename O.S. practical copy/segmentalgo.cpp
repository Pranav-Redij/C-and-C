#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

void input(int &nseg,int &nproc,vector<int>&seg,vector<int>&proc)
{
    
    cout<<"\nenter the number of segments:";
    cin>>nseg;
    

    cout<<"\nstart putting available sizes of each segments.................\n";
    for(int i=0;i<nseg;i++)
    {
        cout<<"enter the availabe size "<<i+1<<" segment:";
        cin>>seg[i];
    }

    cout<<"enter the number of process:";
    cin>>nproc;

    cout<<"\nstart putting sizes need for each process.................\n";
    for(int i=0;i<nproc;i++)
    {
        cout<<"enter sizes which needed for "<<i+1<<" process:";
        cin>>proc[i];
    }
}

void output(int &nseg,int &nproc,vector<int>&seg,vector<int>&proc)
{
    cout<<endl;
    for(int i=0;i<nseg;i++)
    {
        cout<<seg[i];
    }
    cout<<endl;
    for(int i=0;i<nproc;i++)
    {
        cout<<proc[i];
    }
}

bool firstfit(int &nseg,int &nproc,vector<int>&seg,vector<int>&proc)
{
    for(int i=0;i<nproc;i++)
    {
        //now i am going to allocate the process ith in the segments
        for(int j=0;j<nseg;j++)
        {
            if(proc[i]<=seg[j])
            {
                seg[j]=seg[j]-proc[i];
                proc[i]=0;
                break;
            }
        }
    }

    //now checking if all process become 0 then return true;
    for(int i=0;i<nproc;i++)
    {
        if(proc[i]!=0)
        {
            return false;
        }
    }
    //it means i have not got the any non zero values
    return true;
}

bool bestfit(int &nseg,int &nproc,vector<int>&seg,vector<int>&proc)
{
    
    for(int i=0;i<nproc;i++)
    {
        int ptr=-1;
        int waste=-1;
        int minwaste=10000;
        //now i am going to allocate the process ith in the segments
        cout<<endl<<i<<endl;
        for(int j=0;j<nseg;j++)
        {
            cout<<"proc"<<proc[i]<<" seg "<<seg[j]<<endl;
            if(proc[i]<=seg[j])
            {
                waste=seg[j]-proc[i];
                if(waste<minwaste)
                {
                    ptr=j;
                    minwaste=waste;
                }
            }
        }
        if(ptr!=-1)
        {
            seg[ptr]=seg[ptr]-proc[i];
            proc[i]=0;
        }else{
            //for this best fit is not working so return false no need to check further
            return false;
        }
    }

    //now checking if all process become 0 then return true;
    for(int i=0;i<nproc;i++)
    {
        if(proc[i]!=0)
        {
            return false;
        }
    }
    //it means i have not got the any non zero values
    return true;
}

bool worstfit(int &nseg,int &nproc,vector<int>&seg,vector<int>&proc)
{
    
    for(int i=0;i<nproc;i++)
    {
        int waste=-1;
        int maxwaste=0;
        int ptr=-1;
        //now i am going to allocate the process ith in the segments
        for(int j=0;j<nseg;j++)
        {
            if(proc[i]<=seg[j])
            {
                waste=seg[j]-proc[i];
                if(waste>=maxwaste)
                {
                    ptr=j;
                    maxwaste=waste;
                }
            }
        }
        if(ptr!=-1)
        {
            seg[ptr]=seg[ptr]-proc[i];
            proc[i]=0;
        }else{
            //for this best fit is not working so return false no need to check further
            return false;
        }
    }

    //now checking if all process become 0 then return true;
    for(int i=0;i<nproc;i++)
    {
        if(proc[i]!=0)
        {
            return false;
        }
    }
    //it means i have not got the any non zero values
    return true;
}

bool nextfit(int &nseg,int &nproc,vector<int>&seg,vector<int>&proc)
{
    int prev=0;
    for(int i=0;i<nproc;i++)
    {
        //now i am going to allocate the process ith in the segments
        int j=prev;
        while(1)
        {
            j=(j+1)%(nseg);//wrap up function
            
            if(j==prev)break;
            
            if(proc[i]<=seg[j])
            {
                seg[j]=seg[j]-proc[i];
                proc[i]=0;
                prev=j;
                break;
            }
        }
    }

    //now checking if all process become 0 then return true;
    for(int i=0;i<nproc;i++)
    {
        if(proc[i]!=0)
        {
            return false;
        }
    }
    //it means i have not got the any non zero values
    return true;
}

int main()
{
    int nseg;
    int nproc;
    vector<int>seg(100,0);
    vector<int>proc(100,0);
    
    
    while(1)
    {
        input(nseg,nproc,seg,proc);
        output(nseg,nproc,seg,proc);
        cout<<"\n1.first fit 2.best fit 3.worst fit 4.next fit 0.exit";
        int ch;
        cout<<"\nenter the choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:if(firstfit(nseg,nproc,seg,proc))
                    {
                    cout<<"\ncan fit all process";
                    }else{
                    cout<<"\ncannot fit all process";
                    }
                    break;   

            case 2:if(bestfit(nseg,nproc,seg,proc))
                    {
                        cout<<"\ncan fit all process";
                    }else{
                        cout<<"\ncannot fit all process";
                    }
                    break;
            case 3:if(worstfit(nseg,nproc,seg,proc))
                    {
                        cout<<"\ncan fit all process";
                    }else{
                        cout<<"\ncannot fit all process";
                    }
                    break;

            case 4:if(nextfit(nseg,nproc,seg,proc))
                    {
                        cout<<"\ncan fit all process";
                    }else{
                        cout<<"\ncannot fit all process";
                    }

            case 0:break;
        }
        output(nseg,nproc,seg,proc);
    }

    return 0;
}