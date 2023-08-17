#include <stdio.h>

int main() {
    int a[3][3], b[3][3];
    int i, j;
    int equal;

    for(i = 0; i < 3; i++) {
        for(j= 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    //we assume that the matrices are equal 
    equal = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(a[i][j] != b[i][j]) {
                equal = 0;
                break;
            }
        }
    }

    if(equal == 1) {
        printf("the matrices are equal.");
    } else {
        printf("The matrices arent equal");
    }

    return 0;
}