#include <stdio.h>

int main(void){
    float length, width;
    float squrFT;
    float convFac = 0.09290304;

    printf("What is the length of the room in feet?");
    scanf("%f", &length);
    printf("What is the width of the room in feet?");
    scanf("%f", &width);

    squrFT = length*width;

    printf("You entered dimensions of %f feet by %f feet.\n", length, width);
    printf("The area is\n");
    printf("%.3f square feet\n", squrFT);
    printf("%.3f square meters", squrFT*convFac);

    return 0;
}
