// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i=1,j;
    int k = 1;
    for (i=1; i <= 50; i++) {
        k = 1;
        for (j=2; j<i; j++) {
            printf("i=%d, j=%d, k=%d\n", i, j, k);
            if (i % j == 0 && j != 1) {
                k = 0;
                break;
            }
        }
        if (k==1) {
            printf("Prime Number = %d\n", i);
        }
    }
    
    
    return 0;
}
