#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int roll;
	float perc;
}student;

int main()
{
    student *s;
    s=(student*)malloc(sizeof(student));
    int n,i;
    printf("enter the value of n:");//how many objects you wanted to create 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\n enter the roll:");
    	scanf("%d",&s[i].roll);
    	printf("\n enter the per:");
    	scanf("%f",&s[i].perc);
	}
	  for(i=0;i<n;i++)
    {
    	printf("\n the roll:");
    	printf("%d",s[i].roll);
    	printf("\n  the per:");
    	printf("%f",s[i].perc);
	}
	return 0;
}
