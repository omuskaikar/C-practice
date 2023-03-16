#include<stdio.h>
#include<conio.h>
int stack[100],i,top=-1,choice,j,n,value;
void push()
{
    if(top>=n-1)
    {
        printf("\n!!!!!!!!!!!!!!!!!!!!!!!!stack overflow!!!!!!!!!!!!!!!!!!!!!!!!\n");
    }
    else
    {
        printf("enter the value:");
        scanf("%d",&value);
        top++;
        stack[top]=value;
        printf("%d is pushed in stack",stack[top]);
    }
    return;
}
void display()
{
    printf("the stack is:\n");
    while(top!=-1)
    {
        printf("|%d|\n",stack[top]);
        top--;
    }
    return;
}
void pop()
{
    if(top==-1)
    {
        printf("\n!!!!!!!!!!!!!!!!!!!!!!!!stack underflow!!!!!!!!!!!!!!!!!!!!!!!!\n");
    }
    else
    {
        printf("%d is poped",stack[top]);
        top--;
    }
    return;
}
void main()
{
    printf("enter the size of stack:");
    scanf("%d",&n);
    do
    {
        printf("\n1.push\n2.pop\n3.display\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
    while(choice!=4);
    getch();
}
