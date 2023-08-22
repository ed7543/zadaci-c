#include <stdio.h>
#include <stdlib.h>

void readFile(FILE *f) {
    char data;

    do {
        data = fgetc(f);
        putchar(data);
    } while(data != EOF);
}

int main() {

    char appendingdata[1000];
    char filePath[100];

    FILE *f;

    printf("Enter file path: \n");
    scanf("%s", filePath);

    f = fopen(filePath, "a");

    if(f == NULL) {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter data to append.\n");
    fgets(appendingdata, 1000, stdin);

    fputs(appendingdata, f);

    fclose(f);

    //reopen file in read mode
    f = freopen(filePath, "r", f);

    printf("Succesfully appended data to file.\n");
    printf("Changed file contents: \n");
    readFile(f);

    fclose(f);

    return 0;

}