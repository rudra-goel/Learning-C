#include<stdio.h>

float newFunction(float initialVal);


int main(){
    printf("I really like your ice. How much did you get it for? ");

    float price;

    scanf("%f", &price);

    float newPrice = newFunction(price);

    printf("%cCool, now with added tax that is >> $%f", 0x0A, newPrice);
    printf("%cAlso the memory address of where the new price is stored is at: %p", 0x0A,&newPrice);
}

float newFunction(float initialVal){
    float newVal = (initialVal * .08) + initialVal;

    return newVal;

}


