//reverse of string without using inbuilt functions
#include<stdio.h>
int main()
{char name[10],temp,l=0;
printf("enter the name:");
scanf("%s",&name);
for(int i=0;name[i]!='\0';i++)
l++;
int i=0;
int j=l-1;
while(i<j)
{
	temp=name[i];
	name[i]=name[j];
	name[j]=temp;
	i++;
	j--;
}
printf("reversed name:%s",name);
return 0;
}
