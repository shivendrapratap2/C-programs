#include<stdio.h>

 struct node
 {
     int data;
     struct node *next,*prev;
 }*start=NULL;

 int main()
 {
     printf("enter size of your linked list\n");
     int n,i;
     scanf("%d",&n);
     for (i=0;i<n;i++)
        create();
    display();
 return 0;
 }

 void create()
 {
     struct node *p,*newnode;
     newnode= (struct node*)malloc(sizeof(struct node));
     printf("enter your data\n");
     scanf("%d",&newnode->data);
     if(start==NULL)
     {
        start=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
     }
     else
     {
        p=start;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next=newnode;
        newnode->next=NULL;
        newnode->prev=p;
     }
 }

 void display()
 {
    struct node *p;
    p=start;
    while(p->next != NULL)
    {
        printf("(%u %d %u %u) ",p,(p->data),p->prev,p->next);
        p=p->next;
    }
    printf("(%u %d %u %u) ",p,(p->data),p->prev,p->next);
 }
