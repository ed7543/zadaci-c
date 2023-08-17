#include <stdio.h>

int main() {
    int i, j, n;
    int a[100][100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            int temp = a[i][i];
            //a[i][i] e if(i == j) odnosno glavnata diagonala
            a[i][i] = a[i][n - 1 - i]; //minor diagonal
            a[i][n - 1 - i] = temp;
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}