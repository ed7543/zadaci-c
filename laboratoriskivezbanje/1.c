#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    double a[100];
    for(i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    double sum = 0, avg;
    for(i = 0; i < n; i++) {
        sum += a[i];
    }

    avg = sum/n;

    int closestIndex = 0;
    double min = fabs(avg - a[0]);

    for(i = 0; i < n; i++) {
        double difference = fabs(avg - a[i]);
        if(difference < min) {
            min = difference;
            closestIndex = i;
        }
    }

    printf("%.2f", a[closestIndex]);

    return 0;
}