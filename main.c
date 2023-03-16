#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AVL.h"

int main()
{
    tavl *tree = NULL, *bst = NULL;

    tree = insert_avl_node(tree, create_avl_node(50));
    tree = insert_avl_node(tree, create_avl_node(25));
    tree = insert_avl_node(tree, create_avl_node(15));
    tree = insert_avl_node(tree, create_avl_node(10));
    tree = insert_avl_node(tree, create_avl_node(20));
    tree = insert_avl_node(tree, create_avl_node(30));
    tree = insert_avl_node(tree, create_avl_node(100));
    tree = insert_avl_node(tree, create_avl_node(150));
    tree = insert_avl_node(tree, create_avl_node(250));
    tree = insert_avl_node(tree, create_avl_node(120));
    tree = insert_avl_node(tree, create_avl_node(300));
    tree = insert_avl_node(tree, create_avl_node(275));
    tree = insert_avl_node(tree, create_avl_node(115));
    tree = insert_avl_node(tree, create_avl_node(110));
    tree = insert_avl_node(tree, create_avl_node(105));

    bst = insert_bst(bst, create_avl_node(50));
    bst = insert_bst(bst, create_avl_node(25));
    bst = insert_bst(bst, create_avl_node(15));
    bst = insert_bst(bst, create_avl_node(10));
    bst = insert_bst(bst, create_avl_node(20));
    bst = insert_bst(bst, create_avl_node(30));
    bst = insert_bst(bst, create_avl_node(100));
    bst = insert_bst(bst, create_avl_node(150));
    bst = insert_bst(bst, create_avl_node(250));
    bst = insert_bst(bst, create_avl_node(120));
    bst = insert_bst(bst, create_avl_node(300));
    bst = insert_bst(bst, create_avl_node(275));
    bst = insert_bst(bst, create_avl_node(115));
    bst = insert_bst(bst, create_avl_node(110));
    bst = insert_bst(bst, create_avl_node(105));

    print_avl(bst, "Main");

    return 0;
}
