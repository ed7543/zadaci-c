#include <stdio.h>

int checkEven(int num) {
    return num % 2 == 0;
}

int main() {
    int n, i, a[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    int negative = 0;

    for (i = 0; i < n; i++) {
        if (checkEven(i) && checkEven(a[i])) {
            count++;
        } else {
            negative++;
        }
    }

    float perc = (float) count * 100.0 / n;
    float neg = (float) negative * 100.0 / n;

    if (perc >= 50.0 / 100.0 && neg <= 30.0 / 100.0) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
