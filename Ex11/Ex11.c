#include <stdio.h>

int main(void){

    float exRate;
    int euros;

    printf("How many euros are you going to exchange? ");
    scanf("%d", &euros);
    printf("What is the exchange rate? ");
    scanf("%f", &exRate);

    printf("%d euros at an exchange rate of %.2f is %.2f U.S. dollars.\n", euros, exRate, euros*exRate/100);

    return 0;
}
