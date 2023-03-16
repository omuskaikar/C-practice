#include<stdio.h>
#include<conio.h>
int max,front=-1,rear=-1;
void enqueue(int queue[])
{
    if(rear==max-1)
    {
        printf("\n!!!!!!!!!Queue over flow!!!!!!!!!\n");
        return;
    }
    else if((front==-1)&&(rear==-1))
    {
        front++,rear++;
        printf("enter the value:");
        scanf("%d",&queue[rear]);
    }
    else
    {
        rear++;
        printf("enter the value:");
        scanf("%d",&queue[rear]);
    }
    return;
}
void dequeue(int queue[])
{
    if(front==-1)
        {
            printf("\n!!!!!!!!!Queue under flow!!!!!!!!!\n");
        }
    else if(front==rear)
        {
            front=rear=-1;
            printf("Queue is empty");
            return;
        }
    else
        {
            front++;
            display();
        }
    return;
}
void display(int queue[])
{
    int ptr=front;
    printf("\nthe queue is :");
    while(rear!=ptr)
        {
            printf(" %d ",queue[ptr]);
            ptr++;
        }
    printf(" %d ",queue[rear]);
    return;
}
void main()
{
    int i,j,n,choice;
    printf("enter the size of the queue:");
    scanf("%d",&max);
    int queue[max];
    printf("\n1:enqueue\n2:dequeue\n3:display\n");
    do
    {
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue(queue);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            display(queue);
            break;
        case 4:
            exit(0);
        }
    }
    while(choice!=4);
    getch();
}
