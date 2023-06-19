#include<stdio.h>

int main(){
    int x = 25;
    int y = 27;
    float z = 42.15f;

    printf("x + y = %d", (x+y));
    printf("\nx - y = %d", (x-y));
    printf("\nx * y = %d", (x*y));
    double res = (double)x/y;
    printf("\nx / y = %f", res);
}