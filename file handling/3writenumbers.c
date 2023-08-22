#include <stdio.h>
#include <stdlib.h>

int isEven(int n);
int isPrime(int n);

int main() {
   
    FILE *in, *even, *odd, *prime;

    int num;

    in = fopen("3numbers.txt", "r");
    even = fopen("3even.txt", "w");
    odd = fopen("3odd.txt", "w");
    prime = fopen("3prime.txt", "w");

    if(in == NULL || even == NULL || odd == NULL || prime == NULL) {
        printf("File was unable to open.\n");
        exit(EXIT_FAILURE);
    }

    printf("File was opened successfully.\n");

    while(fscanf(in, "%d", &num) == 1) {
        if(isPrime(num)) {
            fprintf(prime, "%d\n", num);
        } else if(isEven(num)) {
            fprintf(even, "%d\n", num); 
        } else {
            fprintf(odd, "%d\n", num);
        }
    }

    fclose(in);
    fclose(even);
    fclose(odd);
    fclose(prime);

    printf("Data written successfully.\n");

    return 0;

}

int isEven(int n) {
    if(n % 2 == 0) {
        return 1;
    }
    return 0;
}

int isPrime(int n) {
    if(n < 2) {
        return 0;
    }

    int i;
    for(i = 2;i * i <= n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}