#include <stdio.h>

int main() {
    int i, n, total = 0;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            total++;
        }
    }


    printf("%d", total);

    return 0; 
}