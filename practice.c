#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *Createnode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void Insertnode()
{
    struct node *t,*temp;
    t=Createnode();
    printf("Enter the value:");
    scanf("%d",&t->data);
    t->next=NULL;
    temp=start;
    if(start==NULL)
        {
            start=t;
        }
    else
        {
            while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=t;
        }
}
void traversing()
{
    struct node *ptr;
    ptr=start;
    printf("\nlinked list is:\n\n");
    printf("|%d|",start->data);
    while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            printf("-->|%d|",ptr->data);
        }
    getch();
}
void main()
{
    int i,n;
    printf("enter the no of elements in link list : ");
    scanf("%d",&n);
    while(n>0)
    {
        Insertnode();
        --n;
    }
    traversing();
    getch();
}
