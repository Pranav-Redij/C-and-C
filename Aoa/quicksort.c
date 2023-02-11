// Online C compiler to run C program online
#include<stdio.h>

int partition(int a[],int s,int l)
{
  int pivot_value=a[l];
  int i=s;//going to give us pivot element
          //i is also pointing to values which is greater than pivot value
  for(int j=s;j<l;j++)
  {
    if(a[j]<=pivot_value)
    {//j will swap the value which smaller than pivot with values which are greater than pivot
        //swap(a[i],a[j])
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        //after swapping now at ith index we have smaller value so increment it
    }
    
  }
   //swap(a[i],a[l])
    int temp=a[i];
    a[i]=a[l];
    a[l]=temp;

    return i;
}
void quicksort(int a[],int s,int l)
{
if(s<l)
{
  int pivot=partition(a,s,l);
  partition(a,s,pivot+1);
  partition(a,pivot-1,l);
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
  quicksort(a,0,n-1);
  //print
  printf("\n");
  for(int i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
  return 0;
}
