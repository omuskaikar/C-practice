#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[50];
int top=-1;
void push(char a)
{
    top=top+1;
    stack[top]=a;
}
void pop()
{
    top=top-1;
}
void main()
{
    char exp[50];
    int i=0,j=0;
    printf("enter the expression: ");
    gets(exp);
    for(i=0;i<strlen(exp);i++)
    {
            if(exp[i]=='(' || exp[i]==')' || exp[i]=='[' || exp[i]==']' || exp[i]=='{' || exp[i]=='}')
                {
                    push(exp[i]);

                }
            if(stack[top]==')' )
                {
                        if(stack[top-1]!='(')
                            {
                                printf("invalid expression");
                                exit(0);
                            }
                        else
                            {
                                pop();
                                pop();
                            }
                }
            if(stack[top]==']')
                {
                        if(stack[top-1]!='[')
                            {
                                printf("invalid expression");
                                exit(0);
                            }
                        else
                            {
                                pop();
                                pop();
                            }
                }
            if(stack[top]=='}')
                {
                        if(stack[top-1]!='{')
                            {
                                printf("invalid expression");
                                exit(0);
                            }
                        else
                            {
                                pop();
                                pop();
                            }
                }
    }

    if(top==-1)
        {
            printf("expression is balanced");
        }
    else
        {
            printf("expression is not balanced");
        }
}
