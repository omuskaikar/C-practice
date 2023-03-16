#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,j;
    system("cls");
    printf("enter the no. of * in longest row:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    getch();
}
