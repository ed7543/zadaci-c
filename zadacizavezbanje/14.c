#include <stdio.h>

int main() {
    int a[100][100];
    int n, i, j;

    scanf("%d", &n);
    for(i = 0; i< n; i++) {
        for(j = 0; j < n*n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int b[100][100];
    for(i = 0; i< n; i++) {
        for(j = 0; j < n*n; j++) {
            b[i][j] = a[i][i + j];
        }
    }

    for(i = 0; i< n; i++) {
        for(j = 0; j < n*n; j++) {
            
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
}