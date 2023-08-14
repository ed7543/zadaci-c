#include <stdio.h>

int main() {
    int i, n;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];

    for(i = 0; i < n; i++) {
        if(min > arr[i]) {
            min = arr[i];
        } if(max < arr[i]) {
            max = arr[i];
        }
    }

    printf("%d %d", min, max);

    return 0;
}