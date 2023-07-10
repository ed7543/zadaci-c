/*Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед.
 Соодветно да се испечатат пораки „PAREN“ и „NE“.
Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)*/

#include <stdio.h>

int main() {
    int a, b, i;
    int positions = 0;
    int pom;
    int d;
    int digitb = 0;

    scanf("%d%d", &a, &b);

    if(a < 0 || b < 0) {
        printf("Invalid input");
    } else {
        for(i = b - 1; i >= a; i--) {
            pom = i;
            if(pom % 2 == 0) {
                while(pom != 0) {
                    d = pom % 10;
                    positions++;
                    pom = pom/100;
                }
            } else if(pom % 2 != 0) {
                pom = pom/10;
                while(pom != 0) {
                    d = pom % 10;
                    positions++;
                    pom = pom/100;
                }
            }
        }

        while(b != 0) {
            digitb++;
            b = b/10;
        }

        if(positions == digitb) {
            printf("PAREN");
        } else {
            printf("NE");
        }

    }

    return 0;
}