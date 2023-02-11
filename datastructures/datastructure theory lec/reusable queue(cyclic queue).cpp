//(reusable queue)implement queue using array
#include<stdio.h>
#define max 5
typedef struct 
{
	int a[max];
	int f;
	int r;
	int count;
}queue;
void enqueue(queue *q,int ele)
{
	if(q->count==max)
	{
		printf("\nqueue is overflow");
		return;///////
	}else{
		q->count++;
		q->r=((q->r)+1)%max;
		q->a[q->r]=ele;
	}
}
int isempty(queue *q)
{
	if(q->count==0)
	return 1;
	else 
	return 0;
}
int dequeue(queue *q)
{
	if(isempty(q))
	{
		printf("\nqueue is underflow");
		return -1;
	}else{
		int x=q->a[q->f];
		q->f=((q->f)+1)%max;
		q->count--;
		return x;
	}
}
void queuefront(queue *q)
{
	if(isempty(q))
	{
		printf("\nqueue is underflow");
		return;////////
	}else{
		int x=q->a[q->f];
	    printf("%d",x);
	}
}
void display(queue *q)
{
		if(isempty(q))
	{
		printf("\nqueue is underflow");
		return;///////
	}else{
		printf("\n elements in queue are:");
		for(int i=q->f;i<=q->r;i++)
		{
		int x=q->a[i];
	    printf("%d\t",x);
		}

	}
}
int main()
{
	queue q;
	q.f=0;
	q.r=-1;
	q.count=0;
	int ch,x;
	int ele;
    while(1)
	{
	printf("\n1.enqueue 2.dequeue 3.queuefront 4.display 5.exit");
	printf("\n enter the choice:");
	scanf("%d",&ch);
	if(ch==5)
	break;
	
	switch(ch)
	{
	case 1:printf("\nenter element:");
	    scanf("%d",&ele);
	    enqueue(&q,ele);
	    break;
	case 2:x=dequeue(&q);
	printf("\ndequeued element is:%d",x);
	break;
	case 3:
	printf("\nfront element is:");
	queuefront(&q);
	break;
	case 4:display(&q);
	break;
	}	
		
    }  
	
	return 0;
}
