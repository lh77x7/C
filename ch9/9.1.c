/* naglowek1.c */
#include <stdio.h>
#define NAZWA "MEGATHINK, INC."
#define ADRES "10 Megabuck Plaza"
#define MIEJSCOWOSC "Megapolis, CA 94904"
#define GRANICA 65
void gwiazdki();    // prototyp funkcji
int main(void){
    gwiazdki();
    printf("%s\n", NAZWA);
    printf("%s\n", ADRES);
    printf("%s\n", MIEJSCOWOSC);
    gwiazdki();
    return 0;
}

void gwiazdki(){    // definicja funkcji
    int licznik;
    for(licznik = 1; licznik <= GRANICA; licznik++)
        putchar('*');
    putchar('\n');
}