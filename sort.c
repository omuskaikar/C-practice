#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void quicksort(int a[],int low,int high)
{
    int i, j, pivot, temp;
    if(low<high)
    {
        pivot=low;
        i=low;
        j=high;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<high)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                swap(&a[i],&a[j]);
            }
        }
        swap(&a[j],&a[pivot]);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
void main()
{
    int a[100],i,temp,n,j,min;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the %d value:",i+1);
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n);
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
