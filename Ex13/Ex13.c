#include <stdio.h>

int main(void){

    int principal, yearNum, timePerYear;
    float interestRate;

    printf("What is the pricipal amount? ");
    scanf("%d", &principal);
    printf("What is the rate? ");
    scanf("%f", &interestRate);
    printf("What is the number of years? ");
    scanf("%d", &yearNum);
    printf("What is the number of times the interest is compounded per year? ");
    scanf("%d", &timePerYear);

    int i;
    float interestCnt;

    i=1;
    interestCnt = 1;

    do{
        interestCnt *= (1 + interestRate/timePerYear/100);
    }while(i++<timePerYear*yearNum);

    printf("$%d invested at %.1f for %d years compounded %d times per year is $%.2f", principal, interestRate, yearNum, timePerYear, principal*interestCnt);

    return 0;
}
