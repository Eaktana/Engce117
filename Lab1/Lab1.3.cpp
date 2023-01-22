#include <stdio.h>

int add( int, int) ;
int operation(int, int, int(*add)(int, int) ) ;

int main() {
    printf("==> %d\n", operation(5, 5, add)) ;
    return 0 ;
}

int add( int x, int y) {
    return (x * y) + 5 ;
}

int operation(int x, int y, int(*add)(int, int) ) {
    return (*add)(x, y) ;
}
