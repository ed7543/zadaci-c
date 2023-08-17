#include <stdio.h>

int main() {
    int n, i, j, a[100][100];
    int sum;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //sum for each row
    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = 0; j < n; j++) {
            sum += a[i][j];
        }
        printf("Row %d sum %d\n", i + 1, sum);
    }

    //sum for each collumn
    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = 0; j < n; j++) {
            sum += a[j][i];
        }
        printf("coolumn %d sum %d\n", i + 1, sum);
    }

   

    return 0;
}