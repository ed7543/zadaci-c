#include <stdio.h>

int check(int *a, int i) {
    if(i == 0) {
        return 0;
    }
    
    int lastdigit = a[i - 1] % 10;

    if(lastdigit < 5) {
        printf("%d", lastdigit);
        return 1 + check(a, i - 1);
    } else {
        return check(a, i - 1);
    }
}

int main() {
    int n, i, a[100];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }    
    
    printf("%d", check(a, n));

    return 0;
}
