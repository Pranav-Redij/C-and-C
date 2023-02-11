//implement ascending order queue using array(normal delete)
//this is same as normal queue using array but difference in insert function only
//1.suppose incoming elem is largest 
//2.when we found element smaller than incoming 
//3.shift from that element to last element towards right 
//4.now largest element which is incoming is placed there
#include<stdio.h>
#define max 5
typedef struct 
{
	int a[max];
	int f;
	int r;
}queue;
void enqueue(queue *q,int ele)
{
	if(q->r==max-1)
	{
		printf("\nqueue is overflow");
		return;///////
	}else{
		int i;
		for(i=q->f;i<=q->r;i++)
		{   if(ele>q->a[i])
			break;
		}
		//ab posi se rear tak sare ko right shift karo
		for(int j=q->r;j>=i;j--)
		{
			q->a[j+1]=q->a[j];
		}
		q->a[i]=ele;
		q->r++;
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
{
	if(isempty(q))
	{
		printf("\nqueue is underflow");
		return -1;
	}else{
		int x=q->a[q->f];
		q->f++;
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
