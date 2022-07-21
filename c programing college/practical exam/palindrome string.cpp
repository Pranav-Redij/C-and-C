//given word is palindrome or not 
#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],copy[10];
	printf("enter the name:");
	gets(name);
	strcpy(copy,name);
	strrev(name);
	int result=strcmp(name,copy);
	if(result==0)
	printf("palindrome string");
	else
	printf("not a palindrome string");
	return 0;
}
