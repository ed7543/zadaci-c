#include <stdio.h>

int main() {
    int i, j, x, n;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                for(x = j; x < n - 1; x++) {
                    a[x] = a[x + 1];
                }
                n--;
                j--;
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}