#include <stdio.h>

int main() {
    int i, n;
    int a[100];

    scanf("%d", &n);

    for(i= 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int toSearch;

    scanf("%d", &toSearch);

    int found = 0; //flag, 0 assuming the element doesnt exist in the array

    for(i = 0; i < n; i++) {
        if(a[i] == toSearch) {
            found = 1;
            break;
            //since the element has been found no need to continue looking for it 
        }
    }

    if(found == 1) {
        printf("The element is found at position %d", i);
    } else {
        printf("the element is not found.");
    }

    return 0;
}