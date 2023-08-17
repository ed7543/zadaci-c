#include <stdio.h>

int main() {
    int a[100][100], i, j, n;
    int isTriangle;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    isTriangle = 1;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i > j) {
                if(a[i][j] != 0) {
                    isTriangle = 0;
                }
            }
        }
    }

    if(isTriangle == 1) {
        printf("is upper triangle.");
    } else {
        printf("NO");
    }

    return 0;
}