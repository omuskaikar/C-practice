#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct node
{
    char name[50];
    int age;
    struct node *next;
} node_t;

struct element {
    char name[50];
    int age;
};

node_t* CreateElement(char name[50], int age) {
    node_t *element;

    element = (node_t *)malloc(sizeof(node_t));

    strcpy(element->name, name);
    element->age = age;
    element->next = NULL;

    return element;
}

void main()
{
    node_t *start = NULL, *curr = NULL, *element = NULL;

    char names[][50] = {"Manish", "Shweta", "Om", "Uday", "Ujwala"};
    int ages[] = {50, 30, 20, 10, 40};

    //Create Node elements
    for(int itr = 0; itr < 5; itr++)
    {
        element = CreateElement(names[itr], ages[itr]);
        printf("Element: Name = %s, Age=%d\n", element->name, element->age);

        //Add Elements
        if(start == NULL) {
            start = element;
            curr = start;
            printf("HEAD: Name = %s, Age=%d\n", start->name, start->age);
        } else {
            printf("PREV: Name = %s, Age=%d\n", curr->name, curr->age);
            curr->next = element;
            curr = element;
            printf("CURR: Name = %s, Age=%d\n", curr->name, curr->age);
        }
    }

    //Traverse Linked List
    curr = start;
    while (curr != NULL) {
        printf("TRAV: Name = %s, Age=%d\n", curr->name, curr->age);
        curr = curr->next;
    }


}
