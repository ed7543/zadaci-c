#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i,j, n, k, a[100];
    scanf("%d", &n);

    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%d-te najmali elementi se: ", k);
    for(i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}