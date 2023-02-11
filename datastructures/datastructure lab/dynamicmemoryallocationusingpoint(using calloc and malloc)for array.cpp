//dynamic memory allocation using pointer for arrays
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i,s=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	//	a=(int*)calloc(sizeof(int),n);
	//	a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	s=s+a[i];
	printf("sum is:%d",s);
	return 0;
}
