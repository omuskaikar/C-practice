#include<stdio.h>
#include<conio.h>
char stack[50];
int top=-1,max=50;
int assoc(char x)
{
    if(x=='^')
        return 1;
    else
        return 2;
}
int prec(char op)
{
    if(op=='^')
        return 3;
    if(op=='*' || op=='/')
        return 2;
    return 1;
}
int push(char x)
{
    if (top==max-1);
        return -1;
    top++;
    stack[top]=x;
}
char pop()
{
    if(top==-1)
        return -1;
    char x;
    x=stack[top--];
    return x;
}
char peek()
{
    if(top==-1)
        return -1;
    char x;
    x=stack[top];
    return x;
}
void main()
{
    char postfix[50],infix[50],ch1,ch;
    int i,j=0;
    printf("enter infix:");
    gets(infix);
    for (i=0;infix[i]!=0;i++)
        {
            ch=infix[i];
            if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0'&&ch<='9'))
                postfix[j++]=ch;
            else if (ch=='(')
                        push(ch);
            else if (ch==')')
                {
                    while(peek()!='(')
                    {
                        ch1=pop();
                        postfix[j++]=ch1;
                    }
                    pop();
                }
            else if(peek()==-1 || peek()=='(')
                        push(ch);
            else if(prec(ch)>prec(peek()))
                push(ch);
            else if(prec(ch)<prec(peek()))
            {
                ch1=pop();
                postfix[j++]=pop;
                i--;
                continue;
            }
            else if(assoc(ch)==2)
                {
                    ch1=pop();
                    postfix[j++]=ch1;
                    push(ch);
                }
            else push(ch);
        }
    while(peek()!=-1)
        {
            ch1=pop();
            postfix[j++]=ch1;
        }
    postfix[j]=0;
    printf("\nexpression is:%s",postfix);
}
