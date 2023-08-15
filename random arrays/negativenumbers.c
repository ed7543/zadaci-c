#include <stdio.h>

int main() {
    int len, i;
    int arr[100];

    scanf("%d", &len);

    for(i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < len; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
