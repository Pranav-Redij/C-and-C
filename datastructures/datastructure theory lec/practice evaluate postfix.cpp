//practice evaluate
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
int Evaluatepostfix(char postfix[])
{
	stack s;
	s.top=-1;
	int op1,op2,i,v;
	char x;
	for(i=0;i<strlen(postfix);i++)
	{
		x=postfix[i];
		if(isoperand(x))
		{
			push(&s,(int)x-'0');
		}else{
			op2=pop(&s);
			op1=pop(&s);
			switch(x)
			{
				case'+':v=op1+op2;break;
				case'%':v=op1%op2;break;
				case'/':v=op1/op2;break;
				case'*':v=op1*op2;break;
				case'-':v=op1-op2;break;
			}
			push(&s,v);
		}
	}
	return pop(&s);
}
int main()
{  
    char postfix[50];
    printf("enter the postfix expression:");
    gets(postfix);
    printf("\n result is:%d",Evaluatepostfix(postfix));
	return 0;
}
