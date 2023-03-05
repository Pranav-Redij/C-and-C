//find smallest element from remaining array and swap with first element
//and then for next position

#include<stdio.h>


void selection(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    int min=a[i];
    for(int j=i;j<n;j++)
    {
        if(min>a[j])
        {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            min=temp;
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
  selection(a,n);
  //print
  printf("\n");
  for(int i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
  return 0;
}

