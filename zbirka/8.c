#include <stdio.h>

int max(int a, int b, int c) {

    if(a == 0 && b == 0 && c == 0) {
        return 0;
    }

    if(a >= b && a >= c) {
        return a;
    }
    if(a < b) {
        return max(b, a, c);
    } else if(a < c) {
        return max(c, a, b);
    }
    
}

int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    printf("%d", max(a, b, c));

    return 0;
}