#include <stdio.h>

double func(int *a, int n, int i) {
    if(n == 0) {
        return 0;
    }

    double res;

    res += a[i] + 1/(a[i + 1]);

    return func(a, n, i + 1);
    
}

int main() {
    int n, i;
    scanf("%d", &n);

    if(n > 100) {
        return 0;
    }

    int a[100];

    for(i = 0; i < n; i++) {
        scanf("%d", a[i]);
    }

    printf("%d ", func(a, n, 0));
}