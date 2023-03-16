#include <stdio.h>
#include "PracticeLinkedList.h"



tnode *head = NULL;


int main() {

    head = create_node();

    printf("%d", head->data);
    return 0;
}
