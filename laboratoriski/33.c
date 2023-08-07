#include <stdio.h>

int main() {
    
    int n; //potrosuvacka
    scanf("%d", &n);
    float suma;
    float ddv;
    int x;
    int y;
    int z;
    
    
      if(n <= 500) {
        // se plakja 5 den 
        suma = n * 5.0;
        
    } else if ((n > 500) && (n <= 650)) {
        // se plakja 7.5 den
        
        suma = 500 * 5.0 + (n - 500) * 7.5;
        
    } else if((n > 650) && (n <= 850)) {
        // se plakja 11 den
        
        suma = 500 * 5 + 150 * 7.5 + (n - 650) * 11.0;
    } else if (n > 850) {
        
        suma = 500 * 5 + 150 * 7.5 + 200 * 11.0 + (n - 850) * 13.5;
        
    }
    //printf("%.2f\n", suma);
    float rez;
    if(suma <= 7000) {
        ddv = suma * 10 / 100;
        rez = suma + ddv;
    } else if(suma > 7000) {
        ddv = suma * 18 / 100;
        rez = suma + ddv;
    }
    
    
    //suma + ddv
    
    

    printf("%.2f", rez);
    
  