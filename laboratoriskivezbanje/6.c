#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10, i, j;
    double a[100][100];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &a[i][j]);
        }
    }

    int b[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        double result = 0.0; // Initialize result inside the loop
        
        for (j = 0; j < n; j++) {
            if (b[i] == 1 || b[i] == 2) { // Use || to handle both cases
                result += a[j][i]; // Use a[j][i] for column operation
            } else if (b[i] == 3) {
                if (a[j][i] > result) {
                    result = a[j][i];
                }
            } else if (b[i] == 4) {
                if (a[j][i] < result) {
                    result = a[j][i];
                }
            }
        }

        if (b[i] == 2) {
            double average = result / n;
            printf("%.2lf ", average);
        } else {
            printf("%.2lf ", result);
        }
    }

    return 0;
}
