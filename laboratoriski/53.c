#include <stdio.h>

int main() {
    
    int hours, minutes, seconds;

    int ih;

    scanf("%d%d%d", &hours, &minutes, &seconds);

    if(hours > 12) {
        ih = hours - 12;
    } else if (hours == 0) {
        ih = 12;
    } else {
        ih = hours;
    }


    if(hours >= 0 && hours <= 12) {
        printf("%02d:%02d:%02dAM\n", ih, minutes, seconds);
    } else{
        printf("%02d:%02d:%02dPM\n", ih, minutes, seconds);
    }

    return 0;

}