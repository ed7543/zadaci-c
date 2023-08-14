#include <stdio.h>

int main() {

    int n, i, j;
    int a[100], freq[100];
    int count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    /*-1: The element's frequency hasn't been processed yet.
    0: The element is a duplicate and has been marked as such.
    > 0: The element's frequency has been correctly calculated and updated.*/

    for(i = 0; i < n; i++) {
        count = 1; // Initialize count for the current element
        /*the initialization of count to 1 at the start of the outer loop,
        right before you start processing each new element. This is 
        because you want to count the initial occurrence of the current element itself.*/
        
        if(freq[i] != 0) { // If not marked as duplicate
            for(j = i + 1; j < n; j++) {
                if(a[i] == a[j]) {
                    count++;
                    freq[j] = 0; // Mark as duplicate
                }
            }
            freq[i] = count; // Update frequency for the current element
        }
    }
    return 0;
}