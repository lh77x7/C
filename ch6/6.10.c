#include <stdio.h>
#define LICZBA 22
int main(void) {
    int licznik = 1;                    // inicjalizacja

    while(licznik <= LICZBA) {          // test
        printf("Wesolych Swiat!\n");    // czynnosc
        licznik++;
    }
    return 0;
}