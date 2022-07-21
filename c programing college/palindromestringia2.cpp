#include<stdio.h>
#include<string.h>
int main()
{   char name1[10];
    char name2[10];
    printf("enter name:");
    gets(name1);
    strcpy(name2,name1);
	strrev(name1);
	int result=strcmp(name1,name2);
	if(result==0)
	{
		printf("string is palindrome");
	}else{
		printf("not palindrome");
	}
	return 0;
}
