//to impliment stack using array in c
#include<stdio.h>
#define max 10

int ch;//define choice globally
int ele;//for pushing operation(the element which we wanted to push)
//defined structure for stack
typedef struct
{
	int a[max];
	int top;
}stack;
//for push
void push(stack *s,int ele)   //   (stack *s,int ele)
{
	if(s->top==max-1)//forget to -1 due to array
	{
		printf("\nstack overflow");
	}else
	{  printf("\ninside push");
		s->top++;
		s->a[s->top]=ele;
	}
}
//is to check wheter stack is empty or not
int isempty(stack *s)
{
	if(s->top==-1)
	{
		return 1;
	}else
	{
		return 0;
	}
}
//for pop
int pop(stack *s)
{
	int x;
	if(isempty(s))///forgot to write
	{   printf("stack is empty");
		return -1;
	}else
	{
		x=s->a[s->top];
		s->top--;
	    printf("\nelement which is pop is:%d",x);
		return x;
	}
}
//for stacktop(to get element at top position)
int stacktop(stack *s)
{   int x;
	if(isempty(s))
	{   printf("stack is empty");
		return -1;
	}else
	{
	 x=s->a[s->top];
	    printf("\nelement which is stacktop is:%d",x);
	 return x;	
	}
}
//for display all elements in stack
int display(stack *s)
{  int i;
	if(isempty(s))
	{
	    printf("stack is empty");
		return -1;	
	}else{
		for(i=s->top;i>=0;i--)
		{
			printf("%d\t",s->a[i]);
		}
	}
}
//display input and taking input
void display1()
{

    printf("\n\t\t\t|||||||||||||||||||STACK|||||||||||||||||||");
    printf("\n\n\n\n\t\t\t1)Push");
    printf("\n\t\t\t2)Pop");
   printf("\n\t\t\t3)Stacktop");
    printf("\n\t\t\t4)Print Elements in stack");
      printf("\n\t\t\t0)Exit");
    printf("\n\t\t\t\tChoose Option:"); 
}
void opsc1()
{
 scanf("%d",&ch);
}

int main()
{   stack s;
    s.top=-1;
  
  
    do{
     display1();
      opsc1();	
      switch(ch)
      {
      	case 1:printf("\n enter element which wanted to push:");
		  scanf("%d",&ele);
		  push(&s,ele);
		  break;
		case 2://int y;       doubt why not working
		//y==pop(stack &s);
		pop(&s);//method 2 printing fucntion was declared inside function
		break;
		case 3:stacktop(&s);
		break;
		case 4:display(&s);
		break;
		default:
			printf("\nInvalid input");
			break;
	  }
	}while(ch!=0);
   
	return 0;
}
