/*Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z,
 а потоа последователно се внесуваат парови цели броеви (a, b). Внесувањето на парови цели броеви 
 треба да заврши кога корисникот ќе го внесе парот (0, 0). Треба да се пресмета колку пати z е еднаков 
 на збирот на секој внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b) даваат
  збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).*/

#include <stdio.h>

int main() {
    int z;
    scanf("%d", &z);
    int a, b, i;
    float avg;
    int count = 0;
    int parovi = 0;

    if(z > 0) {
        while(scanf("%d%d", &a, &b)){
            if(a == 0 && b == 0) {
                break;
            } else {
                // avg = (float)(a + b) / z * 100;
                if(a + b == z) {
                    count++;
                }
                parovi++;
                avg = (float)count / parovi * 100;
            }    
        }
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n", count, z);
    printf("Procentot na parovi so zbir %d e %.2f%%", z, avg);
    } else {
        return 0;
    }
    return 0;

}