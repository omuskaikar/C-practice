#include<stdio.h>
#include<conio.h>
typedef struct {
    int a, b;
} tnode;

tnode swap_value(int a, int b){
    tnode node;
    node.a = b;
    node.b = a;
    return node;
}
int swap_v(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("numbers after  swapping by val in function:%d %d\n",a,b);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main()
{
    int a=5,b=4;
    tnode node;
    printf("numbers before swapping:%d %d\n",a,b);
    swap_v(a,b);
    printf("numbers after  swapping by val in main:%d %d\n",a,b);
    swap(&a,&b);
    printf("numbers after  swapping:%d %d\n",a,b);
    node = swap_value(a, b);
    printf("numbers after  swapping by value in main:%d %d\n",node.a, node.b);

    getch();
}
