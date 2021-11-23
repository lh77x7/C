#include <stdio.h>
#define KOREKTA -1
#define MNOZNIK 0.67
int main(void){

    double but, stopa;

    printf("Rozmiar buta     Dlugosc stopy\n");
    but = 24;
    while (but<45)
    {
        stopa = MNOZNIK * but + KOREKTA;
        printf("%8.1f %15.2f cm\n", but, stopa);
        but = but + 1;
    }
    printf("\nJesli but pasuje, nos go.\n");

    return 0;
}