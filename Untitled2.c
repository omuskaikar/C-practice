#include<stdio.h>
#include<conio.h>
char exp[100];
float stack[100];
int top=-1;
void push(float data)
{
    top++;
    stack[top]=data;
}
float pop()
{
    float val=stack[top];
    top--;
    return val;
}
void main()
{
    int i;
    float num1,num2,val;
    printf("enter the expression:");
    gets(exp);
    for(i=strlen(exp)-1;i>=0;i--)
        {
            if(isdigit(exp[i]))
                {
                    push((float)(exp[i]-'0'));
                }
            else
                {
                    num1=pop();
                    num2=pop();
                    if(exp[i]=='*')
                        {
                            val=num1*num2;
                        }
                    else if (exp[i]=='+')
                        {
                            val=num1+num2;
                        }
                    push(val);
                }
        }
        printf("%f",pop());
}
