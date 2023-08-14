#include <stdio.h>

int main() {

    int n, i;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0];
    int max2 = arr[0];

    for(i = 0; i < n; i++) {
        if(max1 < arr[i]) {
            max2 = max1;
            max1 = arr[i];
            
        } else if(max1 > max2 && max2 < arr[i]) {
            max2 = arr[i];
        }
    }
    
    printf("%d %d", max1, max2);
    

    return 0;
}