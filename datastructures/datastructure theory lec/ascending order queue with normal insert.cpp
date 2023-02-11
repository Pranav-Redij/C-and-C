//implement ascending order queue using array(normal insert)
//this is same as normal queue using array but difference in dequeue function only
//1.find max elem + there position
//2.shift all element to left from pos to rear-1;
//3.return max
#include<stdio.h>
#define MAX 5
typedef struct 
{
	int a[MAX];
	int f;
	int r;
}queue;
void enqueue(queue *q,int ele)
{
	if(q->r==MAX-1)
	{
		printf("\nqueue is overflow");
		return;///////
	}else{
		q->r++;
		q->a[q->r]=ele;
	}
}
int isempty(queue *q)
{
	if(q->f==(q->r)+1)
	return 1;
	else 
	return 0;
}
int dequeue(queue *q)
{ int MAXno=q->a[q->f];
 int pos=q->f;
	if(isempty(q))
	{
		printf("\nqueue is underflow");
		return -1;
	}else{
		for(int i=(q->f)+1;i<=q->r;i++)
		{
			if(q->a[i]>MAXno)
			{
				MAXno=q->a[i];
				pos=i;
			}
		}
		//now shift to left
		for(int i=pos;i<q->r;i++)
		{
			q->a[i]=q->a[i+1];
			q->r--;
		}
		return MAXno;
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
