#include<stdio.h>
int front=-1;
int rear=-1;
int size;
int value;

int main()
{
    int option=0;
    printf("enter size of your queue:\n");
    scanf("%d",&size);
    int que[size];
    printf("1. Enqueue\n2. Dequeue\n3.Display\n4. Exit\n");
    while(option != 4)
    {
        printf("\n#Enter your option:\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                enqueue(que);
                break;
            case 2:
                dequeue(que);
                break;
            case 3:
                display(que);
                break;
            case 4:
                printf("exited successfully\n");
                break;
        }
    }
    return 0;
}

int isfull()
{
    if(((rear-front+size)%size)+1 == size)
        return 1;
    else
        return 0;
}

int isempty()
{
    if(front==-1 && rear==-1)
        return 1;
    else
        return 0;
}

void enqueue(int* arr)
{
    if(isfull())
    {
        printf("queue is full\n");
        return;
    }
    else if(isempty())
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=(rear+1)%size;
    }
    printf("enter value:\n");
    scanf("%d",&value);
    arr[rear]=value;
}

void dequeue(int* arr)
{
    if(isempty())
    {
        printf("queue is empty\n");
        return;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
        return;
    }
    else
    {
        front=(front+1)%size;
    }
}
 void display(int* arr)
 {
     int i=0;
     if(isempty())
        printf("nothing in queue to display\n");
     else
     {
         for(i=0;i<(((rear-front+size)%size)+1);i++)
             printf("%d ",arr[(i+front)%size]);
     }
 }
