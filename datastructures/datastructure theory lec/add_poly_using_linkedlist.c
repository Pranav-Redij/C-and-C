//addition of
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 int c,e;
 struct node *next;
}node;
typedef struct{
  node *start;
}ll;

void insertend(ll *l,int cc,int ee)//insert at end
{
  node *newrec;
  newrec=(node*)malloc(sizeof(node));

  newrec->c=cc;
  newrec->e=ee;
  newrec->next=NULL;

 if(l->start==NULL)
 {
    l->start=newrec;
 }else{
   node *p=l->start;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newrec;
 }
}
void read(ll *l)
{
    int i,n,cc,ee;
    printf("enter the number of terms \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter coefficient and exp\n");
        scanf("%d%d",&cc,&ee);
        insertend(l,cc,ee);
    }
}
void display(ll *l)
{
  node *p;
  if(l->start==NULL){
  printf("empty polynomial\n");
 return;
  }
  p=l->start;
  while(p!=NULL)
  {
    printf("%dx^%d",p->c,p->e);
    p=p->next;
  }
  printf("\n");
}
void addpoly(ll *l1,ll *l2,ll *l3)
{
    node *p,*q;
    p=l1->start;
    q=l2->start;
    while(p!=NULL && q!=NULL)
    {
        if(p->e > q->e)
        {
            insertend(l3,p->c,p->e);
            p=p->next;
        }else if(q->e > p->e)
        {
            insertend(l3,q->c,q->e);
            q=q->next;
        }else{
            insertend(l3,p->c+q->c,p->e);
            p=p->next;
            q=q->next;
        }
        while(p!=NULL)
        {
          insertend(l3,p->c,p->e);
          p=p->next;
        }
         while(q!=NULL)
        {
            insertend(l3,q->c,q->e);
          q=q->next;
        }
    }
}
int main()
{ 
    ll l1,l2,l3;
    l1.start=NULL;
    l2.start=NULL;
    l3.start=NULL;

    read(&l1);
    read(&l2);
  
    addpoly(&l1,&l2,&l3);
    printf("first polynomial\n");
    display(&l1);
    printf("second polynomial\n");
    display(&l2);
    printf("third polynomial\n");
    display(&l3);
    return 0;
}
