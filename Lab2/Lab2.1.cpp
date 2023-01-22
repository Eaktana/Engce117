#include <stdio.h>
#include <string.h>

int main() {
    char Name[20] = "Eaktana " ;
    char Lastname[20] = "Apinyawiwat" ;
    strcat(Name, Lastname) ;
    printf("Output Full Name : %s", Name) ;

    return 0 ;
}