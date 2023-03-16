#include<stdio.h>
#include<conio.h>
void towers(int num,char frompeg,char topeg,char auxpeg)
{
    if(num==1)
        {
            printf("The disk 1 goes from peg %c to peg %c\n",frompeg,topeg);
            return;
        }
    towers(num-1,frompeg,auxpeg,topeg);
    printf("The disk %d goes from peg %c to peg %c\n",num,frompeg,topeg);
    towers(num-1,auxpeg,topeg,frompeg);
}
void main()
/*{
    int a[100],i,n,j,temp,flag=0;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("\n%d:",i+1);
            scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
                {
                    if(a[j]<a[j+1])
                        {
                            flag=1;
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                }
                if(flag==0)
                    break;
        }
     for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    getch();
}
*/
{
    int num;
    printf("enter the number of pegs:");
    scanf("%d",&num);
    towers(num,'A','C','B');
}
