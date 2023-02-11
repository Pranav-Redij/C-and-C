// Online C compiler to run C program online
#include<stdio.h>


void insertion(int a[],int n)
{
  for(int i=1;i<n;i++)
  {
    int j=i;
    while(j>0 && (a[j-1]>a[j]))//1 2 4 5 3
    {      int temp=a[j];                 //      2 1 3 4 5    
           a[j]=a[j-1];
           a[j-1]=temp;
            j--;
    }
  }
}

int main()
{
  int n;
  printf("enter the size of array:");
  scanf("%d",&n);
  int a[n];
  
  printf("enter the elements inside the array:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  insertion(a,n);
  //print
  printf("\n");
  for(int i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
  return 0;
}