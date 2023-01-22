#include <stdio.h>
#include <string.h>
char *gettext() ;

int main() {
    char *str ;
    int numofmess ;
    printf("How many messages do you want ? : ") ;
    scanf("%d", &numofmess) ;
    getchar() ;

    for(int i = 0 ; i < numofmess ; i++){
        printf("Wors Add %d : ", i + 1) ;
        str = gettext() ;
        printf("Output Text : %s\n\n", str) ;
    }

    return 0 ;
}

char *gettext() {
    char *text = new char[20] ;
    gets(text) ;
    
    return text ;
}