#include<stdio.h>
#include<conio.h>
void  towers(int num,char frompeg,char topeg,char auxpeg)
{
    if(num==1)
    {
        printf("the disk 1 goes from peg %c to peg %c\n",frompeg,topeg);
        return;
    }
    towers(num-1,frompeg,auxpeg,topeg);
    printf("the disk %d goes from peg %c to peg %c\n",num,frompeg,topeg);
    towers(num-1,auxpeg,topeg,frompeg);
}
void main()
{
    int num;
    printf("enter the no. of disks:");
    scanf("%d",&num);
    towers(num,'A','C','B');
}
