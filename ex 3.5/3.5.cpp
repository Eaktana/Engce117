#include <stdio.h>

int main() {
    int n, i, j, k, count;
    int a[100];

    printf("Input number of element to be store in array : ");
    scanf("%d", &n);
    printf("-----\n");

    for (i = 0; i < n; i++) {
        printf("Element[%d] : ", i + 1, n);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }

    printf("-----\n");
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                a[j] = 999999999;
            }
        }
        if (count > 0 && a[i] != 999999999) {
            printf("%d -> %d\n", a[i], count);
        }
    }
      
    return 0;
}