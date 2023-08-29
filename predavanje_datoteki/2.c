#include <stdio.h>
#include <stdlib.h>

void vpisi(FILE *pd) {
    
}

int main() {
    FILE *pd;

    if((pd == fopen("koloni.txt", "w")) == NULL) {
        printf("Ne se otvara datotekata %s", "koloni.txt");
        exit(1);
    } else {
        vpisi(pd);
        fclose(pd);
    }
    return 0;
}