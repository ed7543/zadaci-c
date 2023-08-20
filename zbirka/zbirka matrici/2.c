#include <stdio.h>

int main() {
    int a[100][100], n, m, i, j;
    int zbir1 = 0, zbir2 = 0;

    scanf("%d%d", &n, &m);

    if(n > 100 || m > 100) {
        return 0;
    }

    for(i = 0; i < n; i++)  {
        for(j = 0;j < m;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(i < j) {
                zbir1 +=a[i][j];
            } if(i + j < n - 1) {
                zbir2 += a[i][j];
            }
        }
    }

    if(zbir1 > zbir2) {
        for(i = 0; i < n / 2; i++) {
            for(j = 0; j < m; j++) {
                int temp = a[i][j];
                a[i][j] = a[n - 1 - i][j];
                a[n - 1 - i][j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    
    }

    return 0;
}