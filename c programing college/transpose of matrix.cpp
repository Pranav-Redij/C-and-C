//transpose of matrix
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3];
	//input of matrix
 for(int i=0;i<3;i++)
 {
 	for(int j=0;j<3;j++)
 	{
 		scanf("%d",&a[i][j]);
	 }
 }
 //transpose
  for(int i=0;i<3;i++)
 {
 	for(int j=0;j<3;j++)
 	{
 	b[i][j]=a[j][i];
	 	 }
 }
 //printf of transpose matrix
   for(int i=0;i<3;i++)
 {
 	for(int j=0;j<3;j++)
 	{
 	printf("%d \t",b[i][j]);
	 	 }
	 	 printf("\n");
 }
 return 0;
}
