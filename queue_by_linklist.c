#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};

struct node* front=NULL;
struct node* rear=NULL;

int main()
{
    int option=0;
    printf("1. Enqueue\n2. Dequeue\n3.Display\n4. Exit\n");
    while(option != 4)
    {
        printf("\n#Enter your option:\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("exited successfully\n");
                break;
        }
    }
    return 0;
}

void enqueue()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter value:\n");
    scanf("%d",&newnode->data);
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
    else
    {
        rear->next=newnode;
        newnode->next=NULL;
        rear=newnode;
    }
}

void dequeue()
{
    struct node* ptr;
    if(front==NULL)
        printf("your queue is empty\n");
    else if(front==rear)
    {
        ptr=front;
        front=NULL;
        rear=NULL;
        free(ptr);
    }
    else
    {
        ptr=front;
        front=front->next;
        free(ptr);
    }
}

void display()
{
    struct node* ptr;
    ptr=front;
    if(ptr==NULL)
        printf("nothing to display\n");
    else
    {
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
