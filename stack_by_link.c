#include<stdio.h>
struct stack
{
    int data;
    struct stack* next;
};

int main()
{
    int option,n,ex=0;
    struct stack *top=NULL,*ptr;
    printf("enter size of your stack:\n");
    scanf("%d",&n);
    printf("*****choices******\n");
    printf("1. push (to add data)\n");
    printf("2. pop (to delete data)\n");
    printf("3. peek (to read data)\n");
    printf("4. Display\n");
    printf("5. Exit");
    printf("\n");
    while(option != 5){
    printf("\n#enter your choice:\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
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
        break;

    case 2:
        ptr=top;
        if(top==NULL)
            printf("stack is empty \n");
        else if(top->next != NULL)
        {
        top=top->next;
        free(ptr);
        printf("value deleted\n");
        }
        else
        {
            free(ptr);
            top=NULL;
            printf("value deleted\n");
        }
        break;

    case 3:
        if(top!=NULL)
        printf("%d\n",top->data);
        else
        printf("stack is empty \n");
        break;

    case 4:
       while(top->next != NULL)
       {
           printf("%d ",top->data);
           top=top->next;
       }
       printf("%d\n",top->data);
       break;

     case 5:
        printf("\nyou have been exited successfully\n");
        break;
    }
    }
    return 0;
    }
