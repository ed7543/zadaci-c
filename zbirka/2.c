#include <stdio.h>

int povtoruvanje(int a, int b) {
    if(a == 0) {
        return 0;
    }

    int lastdigit = a % 10;

    if(lastdigit == b) {
        return 1 + povtoruvanje(a / 10, b);
    } else {
        return povtoruvanje(a / 10, b);
    }
    
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int count = povtoruvanje(a, b);

    printf("%d", count);

    return 0;
}