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

struct node CreateElement(char name[50], int age) {
    struct node element;
    strcpy(element.name, name);
    element.age = age;
    element.next = NULL;

    return element;
}

void main()
{
    node_t _node_array[5];
    struct element _element_array[5];
    char names[][50] = {"Manish", "Shweta", "Om", "Uday", "Ujwala"};
    int ages[] = {50, 30, 20, 10, 40};

    //Create Node elements
    for(int itr = 0; itr < 5; itr++)
    {
        _node_array[itr] = CreateElement(names[itr], ages[itr]);
    }

    for(int itr = 0; itr < 5; itr++) {
            printf("Node: Name:%s Age:%d\n", _node_array[itr].name, _node_array[itr].age);
    }

    getch();
}
