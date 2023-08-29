#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int numbers[1000];
    int count = 0;

    while(scanf("%d", &n) == 1) {
        numbers[count] = n;
        count++;
    }

    int i;
    for(i = 0;i < count; i++) {
        if(numbers[i] % 2 == 0) {
            numbers[i] += 1;
        } else {
            numbers[i] -= 1;
        }
    }

    for(i = 1; i < count; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
} 