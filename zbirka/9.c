#include <Stdio.h>

int check(int n) {
    if(n == 0) {
        return 0;
    }

    int lastdigit = n % 10;

    if(lastdigit % 3 == 0) {
        return 1 + check(n / 10);
    } else {
        return check(n/10);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", check(n));

    return 0;
}