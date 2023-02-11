//practice convert infix to postfix using stack
#include<stdio.h>
#include<string.h>
#define max 50
//making stack
typedef struct
{
	int a[max];
	int top;
}stack;
//stack operations
void push(stack *s,int ele)
{
	s->top++;
	s->a[s->top]=ele;
}
int pop(stack *s)
{
	int x=s->a[s->top];
	s->top--;
	return x;
}
int isempty(stack *s)
{
	if(s->top==-1)
	{
		return 1;
	}else return 0;
}
int stacktop(stack *s)
{
	return s->a[s->top];
}
//extra things
int isoperand(char x)
{
	if((x>='A'&&x<='Z')||(x>='a'&&x<='z')||(x>='0'&&x<='9'))
	{
		return 1;
	}else return 0;
}
int icp(int x)
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
//logic main
void convert(char infix[],char postfix[])
{
	stack s;
	s.top=-1;
	int x,ele;
	int i,k=0;
	for(i=0;i<strlen(infix);i++)
	{
	x=infix[i];
	if(isoperand(x))
	{
		postfix[k++]=x;
	}else if(x=='(')
	{
		push(&s,x);
	}else if(x==')')
	{
	  while(1)
	  {
        ele=pop(&s);
		if(ele=='(')
		break;
		postfix[k++]=ele;	  	
	  }	
	  
	}else if(isempty(&s))
	{
		push(&s,x);
	}else if(icp(x)>icp(stacktop(&s)))
		{
			push(&s,x);
		}else{
			while((icp(x)<=icp(stacktop(&s))&&(isempty(&s)==0)))
			{   ele=pop(&s);
				postfix[k++]=ele;	
			}
			push(&s,x);
		}
	}
 

	while((isempty(&s)==0))
    {
    	ele=pop(&s);
		postfix[k++]=ele;	
	}
	postfix[k]='\0';
}
int main()
{   char infix[50];
    char postfix[50];
    printf("enter the infix expression:");
    gets(infix);
    convert(infix,postfix);
    printf("\npostfix expression is:%s",postfix);
	return 0;
}
