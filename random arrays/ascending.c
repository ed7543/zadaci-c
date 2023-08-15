#include <stdio.h>

int main() {
    int i, j, n;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    //sort algorithm 
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    //printing
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}