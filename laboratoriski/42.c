#include <stdio.h>

int main() {
   
   int a, b, c, d, e, i;
   int sum = 0;
   float avg;
   int count = 0;
   int sum2 = 0;

   scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

   for(i = a; i <= b; i+=c) {
    if((i*i) % d == 0) {
        sum += i;
    }

    if((i % 10 == e && (i / 10) % 10 == e) || (i % 10 == e || (i / 10) % 10 == e)) {
        count++;
        sum2 +=i;
    }
   }

   avg = (float)sum2/count;
   printf("zbir = %d\n", sum);
   printf("prosek = %.2f", avg);

   return 0;
}