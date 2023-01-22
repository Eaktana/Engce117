#include <stdio.h>

int main() {
    int row, col, i, j ;
    printf("How many rows, cols? : ") ;
    scanf("%d %d", &row, &col) ;

    int *a ;
    a = new int[row * col] ;

    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            printf("a[%d][%d]: ", i, j) ;
            scanf("%d", &a[ i * col + j ]) ;
        }
    }

    for(int k = 0 ; k < row * col ; k++) {
        printf("%d ", a[k]) ;
        if (( k + 1 ) % col == 0) {
			printf("\n") ;
		}
    }
    
    return 0 ;
}