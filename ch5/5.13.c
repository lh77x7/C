// dodaj.c - cztery typy instrukcji
#include <stdio.h>
int main(void){

    int licznik, suma;   // instrukcja deklaracji

    licznik = 0;        // inst. przypisania
    suma = 0;
    while (licznik++ < 20)  // instrukcja
    {       
        suma = suma + licznik;  
        printf("suma = %d\n", suma);
    }

    return 0;
}