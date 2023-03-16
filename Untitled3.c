#include<stdio.h>
#include<conio.h>
void main()
{
    char exp[50];
    int i=0,x1=0,y1=0,z1=0,x2=0,y2=0,z2=0;
    printf("enter the expression");
    gets(exp);
    while(exp[i]!='\0')
        {
            if(exp[i]=='(')
                {
                    x1++;
                }
            else if(exp[i]==')')
                {
                    x2++;
                    if(x2>x1)
                        break;
                }
            if(exp[i]=='[')
                {
                    y1++;
                }
            else if(exp[i]==']')
                {
                    y2++;
                    if(y2>y1)
                        break;
                }
            if(exp[i]=='{')
                {
                    z1++;
                }
            else if(exp[i]=='}')
                {
                    z2++;
                    if(z2>z1)
                        break;
                }
            i++;
        }
    if(x1==x2&&y1==y2&&z1==z2)
        {
            printf("paranthesis balanced");
        }
    else{
            printf("not balanced");

    }
}
