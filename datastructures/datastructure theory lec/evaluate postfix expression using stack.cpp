//write a program to evaluate postfix expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 15
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

//basic requirenment of convert operation
//like isoperand
int isoperand(char x)
{
	if(x>='0'&&x<='9')
	return 1;
	else
	return 0;
}
//main logic
int EvaluatePostFix(char post[])
{
	stack s;
	s.top=-1;
	char x;
	int op1,op2,op3;
	for(int i=0;i<strlen(post);i++)
	{
		x=post[i];
		if(isoperand(x))
		push(&s,(int)x-'0');
		else
		{
			op2=pop(&s);
			op1=pop(&s);
			switch(x)
			{
				case '+':op3=op1+op2;break;
				case '-':op3=op1-op2;break;
				case '*':op3=op1*op2;break;
				case '/':op3=op1/op2;break;
				case '%':op3=op1%op2;break;
			}
			push(&s,op3);
		}
		
	}
 return pop(&s);	
}

//main function
int main()
{
	char post[10];
	printf("enter the postfix expression:");
	gets(post);
	printf("result=%d",EvaluatePostFix(post));
	return 0;
}
