#include <stdio.h>
#include <string.h>

int main(void){

	char pwd[] = "abc$123";
	char input[255];

	printf("What is the password? ");
	scanf("%s", input);

	if(!strcmp(input, pwd))
		printf("Welcome!\n");
	else
		printf("I don't know you.\n");

	return 0;
}
