#include<stdio.h>
#include<stdlib.h>
struct student
{
  int rollno;
  float perc;	
};
int main()
{
	student *s;
	s=(student*)malloc(sizeof(student));
	printf("enter the rollno:");
	scanf("%d",&s->rollno);
	printf("enter the perc:");
	scanf("%f",&s->perc);
	printf("\n the roll:%d",s->rollno);
	printf("\n the perc:%f",s->perc);
	return 0;
}
