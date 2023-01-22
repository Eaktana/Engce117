#include <stdio.h>

void Gettext(char **) ;

int main() {
    char *str ;
    Gettext(&str) ;
    printf("Output Text : %s", str) ;
    return 0 ;
}

void Gettext(char **text) {
    printf("Add Text : ") ;
    *text = new char[20] ;
    gets(*text) ;
}