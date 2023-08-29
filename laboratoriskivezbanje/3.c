#include <stdio.h>

int check(int *numbers, int n, int i) {
    int nextelement = numbers[i + 1];
    if(numbers[i] == nextelement) {
        
    }
}

int main() {
    int numbers[100];
    int n;
    int count = 0;

    while(scanf("%d", &n) == 1) {
        numbers[count] = n;
        count++;
    }

}