// pszenica.c - wzrost wykładniczy
#include <stdio.h>
#define POLA 64             // liczba pól na szachownicy
#define PLON 9E34           // roczna produkcja pszenicy w USA (w ziarnkach)
int main(void){

    double bierzace, suma;
    int licznik = 1;

    printf("pole   dodane ziarna   suma ziaren   ");
    printf("czesc rocznej\n");
    printf("produkcji w USa\n");
    suma = bierzace = 1.0;          // zaczynamy od 1 ziarna
    printf("%3d %15.2e %14.2e %14.2e\n", licznik, bierzace, suma, suma/PLON);
    while (licznik<POLA)
    {
        licznik ++;
        bierzace = 2.0 * bierzace; // podwojenie ziaren na każdym polu
        suma = suma + bierzace;
        printf("%3d %15.2e %14.2e %14.2e\n", licznik, bierzace, suma, suma/PLON); 
    }
    
    return 0;
}