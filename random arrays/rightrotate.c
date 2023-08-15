#include <stdio.h>

int main() {

    int i, n, y, k;
    int a[100];

    //enter the array
    scanf("%d", &n);

    for(i = 0;i < n; i++) {
        scanf("%d", &a[i]);
    }

    //enter how many times you wanna shift the array

    scanf("%d", &k);
    while(k > 0) {
        int temp = a[n - 1];
        for(y = n - 1; y > 0; y--) {
            a[y] = a[y - 1];
        }
        a[0] = temp;
        k--;
    }

    //printing 

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}