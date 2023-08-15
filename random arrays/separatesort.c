#include <stdio.h>

int main() {
    int i, j, n, original[100];
    int even[100], odd[100];
    int even_count = 0, odd_count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d ", &original[i]);
    }

    for(i = 0; i < n; i++) {
        if(original[i] % 2 == 0) {
            even[even_count] = original[i];
            even_count++;
        } else {
            odd[odd_count] = original[i];
            odd_count++;
        }
    }

    //sorting the new arrays

    for(i = 0; i < even_count; i++) {
        for(j = i + 1; j < even_count; j++) {
            if(even[i] < even[j]) {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }

    for(i = 0; i < odd_count; i++) {
        for(j= i + 1; j < odd_count; j++) {
            if(odd[i] < odd[j]) {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    //printing the new sorted arrays

    for(i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }

    printf("\n");

    for(i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    return 0;

}