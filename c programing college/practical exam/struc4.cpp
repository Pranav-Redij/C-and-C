#include<stdio.h>
struct book
{
  char name[10];
  int price;
  int page;
  char author[10];
};
int main()
{
	book b[2];
	for(int i=0;i<2;i++)
	{
		printf("\nenter the name:");
		gets(b[i].name);
		fflush(stdin);
		printf("\nenter price:");
		scanf("%d",&b[i].price);
		fflush(stdin);
			printf("\nenter page:");
		scanf("%d",&b[i].page);
		fflush(stdin);
			printf("\nenter the name of author:");
		gets(b[i].author);
		fflush(stdin);
		
	}
	for(int i=0;i<2;i++)
	{
		printf("\nname:%s",b[i].name);
		printf("\nprice:%d",b[i].price);
		printf("\npage:%d",b[i].page);
		printf("\nauthor:%s",b[i].author);
	}
	return 0;
}
