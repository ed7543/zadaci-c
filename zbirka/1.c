#include <stdio.h>
#include <math.h>

int proverka(int a, int b) {
    if(b == 1) {
        return 1;
    }
    if(b % a != 0) {
        return 0; //za da e stepen mora da e delivo
    }

    return proverka(a, b/a);
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    if(proverka(a, b) == 1) {
        printf("da");
    } else {
        printf("Ne");
    }

    return 0;
}