#include <stdio.h>

int findSum(int arr[], int start, int len) {
    if(start >= len) {
        return 0;
    }

    int sum = arr[start] + findSum(arr, start + 1, len);

    return sum;
}

int main() {

    int n, i;
    int arr[100];
    int total;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    total = findSum(arr, 0, n);

    printf("%d", total);

    return 0;
}