#include <stdio.h>
#include <stdlib.h>

int sum_pos(int *a, int ind, int n) {
    int sum = 0;

    if(ind > n) {
        return 0;
    }
    
     int i;
    for(i = ind; i < n; i++) {
        sum += a[i];
     }
    

    return sum;    
}

int main() {
    int i, n;
    scanf("%d", &n);
    int a[100];

    for(i = 0; i < n;i++) {
        scanf("%d", &a[i]);
    }

    int ind;
    scanf("%d", &ind);

    if(ind < 0) {
        return 0;
    }

    printf("%d", sum_pos(a, ind, n));

    return 0;
}