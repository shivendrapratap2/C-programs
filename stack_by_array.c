#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, top= -1 ,c=0,i;
    printf("enter size of your stack:\n");
    scanf("%d",&n);
    int data[n],value;
    printf("*****choices******\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. peek\n");
    printf("4. Display\n");
    printf("5. Exit");
    printf("\n");
    while(c != 5){
    printf("\n#enter your choice:\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            if(top==n-1) printf("stack is full\n");
            else
            {
                printf("enter value:\n");
                scanf("%d",&value);
                top++;
                data[top]=value;
            }
            break;

        case 2:
            if(top== -1) printf("stack is empty\n");
            else
            {

                printf("\nPopped\n");
                top--;
            }
            break;

        case 3:
            printf("%d\n",data[top]);
            break;

        case 4:
            printf("your stack is:\n");
            for(i=top;i>=0;i--)
            printf("%d\n",data[i]);
            break;

        case 5:
            printf("\nyou have been exited successfully\n");
            break;
    }
    }
    return 0;
}

