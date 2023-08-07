#include <stdio.h>

int main() {
    int n;
    int kolega;
    scanf("%d", &n);
    int d1, d2, d3, d4; //digits of n

    d1 = n % 10;
    d2 = (n / 10) % 10;
    d3 = (n / 100) % 10;
    d4 = (n / 1000) % 10;

    
   // printf("%d", d2);

   int count = 0;

   if(d1 == 5) {
    count++;
    kolega = kolega + 5;
   } else 
   {
    kolega = kolega + d1;
   }

   if(d2 == 5) {
    count++;
    kolega = kolega +5 * 10;
   } else {
    kolega = kolega + d2 * 10;
   }

   if(d3 == 5) {
    count++;
    kolega = kolega + 5 * 100;
   } else {
    kolega = kolega + d3 * 100;
   }

   if(d4 == 5) {
    count++;
    kolega = kolega + 5 * 1000;
   } else {
    kolega = kolega + d4 * 1000;
   }
}