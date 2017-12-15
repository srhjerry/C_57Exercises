#include <stdio.h>

int main(void){

    //Challenge
    /*float *curPrice, *nextPrice;
    int *curQuan, *nextQuan;
    float sum;
    int cnt = 1;

    
    while(scanf("%f", curPrice)){
        cnt++;
        nextPrice = (float)cnt*sizeof(float); 
        //move curPrice's content into nextPrice
    }*/

    float price[3];
    int quan[3];
    int i;
    float subTotal, Tax;

    for(i=0; i<3; i++){//fixed input
        printf("Enter the price of item %d: ", i+1);
        scanf("%f", (price+i));
        printf("Enter the quantity of item %d: ", i+1);
        scanf("%d", (quan+i));
    }

    subTotal = 0;
    for(i=0; i<3; i++)
        subTotal+=price[i]*quan[i];
    Tax = subTotal*5.5/100;

    printf("Subtotal: $%.2f\n", subTotal);
    printf("Tax: $%.2f\n", Tax);
    printf("Total: $%.2f\n", subTotal+Tax);

    return 0;
}
