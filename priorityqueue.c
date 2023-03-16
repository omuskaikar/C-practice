#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *createnode()
{
    struct node *r;
    r=(struct node *)malloc(sizeof(struct node));
    return r;
}
void enqueue()
{
    struct node *newnode,*ptr;
    ptr=front;
    newnode=createnode();
    newnode->next=NULL;
    printf("enter the data:");
    scanf("%d",&newnode->data);
    printf("enter the priority:");
    scanf("%d",&newnode->priority);
    if(front==NULL||newnode->priority<front->priority)
    {
        newnode->next=front;
        front=newnode;
    }
    else
    {
        while(ptr->next!=NULL&&ptr->next->priority<=newnode->priority)
        {
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
}
void dequeue()
{
    struct node *ptr;
    if(front==NULL)
    {
        printf("\n*****the queue is empty*****\n");
    }
    else
    {
        ptr=front;
        front=front->next;
        printf("deleted item is:",ptr->data);
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr=front;
    printf("\npriority    |   data\n");
    if(front==NULL)
    {
        printf("\n*****the queue is empty*****\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%10d  |   %10d\n",ptr->priority,ptr->data);
            ptr=ptr->next;
        }
    }
}
void main()
{
    int i,j,n,choice;
    printf("\nenter the no. of elements for the priority queue:");
    scanf("%d",&n);
    while(n>0)
    {
        enqueue();
        n--;
    }
    do
    {
        printf("enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue();
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            display();
            break;
        }
    }
    while(choice!=4);
}
