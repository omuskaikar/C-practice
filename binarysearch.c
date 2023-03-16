#include<stdio.h>
#include<conio.h>
void binarysearch(int a[], int x, int low, int high)
{
    int mid;
    mid=low + (high-low)/2;
    if (low<high)
    {

        if(a[mid]==x)
        {
            printf("the number %d exists\n",x);
            exit(0);
        }
        else if(a[mid]>x)
        {
            binarysearch(a,x,0,mid-1);
        }
        else if(a[mid]<x)
        {
            binarysearch(a,x,mid+1,high);
        }
    }
        printf("the number %d does not exist\n",x);
        exit(0);
    }
    void main()
    {
        int a[100],i,n,value,low=0,high;
        printf("enter the no. of elements in the array:");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            printf("enter the %d no:",i+1);
            scanf("%d",&a[i]);
        }
        printf("enter the value to be searched:");
        scanf("%d",&value);
        binarysearch(a,value,0,n);
        getch();
    }

