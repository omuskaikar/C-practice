#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *createnode()
{
    struct node *r;
    r=(struct node *)malloc(sizeof(struct node));
    return r;
}
void insertnode()
{
    struct node *temp,*ptr;
    temp=createnode();
    ptr=start;
    temp->next=NULL;
    printf("enter the value:");
    scanf("%d",&temp->data);
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    return;
}
void traversing()
{
    struct node *ptr;
    ptr=start;
    printf("\nthe linked list is:\n|%d|",start->data);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        printf("-->|%d|",ptr->data);
    }
    printf("\n");
}
void insertionstart()
{
    struct node *newnode;
    newnode=createnode();
    newnode->next=NULL;
    printf("enter the value:");
    scanf("%d",&newnode->data);
    newnode->next=start;
    start=newnode;
    traversing();
    return;
}
insertionend()
{
    struct node *ptr=start,*newnode;
    newnode=createnode();
    newnode->next=NULL;
    printf("enter the value:");
    scanf("%d",&newnode->data);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    traversing();
    return;
}
insertionbefore()
{
    int value;
    struct node *ptr=start,*preptr=ptr,*newnode=createnode();
    printf("enter the value before which you want to enter:");
    scanf("%d",&value);
    if(value==start->data)
    {
        insertionstart();
        return;
    }
    while(ptr->data!=value)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    printf("enter the value:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    preptr->next=newnode;
    newnode->next=ptr;
    traversing();
    return;
}
insertionafter()
{
    int value;
    struct node *ptr=start,*preptr=ptr,*newnode=createnode();
    printf("enter the value after which you want to enter:");
    scanf("%d",&value);
    while(preptr->data!=value)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    printf("enter the value:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    preptr->next=newnode;
    newnode->next=ptr;
    traversing();
    return;
}
deletionstart()
{
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
    traversing();
    return;
}
deletionend()
{
    struct node *preptr,*ptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    traversing();
    return;
}
deletionafter()
{
    int value;
    struct node *preptr,*ptr;
    ptr=start;
    preptr=ptr;
    printf("enter the value after which you want to delete:");
    scanf("%d",&value);
    while(preptr->data!=value)
    {
        preptr=ptr;
        ptr=ptr->next;
    }

    preptr->next=ptr->next;
    free(ptr);
    traversing();
    return;
}
void reversing()
{
    struct node *prev=NULL,*next=NULL;
    while(start!=NULL)
        {
            next=start->next;
            start->next=prev;
            prev=start;
            start=next;
        }
        start=prev;
    traversing();
    return;
}
void main()
{
    int i,n,choice;
    printf("enter the no. of elements in the linked list:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        insertnode();
    }
    traversing();
    printf("\n1:insertionstart\n2:insertionend\n3:insertionbefore\n4:insertionafter\n5:deletionstart\n6:deletionend\n7:deletionafter\n8:display\n9:reversing\n10:exit\n");
    do
    {
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertionstart();
            break;
        case 2:
            insertionend();
            break;
        case 3:
            insertionbefore();
            break;
        case 4:
            insertionafter();
            break;
        case 5:
            deletionstart();
            break;
        case 6:
            deletionend();
            break;
        case 7:
            deletionafter();
            break;
        case 8:
            traversing();
            break;
        case 9:
            reversing();
            break;
        case 10:
            exit(0);
        }
    }
    while(choice!=10);
    getch();
}
