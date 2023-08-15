#include <stdio.h>

int main() {

    int arr[100];
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min1 = arr[0];
    int min2 = arr[0];

    for(i = 0; i < n; i++) {
        if(min1 > arr[i]) {
            min2 = min1;
            min1 = arr[i];
        } else if(min1 < min2 && min1 != arr[i]) {
            min2 = arr[i];
        }
    }

    printf("%d %d", min1, min2);

    return 0;
}