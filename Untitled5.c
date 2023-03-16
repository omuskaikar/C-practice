#include<stdio.h>
#include<stdlib.h>
#define size 10
int h[size]={NULL};
void insert()
{
    int key,index,i,flag=0,hkey;
    printf("\nenter value to be inserted");
    scanf("%d",&key);
    hkey=key%size;
    for(i=0;i<size;i++)
    {
        index=(hkey+1)%size;
        if (h[index]==NULL)
        {
            h[index]=key;
            break;
        }
    }
    if(i==size)
    printf("\nElement cannot be inserted");
}
void display()
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<size;i++)
    {
        printf("Index %d=%d\n",h[i]);
    }
}
 void main()
{
    int opt,i;
    do
    {
        printf("1.insert\n2.display\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            insert();
            break;
            case 2:
            display();
            break;
            case 3:exit(0);
        }
    }while(opt!=3);
    getch();
}
