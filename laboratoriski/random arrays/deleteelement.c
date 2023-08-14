#include <stdio.h>

int main() {
    int n, i, x, position;
    int a[100];

    printf("Enter the size and the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position of the element that you want to delete: ");
    scanf("%d", &position);

    for(x = position; x < n - 1; x++) {
        a[x] = a[x + 1];
    }
    n--;

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}