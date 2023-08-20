#include <stdio.h>

int check(int *a, int i, int n) {

    if(i >= n) {
        return 1;
    } //ako se ispolnat site uslovi i koa kje stigne kako dolzinata na a[] da vrati 1

    //return 1 mora da e pred return 0 inaku nema nikogas da se ispolni

    int sum = 0;

    for(int j = i + 1; j < n; j++) {
        sum += a[j];
    }

    if(a[i] == sum) {
        return check(a, i + 1, n);
    } else {
        return 0;
    }
    
}

int main() {
    int a[100], i, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if(check(a, 0, n) == 1) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;

}