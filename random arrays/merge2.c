#include <stdio.h>

int main() {
    int a[100], b[100], c[100];
    int i, n, m;
    int count = 0;

    printf("Enter the first array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the second array: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n && i < m; i++) {
        c[count] = a[i];
        count++;
        c[count] = b[i];
        count++;
    }

    while(i < n) {
        c[count] = a[i];
        count++;
        i++;
    } while(i < m) {
        c[count] = b[i];
        count++;
        i++;
    }

    //printanje
    for(i = 0; i < n+m; i++) {
        printf("%d ", c[i]);
    }

    return 0;

}