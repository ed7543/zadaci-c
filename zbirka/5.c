#include <stdio.h>

int checkDifferences(int a, int b) {
    if(a == b) {
        return 0;
    }

    int last_a = a % 10;
    int last_b = b % 10;

    if(last_a != last_b) {
        return 1 + checkDifferences(a / 10, b / 10);
    } else {
        return checkDifferences(a / 10, b / 10);
    }
}

int checkDigit(int n) {
    int digits = 0;
    while(n != 0) {
        digits++;
        n /= 10;
    }
    return digits;
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    if(checkDigit(a) != checkDigit(b)) {
        return 0;
    } else {
        int count = checkDifferences(a, b);
        printf("%d", count);
    }

    return 0;
    
}