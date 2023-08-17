#include <stdio.h>

int main() {
    int n, i, j, a[100][100], b[100][100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    } 

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}