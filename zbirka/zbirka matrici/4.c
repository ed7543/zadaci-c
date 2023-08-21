#include <stdio.h>

int main() {
    int a[100][100];
    int max, i, j;

    printf("Vnesete gi temperaturite");
    for(i = 0; i < 7; i++) { // 7 dena
        for(j = 0; j < 5; j++) { // 5 merenja
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 7; i++) {
        max = a[i][0]; //great starting point cause measuring the first temperatures of the days
        for(j = 0; j < 5; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
         printf("%d den ima maksimalna temperatura %d", i + 1, max);
         //go stavame tuka da loopovite da zavrsat prvo
    }
    
    return 0;
}