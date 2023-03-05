#include<iostream>
using namespace std;

int v,e;
int visited[10]={0};//0 means unvisited and 1 means visited
int d[10]={1000};
int p[10]={-1};
int adj[10][10]={0};

int minw()
{
  int min=100000,minindex=-1;
  for(int i=0;i<v;i++)
  {
	if(visited[i]==0 && d[i]<min)
	{
		min=d[i];
		minindex=i;
	}
  }
  return minindex;
}

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
  	cout<<"weight=";
  	cin>>weight;
  	adj[start][end]=weight;
	adj[end][start]=weight;	
  }	
}

void primsalgo()
{
    for(int i=0;i<v;i++)
	{
		d[i]=1000;
		visited[i]=0;
		p[i]=-1;
	}

	//logic start here

	d[0]=0;//distance from 0 to 0 will 0(starting from 0)
	for(int i=0;i<v-1;i++)//we have to go through v-1 vertix as first one is already selected
	{
		int u=minw();//minw will give smallest weight vertex and also not previously visited
		visited[u]=1;//make min as visited
		for(int j=0;j<v;j++)
		{
			if(adj[u][j]!=0 && visited[j]==0 && adj[u][j]<d[j])
			{
				p[j]=u;
				d[j]=adj[u][j];
			}
		}

	}
}
	
void pparent()
{
 cout<<"Parent array.................>>"<<endl;
 for(int i=0;i<v;i++)
 {
	cout<<p[i]<<" ";
 }
}

int main()
{
	create();
	primsalgo();
	pparent();
	return 0;
}
