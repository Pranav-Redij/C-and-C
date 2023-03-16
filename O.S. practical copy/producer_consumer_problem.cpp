#include<stdio.h>
#include<pthread.h>
#include <semaphore.h>
#include<unistd.h>
#include <stdlib.h>
#define max 10

int prodarr[10]={1,2,3,4,5,6,7,8,9,10};
int consarr[10]={0};
int ptrp=0;//pointers inside the prodarr
int ptrc=0;//pointers inside the consarr

pthread_mutex_t lock;//mutex here
sem_t full, empty;//empty

int j;
int i;
//making queue.......................
struct queue{
	int a[max];
	int f;
	int r;
	int count;
};
queue *q;
void initQueue(queue **q) {
    *q = (queue*) malloc(sizeof(queue));
    (*q)->f = 0;
    (*q)->r = -1;
	(*q)->count=0;
}

void enqueue(queue *q,int ele)
{
	if(q->count==max)
	{
		return;
	}else{
		q->count++;
		q->r=(((q->r)+1)%max);
		q->a[q->r]=ele;
	}
}
int dequeue(queue *q)
{
	if(q->count==0)
	{
		return -1;//means it is empty;
	}else{
		int temp=q->a[q->f];
		q->f=(((q->f)+1)%max);
		q->count--;
		return temp;
	}
}


//...................................

void* producer(void *arg){
	for(i=0;i<10;i++)
	{
	    //empty--	
	    sem_wait(&empty); // wait until there is an empty slot in the buffer
	    pthread_mutex_lock(&lock);
		
		//enqueue
		int ele=prodarr[ptrp++];
		enqueue(q,ele);
		
		pthread_mutex_unlock(&lock);
		sem_post(&full); // signal that there is a new item in the buffer
		//full++
	   
	}
}

void* consumer(void *arg){
	for(j=0;j<10;j++)
	{
		//full--
		sem_wait(&full); // wait until there is a new item in the buffer
	    pthread_mutex_lock(&lock);
		
		//dequeue
		int x=dequeue(q);
		consarr[ptrc++]=x;

		pthread_mutex_unlock(&lock);
		sem_post(&empty); // signal that there is an empty slot in the buffer
		//empty--
	}
}

int main()
{
	
	sem_init(&full, 0, 0); // initialize the full semaphore to 0
    sem_init(&empty, 0, max); // initialize the empty semaphore to the buffer size
	pthread_t p1;//declaring the thread(enqueue inside the queue)(PRODUCER)
	pthread_t p2;//dequeue inside the queue/buffer(CONSUMERS)
	
	//even after mutex it is giving random values so initialise it
    if(pthread_mutex_init(&lock,NULL)!=0)
	{
	    printf("\n mutex init has failed\n");
	    return 1;
	}
	initQueue(&q); // initialize the queue

	pthread_create(&p1,NULL,&producer,NULL);//creating the thread
	pthread_create(&p2,NULL,&consumer,NULL);
	
	pthread_join(p1,NULL);//until p1 dont got over it will not terminate
	pthread_join(p2,NULL);

	sem_destroy(&full); // destroy the full semaphore
    sem_destroy(&empty); // destroy the empty semaphore
    pthread_mutex_destroy(&lock); // destroy the mutex

	//print consumer
	for(int k=0;k<max;k++)
	{
	  printf("\t %d",consarr[k]);
	}
	return 0;
}
