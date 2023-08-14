#include <stdio.h>

int main() {
    int n, i, y, position, newn;
    int arr[100];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //enter the new number and its position
    printf("Position and new number: ");
    scanf("%d%d", &position, &newn);

    for(y = n; y > position; y--) {
        arr[y] = arr[y - 1];
    }
    n++;
    arr[position] = newn;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}