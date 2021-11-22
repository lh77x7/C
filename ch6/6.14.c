//zenon.c - suma szeregow
#include <stdio.h>

int main(void){
    int licznik;
    double czas, x;
    int granica;

    printf("Ile wyrazow chcesz zsumowac?\n");
    scanf("%d", &granica);

    for(czas = 0, x = 1, licznik = 1; licznik <= granica; licznik++, x *= 2.0){
        czas += 1.0/x;
        printf("Czas = %f gdy licznik = %d.\n", czas, licznik);
    }
    
    return 0;
}