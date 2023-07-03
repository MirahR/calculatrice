#include <stdio.h>
#include "operations.h"

int main () {
    int a;
    int b;
    printf("Entrez deux nombres :\n");
    scanf("%d %d", &a, &b);

    int menu;
    printf("Menu :\n\t1) addition\n\t2) soustraction\n\t3) multiplication\n\t4) division\n");
    scanf("%d", &menu);

    if (menu > 4){
        printf("Erreur : veuillez choisir entre les options 1 à 4\n");
        return 1;
    } else if (menu == 1){
        printf("%d + %d = %d\n", a, b, addition(a, b));
    } else if (menu == 2){
        printf("%d - %d = %d\n", a, b, soustraction(a, b));
    } else if (menu == 3){
        printf("%d * %d = %d\n", a, b, multiplication(a, b));
    } else if (menu == 4){
        printf("%d / %d = %f\n", a, b, division(a, b));
    }
    return 0;
}
