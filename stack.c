#basic operations of a stack such as push,pop and display the top element of the stack
#THE STACK CAN HOLD A MAXIMUM OF 5 ELEMENTS 

#include <stdio.h>
#include <stdlib.h>
#define SS 5

struct stack
{
int items[SS];
int top;
};
typedef struct stack S;

void push(S *s)
{
    if(s->top==SS-1)
        printf("stack is full\n");
    else{
        int x;
        printf("Enter stack item \n");
        scanf("%d",&x);
        s->items[++(s->top)]=x;
    }
}
void pop(S *s)
{
    if(s->top==-1)
        printf("stack is empty\n");
    else{
        int x;
        x=s->items[(s->top)--];
        printf("%d dropped\n",x);
    }
}

void display(S *s)
{
    if(s->top==-1)
    {
        printf("Stack is empty\n");
    }
    else
        {
            int x;
            x=s->items[(s->top)];
            printf("item is %d\n",x);
        }
}
int main()
{
    S s;
    s.top=-1;
    while(1)
    {
    printf("Menu \n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.display\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("push operation\n");
               push(&s);
               break;
        case 2:printf("pop operation\n");
               pop(&s);
               break;
        case 3:printf("display operation\n");
               display(&s);
               break;
        default:printf("invalid operation\n");
                break;
    }
    }
    return 0;
}
