//problem.c - niewlasciwe uzycie
#include <stdio.h>
int main(void) {
    long num;
    long suma = 0L;
    int stan;

    printf("Podaj liczbe calkowita do zsumowania. ");
    printf("Wpisz q, aby zakonczyc program.\n");
    stan = scanf("%ld", &num);
    while(stan=1) {
        suma = suma + num;
        printf("Podaj nastepna liczbe calkowita do zsumowania. ");
        printf("Wpisz q, aby zakonczyc program.\n");
        stan = scanf("%ld", &num);
    }
    printf("Suma podanych liczb wynosi: %ld\n", suma);
    return 0;
}