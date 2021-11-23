#include <stdio.h>
#define KOREKTA -1
#define MNOZNIK 0.67
int main(void){

    double but, stopa;

    but = 42.0;
    stopa = MNOZNIK * but + KOREKTA;
    printf("Rozmiar buta      Dlugosc buta\n");
    printf("%8.1f %15.2f cm\n", but, stopa);

    return 0;
}