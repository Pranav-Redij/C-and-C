//Write a program to read Title, Author and Price of 5 books using array of structures. Display the records in ascending order of Price.
#include<stdio.h>
#include<string.h>
struct book
{
	char title[10];
	char author[10];
	int price[10];
};
int main()
{   int n;
    printf("enter number of value you wanted to enter:");
    scanf("%d",&n);
	struct book obj[n],temp;
	
	 for(int i=0; i<n; i++)
    {
        printf("Enter details of book #%d\n", i+1);
        printf("Enter book title: ");
        scanf("%s",&obj[i].title);
        printf("Enter book author: ");
        scanf("%s",&obj[i].author);
        printf("Enter book price: ");
        scanf("%d",&obj[i].price);
    }
    for(int i=0; i<n; i++)
    {
        printf("\nBook %d.............\n\n", i+1);
        printf("Book Name: %s\n", obj[i].title);
        printf("Book Author: %s\n", obj[i].author);
        printf("Book price: %d", obj[i].price);
    }
    //sorting for book price 
  	
	//ascending order sorting using buuble sort technique
   
   char temp1[10];
	for(int j=0;j<n-1;j++)
{
		for(int i=0;i<n-1;i++)
	{
	  if(obj[i].price>obj[i+1].price)
	  { //swapping of price
	  	temp=obj[i].price;
	  	obj[i].price=obj[i+1].price;
	  	obj[i+1].price=temp;
	  	//for swapping title 
	  	strcpy(temp1,obj[i].title);
                strcpy(obj[i].title,obj[i+1].title);
                strcpy(obj[i+1].title,temp1);
	  	//for swapping author
	  strcpy(temp1,obj[i].author);
                strcpy(obj[i].author,obj[i+1].author);
                strcpy(obj[i+1].author,temp1);
	  }
    }
}

//printing output
    for(int i=0; i<n; i++)
    {
        printf("\nBook %d.............\n\n", i+1);
        printf("Book Name: %s\n", obj[i].title);
        printf("Book Author: %s\n", obj[i].author);
        printf("Book price: %d", obj[i].price);
    }
    return 0;
}
