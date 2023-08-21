#include <stdio.h>

int main() {
    int a[100][100], n, i, j;

    scanf("%d", &n);

    int sum = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum += a[i][j];
        }   
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i > j) {
                a[i][j] = sum;
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}