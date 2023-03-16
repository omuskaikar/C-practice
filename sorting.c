#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void selectionsort(int a[],int n)
{
    int i,j,min;
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(&a[min],&a[i]);
        }
    }
}
void insertionsort(int a[],int n)
{
    int i,j,min;
    for(i=1; i<n; i++)
    {
        min=a[i];
        j=i-1;
        while(j>=0&&a[j]>min)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=min;
    }
}
int quicksort(int a[],int low,int high)
{
    int i,j,pivot;
    i=low,pivot=low,j=high;
    if(low<high)
    {
        while(i<j)
        {
            while(a[i]<=a[pivot])
            {
                i++;
            }
            while(a[j]>a[pivot])
            {
                j--;
            }
            if(i<j)
            {
                swap(&a[i],&a[j]);
            }
        }
        swap(&a[pivot],&a[j]);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
/*void mergesort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid = low+(high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int n1=mid-low+1;
    int n2=high-mid;
    int l[n1],r[n2];
    for(i=0; i<n1; i++)
    {
        l[i]=a[i+low];
    }
    for(j=0; j<n2; j++)
    {
        r[j]=a[mid+j+1];
    }
    i=0,j=0,k=low;
    while(i<n1&&j<n2)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1)
        {
            a[k]=l[i];
            i++;
            k++;
        }
    while(j<n2)
        {
            a[k]=r[j];
            j++;
            k++;
        }
}*/
void mergesort(int a[],int low,int high)
{
    if(low<high)
        {
            int mid = low+(high-low)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,low,mid,high);
        }
}
void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int n1=mid-low+1;
    int n2=high-mid;
    int l[n1],r[n2];
    for(i=0;i<n1;i++)
        {
            l[i]=a[i+low];
        }
    for(j=0;j<n2;j++)
        {
            r[j]=a[mid+j+1];
        }
    i=0,j=0,k=low;
    while(i<n1&&j<n2)
        {
            if(l[i]<=r[j])
                {
                    a[k]=l[i];
                    i++;
                }
            else
                {
                    a[k]=r[j];
                    j++;
                }
            k++;
        }
    while(i<n1)
        {
            a[k]=l[i];
            i++,k++;
        }
    while(j<n2)
        {
            a[k]=r[j];
            j++,k++;
        }
}
void main()
{
    int i,a[10],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the %d value:",i+1);
        scanf("%d",&a[i]);
    }
    //selectionsort(a,n);
    //insertionsort(a,n);
    //quicksort(a,0,n-1);
    mergesort(a,0,n-1);
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
