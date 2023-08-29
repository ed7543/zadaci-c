#include <stdio.h>
#include <math.h>

int main() {
    int a[100][100];
    int n, m;
    int i, j;

    scanf("%d%d", &n, &m);

    for(i = 0;i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum;
    float avg;
    int max_element;

    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = 0; j < m; j++) {
            sum += a[i][j];
        }
         avg = (float) sum/m;
    }

   
    
    float farthest;
    for(i = 0; i < n; i++) {
        farthest = 0.0;
        for(j = 0; j< m; j++) {
            float diff = (float) fabs(a[i][j] - avg);
            if(farthest < diff) {
            farthest = diff;
            max_element = a[i][j];
            }
        }
        printf("%d ", max_element);
    }

    return 0;
}