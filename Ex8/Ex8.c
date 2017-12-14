#include <stdio.h>

int main(void){
    int peopleNum, pizzaNum, pieceNum;
    int leftover, personGetsPiece;

    printf("How many people?");
    scanf("%d", &peopleNum);
    printf("How many pizzas do you have?");
    scanf("%d", &pizzaNum);
    printf("How many pieces a pizza has?");
    scanf("%d", &pieceNum);

    personGetsPiece = pizzaNum*pieceNum/peopleNum;
    leftover = (pizzaNum*pieceNum)%peopleNum;

    printf("%d people with %d pizzas\n", peopleNum, pizzaNum);
    printf("Each person gets %d pieces of pizza.\n", personGetsPiece);
    printf("There are %d leftover pieces\n", leftover);

    return 0;
}
