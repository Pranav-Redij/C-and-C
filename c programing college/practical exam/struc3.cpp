#include<stdio.h>
struct student//structure name
{
	char name[10];//member of structure
	int rollno;
	int fees;
};
int main()
{  student s[2];//declaring variable
	for(int i=0;i<2;i++)
	{
		printf("enter name:");
		gets(s[i].name);
		fflush(stdin);
		printf("enter roll:");
		scanf("%d",&s[i].rollno);
			fflush(stdin);
		printf("enter fees:");
		scanf("%d",&s[i].fees);
			fflush(stdin);
		
	}
		for(int i=0;i<2;i++)
	{
		
				printf("\n\n%d player name:%s",i+1,s[i].name);
		printf("\n\n%d players team is name:%d",i+1,s[i].rollno);
	    printf("\n\n%d players bating average:%d",i+1,s[i].fees);
	}
}
