#include<stdio.h>
#include<conio.h>
typedef struct
{
    int data;
    struct node *next;
}node;

node* create_node(int _data)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->data = _data;
    ptr->next = NULL;

    return ptr;
}

node* link_node(node *head, node *newnode)
{
    int itr = 1;
    if(!head) {
        head = newnode;
    } else {
        node *ptr = head;
        while(ptr->next) {
            itr++;
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }

    return head;
}

int get_user_input() {
    int number;
    printf("Enter the Data (int): ");
    scanf("%d", &number);
    return number;
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
    node *head = NULL;
    /*
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    head = link_node(head, create_node(get_user_input()));
    */

    head = link_node(head, create_node(10)); print_ll(head);
    head = link_node(head, create_node(20)); print_ll(head);
    head = link_node(head, create_node(30)); print_ll(head);
    head = link_node(head, create_node(40)); print_ll(head);
    head = link_node(head, create_node(50)); print_ll(head);
    head = link_node(head, create_node(60)); print_ll(head);
    head = link_node(head, create_node(70)); print_ll(head);

    getch();
}
