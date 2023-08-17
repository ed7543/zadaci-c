#include <stdio.h>

int main() {
    int a[100][100], i, j, n;
    int isLower;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    isLower = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i < j) {
                if(a[i][j] != 0) {
                    isLower = 0;
                }
            }
        }
    }

    if(isLower == 1) {
        printf("YES");
    } else {
        printf("n0");
    }

    return 0;
}