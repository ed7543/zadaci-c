#include <stdio.h>

int check(int n) {
    int sqr;
    n = sqr * sqr;
    if(n < 2) {
         printf("brojot %d NE e prost", n);
        return 0;
    }

    int i;
    for(i = 0;i < sqr; i++) {
        if(n % i == 0) {
            printf("brojot %d NE e prost", n);
            return 0;
        }
    }
    printf("brojot %d e prost", n);
    return 1;
    
}

int main() {

    int a[100], i, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i ++) {
        check(a[i] * 10 + a[i + 1]);
    }

   
}