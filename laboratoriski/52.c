#include <stdio.h>

int main() {

    int xa, ya; // koordinati na tockata a
    int xc, yc; // koordinati na tockata c

    printf("Vnesi koordinati na A: ");
    scanf("%d%d", &xa, &ya);

    printf("\nVnesi koordinati na B: ");
    scanf("%d%d", &xc, &xc);

    int xt, yt;

    printf("\nVnesi koordinati na novata tocka T: ");
    scanf("%d%d", &xt, &yt);

    if(xt >= xa && xt <= xc && yt >= ya && yt <= yc) {
        printf("DA\n");
    } else {
        printf("NE\n");
    }

    return 0;

}