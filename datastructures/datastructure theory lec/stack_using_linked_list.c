//stack using linked list 
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
 struct node *next;
 int data;
}node;
typedef struct{
  node *start;
}ll;

void push(ll *l,int ele)//insert at beginning
{
  node *newrec;
  newrec=(node*)malloc(sizeof(node));

  newrec->data=ele;

  newrec->next=l->start;
  l->start=newrec;
}
int pop(ll *l)//delete beginning
{
  node *p;//refering to data to be deleted
  if(l->start==NULL)
  return -1;

  p=l->start;
  l->start=l->start->next;
  return p->data;
}
int stacktop(ll *l)
{
  if(l->start==NULL)
  return -1;
  else 
  return l->start->data;
}
void display(ll *l)
{
  node *p;
  if(l->start==NULL){
  printf("empty stack\n");
 return;
  }
  p=l->start;
  while(p!=NULL)
  {
    int ele=p->data;
    printf("%d\t",ele);
    p=p->next;
  }
  printf("\n");
}
int main()
{   int ch,ele;
    ll l1;
    l1.start=NULL;

    while(1)
    {
        printf("1.push\n2.pop\n3.stacktop\n4.display\n5.exit\n");
        printf("enter the choice:");
        scanf("%d",&ch);
        if(ch==5)
        break;

        switch(ch)
        {
            case 1:printf("enter the element to push:");
                   scanf("%d",&ele);
                   push(&l1,ele);
                   break;
            case 2:ele=pop(&l1);
                   if(ele==-1)
                   {
                    printf("empty stack\n");
                   }else
                   printf("element poped is:%d\n",ele);
                   break;
            case 4:display(&l1);
                   break;
            case 3:ele=stacktop(&l1);
                   if(ele==-1)
                   {
                    printf("empty stack\n");
                   }else
                   printf("element at top is:%d\n",ele);
                   break;
            default:printf("wrong input........\n");
                    break;   
        }
    }

    return 0;
}
