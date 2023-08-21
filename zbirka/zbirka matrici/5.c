#include <stdio.h>

int main() {
    int a[100][100], n, m, i, j;

    scanf("%d%d", &n, &m);

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0, count = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(i > j && i + j < n - 1) {
                sum += a[i][j];
                count++;
            }
        }
    }

    float avg = (float)sum/count;
    
    printf("%.2f", avg);

    return 0;
}