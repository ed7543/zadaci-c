#include <stdio.h>
#include <stdlib.h>
#define size 1000

int main() {

    //variable to store user content
    char data[size];

    FILE *f;

    f = fopen("file1.txt", "w");

    //fopen() will return null if it wasnt successful
    if(f == NULL) {
        printf("Unable to create a file.\n");
        exit(EXIT_FAILURE);
    }

    //input content from user
    printf("Enter whatever you wanna write in the file: \n");
    fgets(data, size, stdin);

    //write data to file
    fputs(data, f);

    //close file to save data
    fclose(f);

    //success messafe
    printf("File created successfully!\n");

    return 0;

}