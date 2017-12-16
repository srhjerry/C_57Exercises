#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

	int age;

    printf("What is your age? ");
    scanf("%d", &age);

	char *output;
	output = malloc(strlen((age<18)?("You are not old enough to legally drive.\n"):
		("You are old enough to legally drive.\n"))*sizeof(char));
	strcpy(output, (age<18)?("You are not old enough to legally drive.\n"):
		("You are old enough to legally drive.\n"));

	printf("%s", output);
	free(output);

	return 0;
}
