#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int a[100][100];

    if(n > 100 && m > 100) {
        return 0;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max, maxi, maxj;

    for(i = 0; i < n; i++) {
        max = a[i][0];
        for(j = 0; j < m; j++) {
            if (a[i][j] > max)
            {
               max = a[i][j];
               maxi = i;
               maxj = j;
            }
            
        }
    }

    int sum = 0;
    for(j = 0; j < m; j++) {
        if(j != maxj) {
            sum += a[maxi][j];
        }
    }

    a[maxi][maxj] = sum;

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}