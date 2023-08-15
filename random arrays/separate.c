#include <stdio.h>

int main() {
    int n, i;
    int original[100];
    int even[100], odd[100];
    int count_even = 0, count_odd = 0;

    scanf("%d", &n);

    for(i= 0; i < n; i++) {
        scanf("%d", &original[i]);
    }

    for(i = 0; i < n; i++) {
        if(original[i] % 2 == 0) {
            even[count_even] = original[i];
            count_even++;
        } else {
            odd[count_odd] = original[i];
            count_odd++;
        }
    }

    //printing even

    for(i = 0; i < count_even; i++) {
        printf("%d ", even[i]);
    }

    printf("\n");

    for(i= 0; i < count_odd; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}