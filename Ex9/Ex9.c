#include <stdio.h>

int main(void){
    float length, width;
    float squrFT;
    float convFac = 0.09290304;
    int gallonNum;

    printf("What is the length of the room in feet?");
    scanf("%f", &length);
    printf("What is the width of the room in feet?");
    scanf("%f", &width);

    squrFT = length*width;
    gallonNum = (int)squrFT/350;
	if((int)squrFT%350)
		gallonNum++;
   
	printf("You will need to purchase %d gallons of\n", gallonNum);
	printf("paint to cover %.3f square feet.\n", squrFT);

    return 0;
}
