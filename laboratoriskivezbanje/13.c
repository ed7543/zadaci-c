#include <stdio.h>
#include <stdlib.h>


int main() {

    int a[100][100];
    int i, j, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum;

    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = i + 1; j < n; j++) {
            sum += a[i][j];
        }
    }

    int flag = 1;

     for(i= 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
               if(a[i][j] != sum) {
                flag = 0;
                break;
               }
            }
        }
        if(!flag) {
            break; // Break out of the outer loop if a mismatch is found
        }
    }

    if(flag) {
        for(i= 0; i < n; i++) {
            for(j = 0; j < n; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("-1");

    }
    return 0;
}