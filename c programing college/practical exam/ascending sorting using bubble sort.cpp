//ascendinng order 10 integer 
//using bubble sort 
#include<stdio.h>
int main()
{
	int a[10],temp;
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	//ascending order sorting using buuble sort technique
	for(int j=0;j<9;j++)
{
		for(int i=0;i<9;i++)
	{
	  if(a[i]>a[i+1])
	  {
	  	temp=a[i];
	  	a[i]=a[i+1];
	  	a[i+1]=temp;
	  }
    }
}
    for(int i=0;i<10;i++)
	printf("\t %d",a[i]);
	return 0;
}
