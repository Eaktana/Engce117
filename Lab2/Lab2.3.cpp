#include <stdio.h>
#include <string.h>

void modifyString(char str[]) {
    str[0] = 'H';
}

int main() {
    char greeting[100] = "hello world";
    printf("Before modification: %s\n", greeting);
    modifyString(greeting);
    printf("After modification: %s\n", greeting);
    return 0;
}