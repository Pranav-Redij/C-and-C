#include<stdio.h>


void bubble_sort(int a[],int n)
{
  for(int i=0;i<n-1;i++)
  {
  for(int j=0;j<n-1;j++)
  {
  if(a[j+1]<a[j])
  {
    int temp=a[j+1];
    a[j+1]=a[j];
    a[j]=temp;
  }
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
  bubble_sort(a,n);
  //print
  printf("\n");
  for(int i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
  return 0;
}