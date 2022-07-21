//multiplication of 2 matix
#include<stdio.h>
void enter(int a[][],r1,c1)
{printf("enter the value of r1 and r2:");
scanf("%d %d",&r1,&c1);   
printf("enter the numbers in A matrix:");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void enter(int b[r2][c2],r2,c2)
{printf("enter the value of r1 and r2:");
scanf("%d %d",&r2,&c2);   
printf("enter the numbers in A matrix:");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
}

void findc(int a[3][3],int b[3][3],int c[3][3])
{  
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{    
		c[i][j]=0;
			for(int k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
}
void putc(int c[3][3])
{

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}
int main()
{   int c1,c2,c3,r1,r2,r3;
	int a[3][3],b[3][3],c[3][3];
	enter(a,r1,c1);
	enter(b,r2,c2);
	findc(a,b,c);
    printf("multiplied matrix is: \n");
    putc(c);
    return 0;
}
