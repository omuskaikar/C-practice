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
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->next = NULL;
    return n;
}
void InsertNode()
{
    struct node *t,*temp;
    temp=CreateNode();
    printf("enter the value:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
        {
            start=temp;
        }
    else
        {
            t=start;
            while(t->next!=NULL)
                {
                    t=t->next;
                }
            t->next=temp;
        }
}
void Traversing()
{
    struct node *ptr;
    ptr=start;
    printf("\n|%d|",ptr->data);
    while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            printf("-->|%d|",ptr->data);
        }
    printf("\n");
}
void InsertBefore(val)
{
    struct node *temp,*preptr,*ptr;
    if(start->data==val)
        {
            InsertStart();
            return ;
        }
    ptr=start;
    preptr=ptr;
    temp=CreateNode();
    printf("enter the value:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    while(ptr->data!=val)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
    preptr->next=temp;
    temp->next=ptr;
    Traversing();
}
void InsertStart()
{
    struct node *temp,*ptr;
    ptr=start;
    temp=CreateNode();
    printf("\nenter the value:");
    scanf("%d",&temp->data);
    temp->next=start;
    start=temp;
    Traversing();
}
void InsertAfter(val)
{
    struct node *temp,*preptr,*ptr;
    ptr=start;
    preptr=ptr;
    while(ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    temp=CreateNode();
    printf("enter the value:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->next=ptr->next;
    ptr->next=temp;
    Traversing();
}
void InsertEnd()
{
    struct node *temp,*ptr;
    ptr=start;
    temp=CreateNode();
    printf("enter the value:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
    ptr->next=temp;
    Traversing();
}
void DeleteStart()
{
    struct node *temp;
    if (start==NULL)
        printf("link list is empty");
    else if(start->next==NULL)
        {
            free(start);
            printf("no linked list");
            exit(0);
        }
    else
        {
            temp=start;
        }
    start=start->next;
    free(temp);
    Traversing();
}
void DeleteEnd()
{
    struct node *ptr=start,*preptr;
    if (start==NULL)
        {
            printf("link list is empty");
            return ;
        }
    else if(start->next==NULL)
        {
            DeleteStart();
        }
    else
        {
            while(ptr->next!=NULL)
            {
                preptr=ptr;
                ptr=ptr->next;
            }
        }
    preptr->next=NULL;
    free(ptr);
    Traversing();
}
void DeleteAfter(val)
{
    struct node *ptr,*preptr;
    ptr=start;
    preptr=ptr;
    while(preptr->data!=val)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
    preptr->next=NULL;
    free(ptr);
    Traversing();
}
void main()
{
    int n,val,choice;
    printf("enter the no. of elements in the linked list:");
    scanf("%d",&n);
    while(n>0)
        {
            InsertNode();
            n--;
        }
    Traversing();
    x:printf("\n1->insertion at start\n2->insertion at end\n3->insert before given value\n4->insert after given value\n5->delete at start");
    printf("\n6->delete at end\n7->delete after a given value\n8->EXIT");
    printf("\nenter choice:");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:
            InsertStart();
            goto x;
        case 2:
            InsertEnd();
            goto x;
        case 3:
            printf("\nenter the value before which you want to insert:");
            scanf("%d",&val);
            InsertBefore(val);
            goto x;
        case 4:
            printf("\nenter the value after which you want to insert:");
            scanf("%d",&val);
            InsertAfter(val);
            goto x;
        case 5:
            DeleteStart();
            goto x;
        case 6:
            DeleteEnd();
            goto x;
        case 7:
            printf("\nenter the value after which you want to delete:");
            scanf("%d",&val);
            DeleteAfter(val);
            goto x;
        default:
            exit(0);
        }
    getch();
}

