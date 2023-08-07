/*Да се прочитаат два цели броеви од тастатура и на екран да се испечатат нивните сума и производ.*/
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int suma = a + b;
    int proiz = a * b;

    printf("%d\n", suma);
    printf("%d\n", proiz);

    return 0;
}