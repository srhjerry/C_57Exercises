#include <stdio.h>
#include <string.h>

int main(void){

	float amount, tax;
	char state[255];

	printf("What is the order amount? ");
	scanf("%f", &amount);
	printf("What is the state? ");
	scanf("%s", state);

	tax = 0;

	if(!strcmp(state, "WI")){
		printf("The subtotal is $%.2f.\n", amount);
		tax = amount*5.5/100;
		printf("The tax is $%.2f.\n", tax);
	}
	printf("The total is $%.2f.\n", amount+tax);

	return 0;
}
