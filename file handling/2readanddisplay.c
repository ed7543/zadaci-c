#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 1000

int main() {

    char data;

    FILE *f;

    f = fopen("file2.txt", "r");

    if(f == NULL) {
        printf("Unable to read file.\n");
        printf("Please check if file exists in the directory.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully.\n");

    do {
        //read character one by one
        data = fgetc(f);
        //print character in the console
        putchar(data);
    } while(data != EOF);

    fclose(f);

    return 0;
}