/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен 
 број на бројот 356). Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен 
 број помал од n кој што е „интересен“. Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).*/

 #include <stdio.h>

 int main() {

    int n, temp;

    scanf("%d", &n);

    if(n < 10) {
        printf("Brojot ne e validen");
    } else {
        for(int i = n - 1; i >= 9; i--) {
            int reverse = 0, digits = 0;
            temp = i;
            while(temp != 0) {
                reverse = reverse * 10 + temp%10;
                temp = temp/10;
                digits++; //da gi broi cifrite
            }
            

            if(reverse % digits == 0) {
                printf("%d", i);
                break;
            }
        }
    }

    return 0;
 }