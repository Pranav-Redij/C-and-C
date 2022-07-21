#include<stdio.h>
struct player//structure name
{
  char playern[10];//data member
  char teamn[10];
  float batavg;	
};
int main()
{
	player p[10];//declaring strcture variables
	printf("Enter the details of player............");
	for(int i=0;i<2;i++)
	{
		printf("\n\nenter the %d player name:",i+1);
		gets(p[i].playern);
		printf("\nenter the %d players team name:",i+1);
		gets(p[i].teamn);
		printf("\nenter the %d player bating average:",i+1);
		scanf("%f",&p[i].batavg);
		
	}
		for(int i=0;i<2;i++)
	{
		printf("\n\n%d player name:%s",i+1,p[i].playern);
		printf("\n\n%d players team is name:%s",i+1,p[i].teamn);
	    printf("\n\n%d players bating average:%f",i+1,p[i].batavg);
	}
	
	return 0;
}
