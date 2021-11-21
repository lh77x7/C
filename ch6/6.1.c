#include <stdio.h>
int main(void) {
    long num;
    long suma = 0L;  //przypisanie zmiennej suma wartości początkowej na 0

    int stan;

    printf("Podaj liczbe calkowita do zsumowania. (q konczy): ");
    stan = scanf("%ld", &num);
    while(stan==1) {
        suma = suma + num;
        printf("Podaj nastepna liczbe calkowita do zsumowania. (q konczy): ");
        stan = scanf("%ld", &num);

    }
    printf("Suma podanych liczb wynosi %ld.\n", suma);
    return 0;
}