#include <stdio.h>

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    if(a < 2 || b < 2) {
        printf("Invalid input.");
        return 0;
    }

    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int ekvivalent = 1;
    while(b != 0) {
        if((a % 10) != (b % 10)) {
            ekvivalent = 0;
            break;
        }
        a /= 10;
        b  /= 100;
    }

    if(ekvivalent == 1) {
        printf("DA");
    } else {
        printf("NE");
    }

    return 0;
}