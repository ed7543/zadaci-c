#include <stdio.h>

int main() {
    int i, n, x, k;
    int a[100];

    //entering the array
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    //enter the number of times you wanna shift
    scanf("%d", &k);

    while(k > 0) {
        int temp = a[0];
        for(x = 0; x < n - 1; x++) {
            a[x] = a[x+ 1];
        }
        a[n - 1] = temp;
        k--;
    }

    for(i= 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}