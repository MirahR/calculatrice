#include <stdio.h>
#include "operations.h"

int main(){

    printf("test de 2 + 3 = %d\n", addition(2, 3));
    printf("test de -2 + 3 = %d\n", addition(-2, 3));
    printf("test de 0 + 0 = %d\n", addition(0, 0));

    printf("test de 2 - 3 = %d\n", soustraction(2, 3));
    printf("test de -2 - 3 = %d\n", soustraction(-2, 3));
    printf("test de 0 - 0 = %d\n", soustraction(0, 0));

    printf("test de 2 * 3 = %d\n", multiplication(2, 3));
    printf("test de -2 * 3 = %d\n", multiplication(-2, 3));
    printf("test de 0 * 0 = %d\n", multiplication(0, 0));

    printf("test de 2 / 3 = %f\n", division(2, 3));
    printf("test de -2 / 3 = %f\n", division(-2, 3));
    printf("test de 0 / 0 = %f\n", division(0, 0));


return 0;

}