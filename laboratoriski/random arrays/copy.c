#include <stdio.h>

int main() {
    int i, n;

    scanf("%d", &n);

    int a[100], b[100];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        b[i] = a[i];
    }

    //printing out the copied array
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}