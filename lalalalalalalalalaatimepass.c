#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *CreateNode()
{
    struct node *r;
    r=(struct node *)malloc (sizeof(struct node));
    return r;
}
void traversing()
{
    struct node *ptr;
    ptr=start;
    printf("|%d|",ptr->data);
    while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            printf("-->|%d|",ptr->data);
        }
    getch();
}
void InsertNode()
{
    struct node *t,*temp;
    t=CreateNode();
    printf("enter the data:");
    scanf("%d",&t->data);
    t->next=NULL;

    if(start==NULL)
        {
            start=t;
        }
    else
        {
            temp=start;
            while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
            temp->next=t;
        }
}
void main()
{
    int i=1,j,n;
    printf("enter the no. of elements in the linked list:");
    scanf("%d",&n);
    while(n>0)
    {
        printf("For node %d:\n",n);
        InsertNode();
        n--;
    }
    traversing();
    getch();
}
