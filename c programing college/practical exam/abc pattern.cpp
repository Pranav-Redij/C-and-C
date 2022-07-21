//abc pattern
#include<stdio.h>
int main()
{
	char a='A';
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("%c \t",a+i);
		}
		printf("\n");
	}
	return 0;
}
