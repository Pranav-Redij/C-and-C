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

//extra things
int isoperand(char x)
{
	if((x>='A'&&x<='Z')||(x>='a'&&x<='z')||(x>='0'&&x<='9'))
	{
		return 1;
	}else return 0;
}
int isclosebracket(int x)
{
	if(x==')'||x=='}'||x==']')
	return 1;
	else 
	return 0;
}
int isopenbracket(int x)
{
	if(x=='('||x=='{'||x=='[')
	return 1;
	else 
	return 0;
}
int checkkaro(char *exp)
{
	stack s;
	s.top=-1;
	int x,ele,i;
	for(int i=0;i<strlen(exp);i++)
	{   x=exp[i];
		if(isopenbracket(x))
		push(&s,x);
		else if(isclosebracket(x))
		{
			if(isempty(&s))
			return 0;
			else
			{
				ele=pop(&s);
				if((x==')')&&(ele!='('))
				return 0;
					if((x==']')&&(ele!='['))
				return 0;
					if((x=='}')&&(ele!='{'))
				return 0;
			}
		}
	}
if(isempty(&s))
{
	return 1;
}else return 0;
}
int main()
{  
    char exp[50];
    printf("enter the expression:");
    gets(exp);
    if(checkkaro(exp))
    {
    printf("\n correct");	
	}else{
		printf("\n not correct");
	}
    
	return 0;
}
