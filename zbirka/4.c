#include <stdio.h>

int Even(int a, int position) {
    if (a == 0) {
        return 0;
    }

    int lastdigit = a % 10;
    
    if (position % 2 == 0 && lastdigit % 2 == 0) {
        return lastdigit + 10 * Even(a / 10, position + 1);
    } else {
        return Even(a / 10, position + 1);
    }
}

int main() {
    int a;
    scanf("%d", &a);

    printf("%d", Even(a, 1));

    return 0;
}
