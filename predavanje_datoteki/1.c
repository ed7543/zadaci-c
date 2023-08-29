/*Програма која отвора датотека за запишување, запишува во неа, ја затвора, ја отвора за читање, чита од неа и испишува на екран.*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *f;

    char niza[80] = "Testiranje rabota so datoteki";
    char *p = niza;
    int i;

    //otvaranje datoteka za pisuvanje

    if((f = fopen("datoteka.txt", "w")) == NULL) {
        printf("Unable to open file.");
        exit(EXIT_FAILURE);
    }

    //zapisuvanje niza na disk
    while(*p) {
        if(putc(*p, f) == EOF) {
            printf("Greska pri zapisuvanje.\n");
            exit(EXIT_FAILURE);
        }
        p++;
    }

    fclose(f);

    //otvaranje datoteka za citanje

    if((f = fopen("datoteka.txt", "r")) == NULL) {
        printf("Unable to open file.");
        exit(1);
    }

    for(;;) {
        if((i == fgetc(f)) == EOF) {
            break;
            putchar(i);
        }
    }

    fclose(f);
}