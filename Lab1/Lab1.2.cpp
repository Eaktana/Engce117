#include <stdio.h>

int main() {
    int g[3][4] = {
        {10, 20, 30, 40},
        {11, 21, 31, 41},
        {12, 22, 32, 42}};

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 4; b++)
        {
            printf("%d ", g[a][b]);
        }
        printf("\n");
    };

    printf("--------------\n");

    int(*j)[4] = g;

    j[1][2] = 99;

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 4; b++)
        {
            printf("%d ", g[a][b]);
        }
        printf("\n");
    };

    return 0;
}