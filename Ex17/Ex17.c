#include <stdio.h>
#include <string.h>

int main(void){

	float consumedAlcohol, lbsWeight;
	int hrsSinceDrink;
	char gender[10];
	float distributoinRatio;
	float BAC;

	printf("How many did you drink? ");
	scanf("%f", &consumedAlcohol);
	printf("How much are your weight? ");
	scanf("%f", &lbsWeight);
	printf("How long since your last drank? ");
	scanf("%d", &hrsSinceDrink);
	printf("Are you man or woman? ");
	scanf("%s", gender);
	
	if(!strcmp(gender,"man"))
		distributoinRatio = 0.73;
	else
		distributoinRatio = 0.66;
	BAC = (consumedAlcohol*5.14)/(lbsWeight*distributoinRatio)
		  -0.015*hrsSinceDrink;
	printf("Your BAC is %.2f\n", BAC);
	if(BAC<0.08)
		printf("It is legal for you to drive.\n");
	else
		printf("It is not legal for you to drive.\n");

	return 0;
}
