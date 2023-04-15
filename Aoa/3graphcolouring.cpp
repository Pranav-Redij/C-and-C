#include<math.h>
#include<iostream>
using namespace std;

int v,e;
int visited[10]={0};//0 means unvisited and 1 means visited
int p[10]={-1};
int adj[10][10]={0};

int color[10]={0};//colors are 1,2,3

void create()
{
	cout<<"enter the number of vertices:";
    cin>>v;
    cout<<"enter the number of edges:";
    cin>>e;
    
   for(int i=0;i<e;i++)
  {
  	int start,end,weight;
  	cout<<"(v1)s=";
  	cin>>start;
  	cout<<"(v2)e=";
  	cin>>end;
  	adj[start][end]=1;
	adj[end][start]=1;	
  }	
}

bool neighbour(int k,int j)
{
        if(adj[k][j]==1)
        {
            return true;
        }
    return false;
}
int check(int k,int i)//i is color, k is current vertex
{
    //HOW CHECK WILL WORK
    //it will check all previous vertex means from 0 to k-1
    //if it is adjacent to the current vertex means k then will check if color match of them then return false else return true;
    //if(k==0)return true;
    for(int j=0;j<k;j++)//j are all vertex which are already coloured
    {
        if(neighbour(k,j))
        {
            if(color[j]==i/*color[k]*/)
            {
                return false;
            }
        }    
    }
    return true;
   
}

void colourable(int k)//k is vertex number
{
   for(int i=1;i<=3;i++)//checking by putting all color to this vertex
   {
        if(check(k,i))
        {
            color[k]=i;//assign color to this vertex
            if(k==v-1)//if this the last vertex then print the sol
            {
                cout<<"\n";
                //print answer
                for(int j=0;j<v;j++)
                {
                    cout<<color[j]<<" ";
                }
            }else{
               colourable(k+1);//go to the next vertex  
            }
        }
   } 
    
}


int main()
{
 create();
 colourable(0);
 return 0;   
}