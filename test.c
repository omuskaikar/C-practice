#include<stdio.h>
#include<conio.h>
typedef struct
{
    int data;
    struct node *next;
} node;
node* create_node()
{
    node* ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("enter the data(int):");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    return ptr;
}
node* joining(node* head,node* ptr)
{
    if(!head)
        {
            head=ptr;
        }
    else
        {
            node *itr = head;
            while(itr->next)
            {
                itr=itr->next;
            }
            itr->next=ptr;
        }
    return head;
}

void print_ll(node *head) {
    node *ptr = head;
    while(ptr) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main()
{
    node* head = NULL, *newnode;

    newnode = create_node();
    head = joining(head, newnode); print_ll(head);

    head = joining(head, create_node()); print_ll(head);
    head = joining(head, create_node()); print_ll(head);
    head = joining(head, create_node()); print_ll(head);
    head = joining(head, create_node()); print_ll(head);

    getch();
}
