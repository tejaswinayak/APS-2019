#basic operations of the queue such as enqueue, dequeue and display the front item of the queue
#the queue can hold a maximum of 5 elements 
#the elements are added at the rear end of the queue and removed from the front end of the queue

#include <stdio.h>
#include <stdlib.h>
#define SS 5

struct queue
{
int items[SS];
int front;
int rear;
};
typedef struct queue Q;

void enqueue(Q *q)
{
    if(q->rear==SS-1)
        printf("queue is full\n");
    else{
        int x;
        printf("Enter queue item \n");
        scanf("%d",&x);
        q->items[++(q->rear)]=x;
    }
}
void dequeue(Q *q)
{
    if(q->front > q->rear)
        printf("Queue is empty\n");
    else{
        int x;
        x=q->items[(q->front)++];
        printf("%d dropped\n",x);
    }
}

void display(Q *q)
{
    if(q->front > q->rear)
    {
        printf("queue is empty\n");
    }
    else
        {
            int x;
            x=q->items[(q->front)];
            printf("item is %d\n",x);
        }
}
int main()
{
    Q q;
    q.rear=-1;
    q.front=0;
    while(1)
    {
    printf("Menu \n");
    printf("1.Enqueue\n");
    printf("2.dequeue\n");
    printf("3.display\n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("enqueue operation\n");
               enqueue(&q);
               break;
        case 2:printf("dequeue operation\n");
               dequeue(&q);
               break;
        case 3:printf("display operation\n");
               display(&q);
               break;
        default:printf("invalid operation\n");
                break;
    }
    }
    return 0;
}
