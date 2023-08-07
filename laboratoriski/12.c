/*Да се напише програма која за дадена сума на пари, ќе испечати со
 колку најмалку банкноти и монети може да се исплати. На влез се чита еден
  цел број. На излез се печатат 9 редови, по колку банкноти или монети од секој 
  апоен ни се потребни за да ја исплатиме сумата. Пример 1583 денари, најдобро 
  е да се исплати како:
*/

#include <stdio.h>

int main() {
    
    int pari, rezerva;
    scanf("%d", &pari);
     
     //pari = rezerva;
    
    int b1, b2;
    
    b1 = pari / 5000;
    pari = pari - b1 * 5000;
    printf("%d*5000", b1);
    
    b2 = pari / 1000;
    pari = pari - b2 * 1000;
    printf("\n%d*1000", b2);
    
    int b3;
    b3 = pari / 500;
    pari = pari - b3 * 500;
    printf("\n%d*500", b3);
    
    int b4;
    b4 = pari / 100;
    pari = pari - b4 * 100;
    printf("\n%d*100", b4);
    
    int b5;
    b5 = pari / 50;
    pari = pari - b5 * 50;
    printf("\n%d*50", b5);
    
    int b6;
    b6 = pari / 10;
    pari = pari - b6 * 10;
    printf("\n%d*10", b6);
    
    int b7;
    b7 = pari / 5;
    pari = pari - b7 * 5;
    printf("\n%d*5", b7);
    
    int b8 = pari / 2;
    pari = pari - b8 * 2;
    printf("\n%d*2", b8);
    
    int b9 = pari / 1;
    pari = pari - b9 * 1;
    printf("\n%d*1", b9);
    
    return 0;
}