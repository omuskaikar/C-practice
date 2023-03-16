#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1,max;
void enqueue(int cqueue[])
{
    if((rear+1)%max==front)
        {
            printf("\n****Queue is full****\n");
            return;
        }
    else if(rear==-1&&front==-1)
        {
            front=rear=1;
            printf("enter the value:");
            scanf("%d",&cqueue[rear]);
            return;
        }
    else
        {
            rear=(rear+1)%max;
            printf("enter the value:");
            scanf("%d",&cqueue[rear]);
            return;
        }
}
void dequeue(int cqueue[])
{
    if(rear==-1&&front==-1)
        {
            printf("\n****Queue is empty****\n");
            return;
        }
    else if(front==rear)
        {
            front=rear=-1;
            printf("\n****Queue is empty****\n");
            return;
        }
    else
        {
            front=(front+1)%max;
            display(cqueue);
            return;
        }
}
void display(int cqueue[])
{
    int ptr;
    ptr=front;
    while(rear!=ptr)
        {
            printf(" %d ",cqueue[ptr]);
            ptr=(ptr+1)%max;
        }
    printf(" %d ",cqueue[rear]);
    return;
}
void main()
{
    int choice;
    printf("enter the size of queue:");
    scanf("%d",&max);
    int cqueue[max];
    printf("\n1:enqueue\n2:dequeue\n3:display\n");
    do
    {
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue(cqueue);
            break;
        case 2:
            dequeue(cqueue);
            break;
        case 3:
            display(cqueue);
            break;
        case 4:
            exit(0);
        }
    }while(choice!=4);
    getch();
}
