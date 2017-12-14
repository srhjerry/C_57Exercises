#include <stdio.h>
#include <string.h>

int main(void){

    char str[50];

    printf("What's the input string?'");
    fgets(str, 50, stdin);
    while(strlen(str)==1){
        printf("The string cannot be empty! Enter another string please:");
        fgets(str, 50, stdin);
    }
    str[strlen(str)-1] = '\0';
    printf("%s has %d characters.\n", str, strlen(str));


    return 0;
}
