#include<stdio.h>
#include<conio.h>
#define Table_Size 5
int h[Table_Size]= {NULL};
void insert()
{
    int key,index,i,flag=0,hkey;
        printf("\nenter a value to insert into hash table:");
        scanf("%d",&key);
        hkey=key%Table_Size;
        for(i=0; i<Table_Size; i++)
        {
            index=(hkey+i)%Table_Size;
            if(h[index]==NULL)
            {
                h[index]=key;
                break;
            }
        }
    if(i==Table_Size)
    {
        printf("\n!!!!!!!!!!!!!!!element cannot be inserted!!!!!!!!!!!!!!!\n");
        return;
    }
}
void search()
{
    int key,index,i,flag=0,hkey;
    printf("\nenter the search element:");
    scanf("%d",&key);
    hkey=key%Table_Size;
    for(i=0; i<Table_Size; i++)
    {
        index=(hkey+i)%Table_Size;
        if(h[index]==key)
        {
            printf("\nvalue is found at %d position",index);
            break;
        }
    }
    if(i==Table_Size)
    {
        printf("\nvalue is not found:");
    }
}
void display()
{
    int i;
    printf("\nelements in hash table are:");
    for(i=0; i<Table_Size; i++)
    {
        printf("\nat index %d \t value= %d",i,h[i]);
    }
}
void main()
{
    int choice,i;
    printf("\n1:insert\n2:display\n3:search\n4:exit");
    do
    {
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            exit(0);
        }
    }
    while(choice!=4);
}
