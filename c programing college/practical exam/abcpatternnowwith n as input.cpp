//abc pattern with input n
#include<stdio.h>
int main()
{
	char a='A';
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%c \t",a+i);
		}
		printf("\n");
	}
	return 0;
}
