#include <stdio.h>

int func(int a[], int n) {
    int i;
    int evencount = 0, count = 0;
    for(i = 0; i < n; i++) {
        if(a[i] > 0) {
            evencount++;
        }
    }

    return evencount;
}

int main() {
    int i, n, a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", func(a, n));
}
