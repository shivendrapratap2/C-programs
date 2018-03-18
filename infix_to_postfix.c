#include<stdio.h>
struct stack
{
    int data;
    struct stack* next;
}*top=NULL;

int main()
{
    char infix;
    printf("enter )
void push()
{
     struct stack* ptr;
     ptr=(struct stack*)malloc(sizeof(struct stack));
     printf("enter data:\n");
     scanf("%d",&ptr->data);
     if(top==NULL)
     {
        top=ptr;
        ptr->next=NULL;
     }
     else
     {
        ptr->next=top;
        top=ptr;
     }
}

int pop()
{
    struct stack* ptr;
    int x;
    ptr=top;
    x=top->data;
    if(top->next != NULL)
    {
        top=top->next;
        free(ptr);
        return x;
    }
    else
    {
        free(ptr);
        top=NULL;
        return x;
    }
}
