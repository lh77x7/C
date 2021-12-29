// rzutkosc.c - symulacja rzutu koscmi
#include "rzutkosc.h"
#include <stdio.h>
#include <stdlib.h> // potrzebuje funkcji rand()

static int rzucaj(int scianki, int kosci){
    int oczka, i, suma = 0;
    for(i = 0; i < kosci; i++){
        oczka = rand() % scianki + 1;
        suma += oczka;
    }
    return suma;
}

int rzucaj_n_razy(int kosci, int scianki){
    int k;
    int suma = 0;
    if(scianki < 2)
    {
        printf("Wymagane sa co najmniej 2 scianki.\n");
        return -2;
    }
    if(scianki < 1)
    {
        printf("Wymagany co najmniej 1 scianka.\n");
        return -1;
    }
        suma += rzucaj(scianki, kosci);

        return suma;
}