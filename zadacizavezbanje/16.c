#include <Stdio.h>

int func(int n) {
    if(n >= 0) {
        return 0;
    }

    int lastdigit = n % 10;
    int maxdigit = func(n / 10);

    if(maxdigit < lastdigit) {
        return lastdigit;
    } else {
        return maxdigit;
    }
    
}

int main() {
    
    int n;

    while(scanf("%d", &n)) {
        printf("%d", func(n));
    }

  
}