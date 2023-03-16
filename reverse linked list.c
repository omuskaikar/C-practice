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
struct node *reverse(struct node *start)
{
    struct node *prev=NULL;
    struct node *next=NULL;
    while(start!=NULL)
        {
            next=start->next;
            prev=start;
            start=next;
        }
    start=prev;
    return start;
};
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
    start=reverse(start);
    traversing();
    getch();
}
