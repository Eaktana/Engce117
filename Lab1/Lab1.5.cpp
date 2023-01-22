#include <stdio.h>

void newdata(int*) ;

int main() {
	int data = 100 ;
	newdata(&data) ;

	printf("data = %d", data) ;

	return 0 ;
}

void newdata(int *pointer) {
	*pointer = 9999 ;
}