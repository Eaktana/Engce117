#include <stdio.h>
#include <string.h>
#include <math.h>

int showseries(int);
int result(int);
void comma_showsum(int);

int main() {
    int numuser,result_num;
    printf("User Input : ");
    scanf("%d", &numuser);
    showseries(numuser);
    result_num = result(numuser);
    comma_showsum(result_num) ;
    return 0;
}

int showseries(int numuser1) {
    printf("----\n");
    int res;

    if (numuser1 == 0) {
        printf("Series = 0 ");
        return 0;
    }

    printf("Series = 9 ");

    for (int i = 2; i <= numuser1; i++) {
        res = pow(10, i) - 1;
        printf("+ %lld ", res);
    }
}

int result(int numuser2) {
    int res;
    int sum = 0;
    for (int i = 1; i <= numuser2; i++) {
        res = pow(10, i) - 1;
        sum = sum + res;
    }
    return sum ;
}

void comma_showsum(int num) {
    char str[100], str_result[100];
    
    sprintf(str, "%lld", num);
    int len = strlen(str);
    
    int j = 0;
    for (int i = 0; i < len; i++) {
        str_result[j++] = str[i];
        if (i < len - 1 && (len - i - 1) % 3 == 0) {
            str_result[j++] = ',';
        }
    }
    str_result[j] = '\0';
    printf("\nSum = %s ", str_result);
}

 