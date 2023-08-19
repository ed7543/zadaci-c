//rekurzivna funk za parni/neparni cifri

#include <stdio.h>

int checkEven(int n) {
    if(n == 0) {
        return 0;
    }

    int lastdigit =n % 10;

    if(lastdigit % 2 == 0) {
        return 1 + checkEven(n / 10);
    } else {
        return checkEven(n / 10);
    }
    
}

int checkOdd(int n) {
    if(n == 0) {
        return 0;
    } 

    int lastdigit = n % 10;
    if(lastdigit % 2 != 0) {
        return 1 + checkOdd(n / 10);
    } else {
        return checkOdd(n / 10);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int countparni = checkEven(n);
    int countneparni = checkOdd(n);

    printf("%d %d", countparni, countneparni);

    return 0;
}