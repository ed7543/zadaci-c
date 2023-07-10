/*Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
 Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
  да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.*/

#include <stdio.h>

int main() {
    int a, b, i;
    int flag, pom;

    scanf("%d%d", &a, &b);

    for(i = a; i <= b; i++) {
        pom = i;
        flag = 1;
        do {
            if((pom % 10) % 2 == 0) {
                flag = 0;
                break;
            } 
        }
         while(pom != 0);

         if(flag) {
            printf("%d", i);
            break;
         }
    }

    if(!flag) {
        printf("NE");
    }

    return 0;
}