#include <stdio.h>
    
int main(void){

    int yearNum;
    float principal, interestRate;
    float totalValue;

    printf("Enter the principal: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &interestRate);
    printf("Enter the number of years: ");
    scanf("%d", &yearNum);

    totalValue = principal*(1+(interestRate*yearNum)/100);

    printf("After %d years at %.2f%%, the investment will be worth $%.0f.\n"
    , yearNum, interestRate, totalValue);
    //figure out how to display "%" in printf mode.
    //complete: %%

    return 0;
}
