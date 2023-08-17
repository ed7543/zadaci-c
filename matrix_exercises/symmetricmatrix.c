#include <stdio.h>

//a matrix is symmetric when its transpose is equal with itself

int main() {
    int a[100][100], b[100][100], i, j, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j =0 ; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
     }

     //find transpose
     for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            b[i][j] = a[i][j];
        }
     }

    int isSym = 1;
     for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != b[i][j]) {
                isSym = 0;
                break;
            }
        }
     }

     if(isSym == 1) {
        printf("Is symmetrical");
     } else {
        printf("no");
     }

     return 0;
}