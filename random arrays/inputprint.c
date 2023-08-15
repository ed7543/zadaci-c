#include <stdio.h>

/* int main() {
    int n, i;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} */


//REKURZIVNO PRINTANJE NA NIZA

void printArray(int arr[], int start, int len) {
    if(start >= len) {
        return;
    }

    printf("%d", arr[start]);

    //rekurzijata
    printArray(arr, start + 1, len);
}

int main() {
    int n, i;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    printf("The elements of the array printed recursively: ");
    printArray(arr, 0, n);
}