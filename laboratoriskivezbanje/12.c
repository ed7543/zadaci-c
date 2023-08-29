#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[100][100], b[100][100], i, j, n, m;

    scanf("%d%d", &n, &m);

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

     for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int count = 0;
    int isMatch = 1;

    for(j = 0; j < m; j++) {
        isMatch = 1;
        for(i= 0;i < n; i++)  {
            if(a[i][j] != b[i][j]) {
                isMatch = 0;
                break;
            }
        }
         if(isMatch) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}