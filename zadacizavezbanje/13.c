#include <stdio.h>

int main() {
    int a[100][100];
    int n, m, x, i, j;

    scanf("%d%d%d", &x, &n, &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        int sum = 0;
        for (j = 0; j < m; j++) {
            sum += a[i][j];
        }
        if (sum > x) {
            for (j = 0; j < m; j++) {
                a[i][j] = 1;
            }
        } else if (sum < x) {
            for (j = 0; j < m; j++) {
                a[i][j] = -1;
            }
        } else {
            for (j = 0; j < m; j++) {
                a[i][j] = 0;
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*The variable i represents the current row you are iterating through, and the variable j represents the column within that row. That's why the loop variable j is used in these loops. The loops iterate through each column in the current row and update the element at that position based on the conditions specified in the task.*/