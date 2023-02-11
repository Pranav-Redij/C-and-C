//implementation of stack using c
#include<stdio.h>
#define max 10

typedef struct{
	int a[max];
	int top;
}stack;
int x;
//push
void push(stack *s,int ele)
{
	if(s->top==max)
	{ 
	 printf("\nstack is overflow ");
	}else{
		s->top++;
		s->a[s->top]=ele;
	}
	
}
 int isempty(stack *s)
 {
 	if(s->top==-1)
 	return 1;
 	else 
 	return 0;
 }
int pop(stack *s)
{
	if(isempty(s)){
		printf("\nstack is underflow");
		return -1;
	}else{
	    x=s->a[s->top];
		s->top--;
		return x;
	}
}
void stacktop(stack *s)
{
	if(isempty(s))
	{
		printf("\nstack underflow");
		
	}else{
		 x=s->a[s->top];
	    printf("\nelement which is stacktop is:%d",x);
	}
}
void display(stack *s)
{
    if(isempty(s))
	{
		printf("\nstack underflow");
		
	}else{
		for(int i=s->top;i>=0;i--)
		{
			int x=s->a[i];
			printf("\t%d",x);
		}
	}	
}
int main(){
	stack s;
	s.top=-1;
	int ele;
	int ch;
	while(1)
    {   printf("\n1.push 2.pop 3.stacktop 4.display 5.exit");
		printf("\nenter the choice:");
		scanf("%d",&ch);
		if(ch==5)
		break;
		switch(ch)
		{
			case 1:printf("enter the element to push:");
			scanf("%d",&ele);
			push(&s,ele);
			break;
			case 2:ele=pop(&s);
			if(ele==-1)
			{ 
		     break;	
			}
			printf("poped element is:%d",ele);
			break;
			case 3:stacktop(&s);
			break;
			case 4:display(&s);
			break;
		}
	}
	return 0;
}
