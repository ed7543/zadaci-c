#include <stdio.h>

int main() {
    int i, j, n, sum = 0;
    int a[100][100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i= 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i + j == n - 1) {
                sum += a[i][j];
            }       
        }
    }

    printf("%d", sum);

    return 0;
}