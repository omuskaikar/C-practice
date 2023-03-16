#include<stdio.h>
#include<conio.h>
void main()
{
    int num_of_lines, chk = 0;
    printf("Enter Number of Lines for Printing: "); scanf("%d", &num_of_lines);

    for (int xitr = 0; xitr < num_of_lines; xitr++){
        chk = 0;
        for (int yitr = xitr; yitr < num_of_lines; yitr++) {
            printf(" ");
        }
        printf("X", xitr);
        for (int yitr = 0; yitr < xitr; yitr++) {
            printf(" ");
            chk = 1;
        }
        for (int yitr = 0; yitr < xitr - 1; yitr++) {
            printf(" ");
            chk = 1;
        }
        if (chk == 1){
            printf("X");
        }
        printf("\n");
    }
    for (int xitr = 0; xitr < (num_of_lines) + 1; xitr++) {
        printf("X ");
    }
    printf("\n");
    printf("Exit\n");
    return;
}

