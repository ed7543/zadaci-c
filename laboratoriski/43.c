#include <stdio.h>

/*int check(int n) {
    int digit =0;
    while (n > 0) {
        digit++;
        n = n / 10;
    }
    return digit;
} */

int contains(int n, int digit) {
    while(n > 0) {
        if(n % 10 == digit) {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int main() {
    int x, n, y;
    scanf("%d%d", &x, &n);
    int flag = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &y);
        if(x < y) {
            if(contains(y, x)) {
                flag = 1;
            }
        }
    }

    if (!flag) printf("Nema");
    return 0;
}