#include <stdio.h>

int main() {
    int a[100][100];
    int n;
    int i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j< n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sumx = 0, sumy = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i > j) {
                sumx += a[i][j];
            }
            if(i + j > n - 1) {
                sumy += a[i][j];
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                a[i][j] = sumx;
            } else if(i + j == n - 1) {
                a[i][j] = sumy;
            } else {
                a[i][j] = 0;
            }
        }
    }

    int midsum = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if((i == j) && (i + j == n - 1)) {
                midsum = sumx + sumy;
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