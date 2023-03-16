#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
    int *temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
/*void towers(int num,char frompeg,char topeg,char auxpeg)
{
    if(num==1)
        {
            printf("peg 1 moves from peg %c to peg %c\n",frompeg,topeg);
            return;
        }
    towers(num-1,frompeg,auxpeg,topeg);
    printf("peg %d moves from peg %c to peg %c\n",num,frompeg,topeg);
    towers(num-1,auxpeg,topeg,frompeg);
}
void main()
{
    int num;
    printf("enter the no. of disks:");
    scanf("%d",&num);
    towers(num,'A','C','B');
}
*/
void quicksort(int a[],int low,int high)
{
   int i, j,n=high, pivot, temp;
   if(low<high){
      pivot=low;
      i=low;
      j=high;
      while(i<j){
         while(a[i]<=a[pivot]&&i<high)
         i++;
         while(a[j]>a[pivot])
         j--;
         if(i<j){
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
      for(i=0;i<n;i++)
        {
            printf("\nthe %d element is :%d",i+1,a[i]);
        }
      getch();
}

void main()
{
    int i,n,j,min,a[100],temp;
    printf("enter the no. of ements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("enter the %d element:",i+1);
            scanf("%d",&a[i]);
        }
    /*for(i=1;i<n;i++)
        {
            temp=a[i];
            j=i-1;
            while(j>=0&&a[j]>temp)
                {
                    a[j+1]=a[j];
                    j--;
                }
            a[j+1]=temp;
        }
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-1-i;j++)
                {
                    if(a[j]>a[j+1])
                        {
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                }
        }
    for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
                {
                    if(a[j]<a[min])
                        {
                            min=j;
                        }
                }
            if(min!=i)
                {
                    temp=a[i];
                    a[i]=a[min];
                    a[min]=temp;
                }
        }*/
}



