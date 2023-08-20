#include <stdio.h>

int main() {
    int a[100][100], b[100][100];
    int n, m; //golemina za a

    int o, p; //golemina za b

    int i, j, zbir1 = 0, zbir2 = 0;

    printf("Vnesi ja prvata matrica\n");
    scanf("%d%d", &n, &m);

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //kalkuliranje na zbirot

    //prv red i posleden red
    for(j = 0; j < m ; j++) {
        zbir1 += a[0][j];
    }

    for(j = 0; j < m ; j++) {
        zbir1 += a[n - 1][j];
    }

    //prva kolona i vtora kolona
    for(i = 0; i < n; i++) {
        zbir1+= a[i][0];
    }

    for(i = 0; i < n; i++) {
        zbir1 += a[i][m - 1];
    }

//////////////////////////////////////////////////


printf("Vnesi ja vtorata matrica\n");
    scanf("%d%d", &o, &p);

    for(i = 0; i < o; i++) {
        for(j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    //kalkuliranje na zbirot

    //prv red i posleden red
    for(j = 0; j < p ; j++) {
        zbir2 += b[0][j];
    }

    for(j = 0; j < p ; j++) {
        zbir2 += b[o - 1][j];
    }

    //prva kolona i vtora kolona
    for(i = 0; i < o; i++) {
        zbir2+= b[i][0];
    }

    for(i = 0; i < o; i++) {
        zbir2 += b[i][p - 1];
    }


////////////////////////////////////////////

if(zbir1 > zbir2) {
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
} else {
    for(i = 0; i < o; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

}