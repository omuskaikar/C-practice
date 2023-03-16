#include<stdio.h>
#include<conio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int print_a(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int i,j,n;
    printf("enter the number of elemnts:");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-1;j++)
       {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
       }
    }
    printf("the sorted array is:");
    print_a(a,n);
    getch();
}