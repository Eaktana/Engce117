#include <stdio.h>

void updateString(char *str) {
    str[0] = '.';
}

int main() {
    char myString[100] ;
    printf("Input String : ");
    gets(myString);
    updateString(myString);
    printf("Updated String: %s\n", myString);
    return 0;
}