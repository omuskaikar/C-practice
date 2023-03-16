#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int min[100],max[100];
    int ignore,sum=0;
    int mini,minj;
    int vali[100];
    int valj[100];
    int r,c;
//int a[5][5]={{0,4,6,0,3},{4,0,5,0,0},{6,5,0,1,0},{0,0,1,0,2},{3,0,0,2,0}};
    int a[100][100];
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    printf("Enter the number of columns\n");
    scanf("%d",&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter value:\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        mini=0;
        minj=0;
        min[i]=100;
        max[i]=a[i][0];
        for(j=0; j<c; j++)
        {
            if(a[i][j]<=min[i] && a[i][j]!=0)
            {
                min[i]=a[i][j];
                mini=i;
                minj=j;
            }
            if(a[i][j]>max[i])
            {
                max[i]=a[i][j];
            }
        }
        vali[i]=mini;
        valj[i]=minj;
    }
    for(i=0; i<r-1; i++)
    {
        if(vali[i]==valj[i+1] && vali[i+1]==valj[i])
        {
            ignore=i;
        }
    }
    for(i=0; i<r; i++)
    {
        if(i!=ignore)
        {
            sum=sum+min[i];
        }
    }
    printf("The shortest distance is:%d\n",sum);
    getch();
    return 0;
}
