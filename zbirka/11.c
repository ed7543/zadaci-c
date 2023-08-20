#include <stdio.h>

int check(int n) {
    if(n <= 99 && n >= 10) {
        return (n % 10 + n / 10);
    } else {
        return check(n / 10);
    }
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    int first = check(a);
    int second = check(b);

    if(first > second) {
        printf("%d", a);
    } else if(second > first) {
        printf("%d", b);
    } else {
        printf("broevite se so isti zbir.");
    }

    return 0;
}