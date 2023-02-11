#include<stdio.h>
#define max 5
typedef struct{
	int a[max];
	int r;
	int f;
}queue;
int x;
void enqueuefront(queue *q,int ele)
{
  if(q->f==-1)
  {printf("\nqueue overflow");
  return;
}
 q->a[q->f]=ele;
 q->f--;
}
void enqueuerear(queue *q,int ele)
{
if(q->r==max-1)
{printf("\nqueue overflow");
  return;}
  q->r++;
  q->a[q->r]=ele;	
}
int isempty(queue *q)
{
if(q->r==q->f)
{
	return 1;
	}	else return 0;
}
int dequeuefront(queue *q)
{ if(isempty(q))
{
	return -1;
}else{
	q->f++;
	x=q->a[q->f];
	return x;
}
	
}
int dequeuerear(queue *q)
{if(isempty(q))
{
	return -1;
}else{
	x=q->a[q->r];
	q->r--;
	return x;
}
}
void display(queue *q)
{
	if(isempty(q))
{ printf("\n is empty");
	return;
}else{
	for(int i=q->f+1;i<=q->r;i++)
	printf("%d\t",q->a[i]);
}
}
	

int main()
{   queue q;
    q.f=max/2;
    q.r=max/2;
    int ch;
    int ele;
    while(1)
    { 
   	 printf("1.enqueuefront 2.enqueuerear 3.dequeuefront 4.dequeuerear 5.display 6.exit\n");
    	printf("\n enter the choice:");
    	scanf("%d",&ch);
    if(ch==6)
    break;
    switch(ch)
	{
    	case 1:printf("\nenter the element for enqueue:");
    	       scanf("%d",&ele);
    	       enqueuefront(&q,ele);
    			break;
    	case 2:printf("enter the element for enqueue:");
    			scanf("%d",&ele);
    			enqueuerear(&q,ele);
    			break;
    	case 3:
			if(dequeuefront(&q)!=-1)
			printf("\ndequeued front element is:%d",dequeuefront(&q));
			else{
			printf("\nis empty");}
			break;
		
		case 4:
			if(dequeuerear(&q)!=-1)
			printf("\ndequeued rear element is:%d",dequeuerear(&q));
			else{
			printf("\nis empty");}
			break;	
		case 5:display(&q);
			break;
		default:printf("\ninvalid choice");
		
	}
   }
   
	return 0;
}
