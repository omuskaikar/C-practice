#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int *temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a[100],i,j,min,n;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the %d no.:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n-i-1;j++)
            {
                if(a[j]<a[min])
                    {
                        min=j;

                    }
            }
            if(min!=i)
                {
                    swap(&a[j],&a[j+1]);
                }
        }
    printf("the sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
