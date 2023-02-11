//write a code to convert given infix expression to postfix expression
#include<stdio.h>
#include<string.h>
#define MAX 50
typedef struct
{
	int a[MAX];
	int top;
}stack;
// now basic requirements like operations on stack
void push(stack *s,int ele)
{
	s->top++;
	s->a[s->top]=ele;
}
int pop(stack *s)
{
	int x;
	x=s->a[s->top];
	s->top--;
	return x;
}
int stacktop(stack *s)
{
	return s->a[s->top];
}
int isempty(stack *s)
{
	if(s->top==-1)
	return 1;
	else 
	return 0;
}
//basic requirenment of convert operation
//like isoperand,icp(incoming priority)
int isoperand(char x)
{
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z')||(x>='0'&&x<='9'))
	return 1;
	else
	return 0;
}
int icp(int x)//incoming priority
{
	switch(x)
	{
		case'(':return 0;
		case'-':
		case'+':return 1;
		case'*':
		case'/':
		case'%':return 2;
	}
	return -1;
}
//convert operation
void convert(char infix[],char post[])
{
	stack s;
	s.top=-1;
	int k=0;
	for(int i=0;i<strlen(infix);i++)
	{  int x=infix[i];
		if(x=='(')
		push(&s,x);
		
		else if(x==')')
		{   
			while(1)
			{
			 int ele=pop(&s);
			 if(ele=='(')
			 break;
			 post[k++]=ele;
			}
		}
		else if(isoperand(x))
		post[k++]=x;
		//now for operator
		else if(isempty(&s))
		push(&s,x);
		else if(icp(x)>icp(stacktop (&s)))
		push(&s,x);
		else
		{
			while((isempty(&s)==0)&&(icp(stacktop (&s))>=(icp(x))))
			{
				int ele=pop(&s);
				post[k++]=ele;
			}
			push(&s,x);
		}
		
	}
	while(isempty(&s)==0)
	{
		post[k++]=pop(&s);
	}
	post[k]='\0';
}
//main function
int main()
{
	char infix[MAX];
	char post[MAX];
	printf("enter the infix string:");
	gets(infix);
	convert(infix,post);
	printf("postfix expression is:%s\n",post);
	return 0;
}
