#include <stdio.h>

float division (int a, int b) {
    if (b == 0){
        printf("Erreur : division par 0\n");
        return -1;
    } else {
        return ((float) a) / ((float) b);
    }
}
