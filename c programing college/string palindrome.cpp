//palindrome string
#include<stdio.h>
#include<string.h>
int main()
{
	char stri[20];
	int length=0;
	int flag=0;
	printf("enter the string");
	scanf("%s",&stri);
	length=strlen(stri);
	for(int i=0;i<length;i++)
	{
		if(stri[i]!=stri[length-i-1])
		{
			flag=1;
			break;
		}
	}
	  if (flag) {
        printf("%s is not a palindrome", stri);
    }    
    else {
        printf("%s is a palindrome", stri);
    }
    return 0;
}
