#include<stdio.h>
#include<conio.h>
void merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = a[low + i];
    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];
    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid,high);
    }
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
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
void insertionsort(int a[], int n)
{
    int i,min,j;
    for (i=1; i<n; i++)
    {
        min = a[i];
        j = i - 1;
        while (j>=0&&a[j]>min)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=min;
    }
}
int selectionsort(int a[],int n)
{
    int i,j,position;
    for(i=0; i<n-1; i++)
    {
        position=i;
        for(j=i+1; j<n; j++)
        {
            if(a[position] > a[j])
            {
                position=j;
            }
        }
        if(position!=i)
        {
            swap(&a[i],&a[position]);
        }
    }
}
int bubblesort(int a[],int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
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
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int i,j,n;
    printf("enter the a of elemnts:");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d elements:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //bubblesort(a,n);
    //selectionsort(a,n);
    //insertionsort(a,n);
    //quicksort(a,0,n);
    mergesort(a,0,n);
    printf("the sorted array is:");
    print_a(a,n);
    getch();
}
