/*Од стандарден влез се чита еден природен број n. Меѓу природните
 броеви помали од n, да се најде оној чиј што збир на делителите е најголем. 
 Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.*/

 #include <stdio.h>

 int main() {

    int n;

    scanf("%d", &n);

    int suma, max = 0, i, delitel;
    int broj;

    for(i = 1; i < n; i++) {
        suma = 0;
        for(delitel = 1; delitel <= i/2; delitel++) {
            if(i % delitel == 0) {
                suma += delitel;
            }
        }
        if(max < suma) {
                max = suma;
                broj = i;
            }
    }

    printf("%d", broj);

    return 0;
 }