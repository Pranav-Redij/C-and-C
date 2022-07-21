//Write a program to read Title, Author and Price of 5 books using array of structures. Display the records in ascending order of Price.
#include<stdio.h>
struct book
{
	char title[10];
	char author[10];
	int price;
};
int main()
{
  book b[5];
  book t;
  printf("enter details of book............\n");
  //enter the details of books here
  for(int i=0;i<5;i++)
  {
  	printf("enter the title for %d:",i+1);
  	gets(b[i].title);
  	fflush(stdin);
  	printf("enter the author for %d:",i+1);
  	gets(b[i].author);
  	fflush(stdin);
  	printf("enter the price for %d:",i+1);
  	scanf("%d",&b[i].price);
  	fflush(stdin);
  }
  //sorting of books according to price
  for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  	{
  		if(b[j].price>b[j+1].price)
  		{
  			t=b[j];
  			b[j]=b[j+1];
  			b[j+1]=t;
		  }
	  }
  }
  //out of on screen 
  printf("details of books in ascending order of price...............\n");
    for(int i=0;i<5;i++)
  {
  	printf("Title:%s",b[i].title);
  	printf("Author:%s",b[i].author);
  	printf("Price:%d",b[i].price);

  }
  return 0;
}
