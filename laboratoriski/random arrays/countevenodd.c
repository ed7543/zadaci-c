#include <stdio.h>

int main() {
    int pos = 0, neg = 0;
    int i, n;
    int arr[100];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            pos++;
        } else {
            neg++;
        }
    }

    printf("There are %d even and %d odd", pos, neg);

    return 0;
}