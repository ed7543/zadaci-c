#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, a[100], b[100], c[200];
    int count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for(i =0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++) {
        c[count] = a[i];
        count++;
    }

    for(i = 0; i < m; i++) {
        c[count] = b[i];
        count++;
    }

    while(i < n) {
        c[count] = a[i];
        count++;
        i++;
    }

    while(i < m) {
        c[count] = b[i];
        count++;
        i++;
    }

    int j;

    for(i = 0; i < n + m; i++) {
        for(j = 0; j < n + m; j++) {
            if(c[i] < c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for(i = 0; i < n+ m; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}