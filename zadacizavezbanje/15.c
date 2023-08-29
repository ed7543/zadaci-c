#include <stdio.h>

int check(int n) {

    if(n == 0) {
        return 0;
    }

    int lastdigit = n % 10;
    int flag = 1;
    if(lastdigit != 9) {
        return check(n / 10);
    } 
    if(flag == 1) {
        lastdigit = 7;
    } else {
        return check(n / 10);
    }
}

int main() {
    
    int numbers[100];
    int count = 0;
    int n;

    while(count <= 100 && scanf("%d", &n) == 1) {
        numbers[count] = n;
        count++;
    }
}