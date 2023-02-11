#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node *next;
}node;

typedef struct{
  node *start;
}LL;

//1
void insertBegginning(LL *l,int ele)
{
  node *newrec;
  newrec=(node*)malloc(sizeof(node));
  newrec->data=ele;

  newrec->next=l->start;
  l->start=newrec;
}
//2
void insertEnd(LL *l,int ele)
{
  node *newrec,*p;
  newrec=(node*)malloc(sizeof(node));

  newrec->data=ele; 
  newrec->next=NULL;
   
  if(l->start==NULL)
  {
    l->start=newrec;
  }else{
    p=l->start;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newrec;
  }
}
int count(LL *l);
//3
void insertAtPos(LL *l,int ele,int pos)
{ 
  node *newrec,*p;
  if(pos>count(l)+1)
  {
    printf("invalid position\n");
    return;
  }
  //same as insert beginning
  if(pos==1)
  {
    newrec->next=l->start;
    l->start=newrec;
    return;
  }
  //at perticular position
  p=l->start;
  for(int i=1;i<=pos-2;i++)
  {
    p=p->next;
  }
  newrec->next=p->next;
  p->next=newrec;
}
//4
void display(LL *l)
{ node *p;
  
  if(l->start==NULL)
  {
    printf("linked is empty\n");
    return;
  }

  p=l->start;
  while(p->next!=NULL)
  { printf("%d",p->data);
    p=p->next;
  }printf("\n");
}
//5
int count(LL *l)
{ 
   int c=0;
   node *p=l->start;
   while(p->next!=NULL)
   {
     c++;
     p=p->next;
   }
   return c;
}
//6
int deleteBeginning(LL *l)
{
  node *p;
  if(l->start==NULL)
  {
    return -1;
  }
  p=l->start;
  int data=p->data;
  l->start=p->next;
  p->next=NULL;
  return data;
}
//7
int deleteEnd(LL *l)
{
  node *p,*q;
  if(l->start==NULL)
  {
    return -1;
  }
  if(l->start->next==NULL)
  {
    p=l->start;
    l->start=NULL;
  }else{
  q=l->start;
  while(q->next->next!=NULL)
  {
    q=q->next;
  }
  p=q->next;
  q->next=NULL;
 }
 return p->data;
}
//8
int deleteAtPos(LL *l,int pos)
{
  node *p,*q;
  if(pos==1)
  {
    //delete beginning
    p=l->start;
    l->start=p->next;
    p->next=NULL;
    return p->data;
  }
  q=l->start;
  for(int i=1;i<=pos-2;i++)
  {
    q=q->next;
  }
  p=q->next;
  q->next=p->next;
  p->next=NULL;
  return p->data;
}
//9
void deleteEle(LL *l,int ele)
{
  node *p,*q;
  if(l->start==NULL)
  {
    printf("linked list is empty\n");
    return;
  }
  if(l->start->data==ele)
  { p=l->start;
    l->start=p->next;
    p->next=NULL;
    return;
  }
  q=l->start;
  while(q->next!=NULL)
  {
    if(ele==q->next->data)
    break;
    else
    q=q->next;
  }
  p=q->next;
  if(p==NULL)
  {
    printf("%d is not found \n",ele);
  }else{
    q->next=p->next;
    p->next=NULL;
  }
}
//10
int search(LL *l,int ele)
{
  node *p;
  p=l->start;
  while(p!=NULL)
  { if(p->data==ele)
    return 1;
    else
    p=p->next;
  }
  return 0;
}
//11
void sort(LL *l)
{
  node *i,*j;

  for(i=l->start;i->next!=NULL;i=i->next)
  {
    for(j=l->start;j->next!=NULL;j=i->next)
    {
      if(j->data>j->next->data)
      {
        int temp;
        temp=j->data;
        j->data=j->next->data;
        j->next->data=temp;
      }
    }
  }
}
//12
void reverse(LL *l)
{
  node *p,*q,*r;
  p=l->start;
  q=NULL;
  while(p!=NULL)
  {
    r=p->next;
    p->next=q;
    q=p;
    p=r;
  }
  l->start=q;
}

int main()
{  LL l;
   l.start=NULL;
    int ch,ele,pos;
    while(1)
    {
        printf("\n1.insertbeginning\t2.InsertEnd\t3.InsertPosition\t");
        printf("4.deletebeginning\t5.eleteend\n6.deleteposition\t");
        printf("7.deleteElement\t8.search\t9.count\t10.sort\t11.reverse\n");
        printf("12.display\t13.Exit\n");

        printf("enter the choice\n");
        scanf("%d",&ch);
        if(ch==13)
        break;
       ////
       switch(ch)
        {
            case 1:
            {
                printf("\nEnter the element to be Inserted at Begining:");
                scanf("%d", &ele);
                insertBegginning(&l, ele);
                display(&l);
            }
            break;
            case 2:
            {
                printf("\nEnter the element to be inserted at end:");
                scanf("%d", &ele);
                insertEnd(&l, ele);
                display(&l);
            }
            break;
            case 3:
            {
                printf("\nEnter the element to be inserted:");
                scanf("%d", &ele);
                printf("\nEnter the position:");
                scanf("%d", &pos);
                insertAtPos(&l, ele, pos);
                display(&l);
            }
            break;
            case 4:
            {
                ele=deleteBeginning(&l);
                display(&l);
            }
            break;
            case 5:
            {
                ele=deleteEnd(&l);
                display(&l);
            }
            break;
            case 6:
            {
                printf("\nEnter the position:");
                scanf("%d", &pos);
                ele=deleteAtPos(&l, pos);
                display(&l);
            }
            break;
            case 7:
            {
                printf("\nEnter the element to be search:");
                scanf("%d", &ele);
                int check=search(&l, ele);
                if(check==1)
                {
                    printf("\nElement is present.");
                }
                else
                {
                    printf("\nElement is not present.");
                }
            }
            break;
            case 8:
            {
                ele=count(&l);
                printf("\nNumber of nodes present are %d", ele);
            }
            break;
            case 9:
            {
                display(&l);
            }
            break;
            case 10:
            {
                sort(&l);
                display(&l);
            }
            break;
            case 11:
            {
                reverse(&l);
                display(&l);
            }
            break;
            default:
            {
                printf("\nPagal ho kya??");
            }
        }
    }
    return 0;
}