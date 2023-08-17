#include <stdio.h>

int main() {
    int a[3][3], b[3][3];
    int i, j, sum;
    int c[3][3];
    int k;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

//the mutliplicatoin
    for(i = 0; i < 3; i++) {
        for(j= 0; j < 3; j++) {
            sum = 0;
            /*Multiply row of first matrix to column of second matrix
             * and store sum of product of elements in sum. */
            for(k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    //printing
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}