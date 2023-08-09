#include <stdio.h>

int main() {
    int n, i;
    int niza[i];

    scanf("%d", &n);

    if(n >= 100000) {
        return 0;
    }

    //vnesuvanje na n broevi
    for(i = 0; i < n; i++) {
        scanf("%d", &niza[i]);
    }

    for(i = 0; i < n; i++) {
        if(niza[i] % 5 == 0) {
            printf("-----\n");
        } if(niza[i] % 5 == 1) {
            printf(".----\n");
        } if(niza[i] % 5 == 2) {
            printf("..---\n");
        } if(niza[i] % 5 == 3) {
            printf("...--\n");
        } if(niza[i] % 5 == 4) {
            printf("....-\n");
        }
    }

    return 0;
}