#include <stdio.h>
#define ROZMIAR 10
long sumuj(int tab[], int n);
int main(void){
    int kulki[ROZMIAR] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 30};
    long wynik;
    wynik = sumuj(kulki, ROZMIAR);
    printf("Calkowita liczba kulek wynosi: %ld.\n", wynik);
    printf("Rozmiar tablicy kulki wynosi %d bajtow.\n", sizeof kulki);

    return 0;
}

long sumuj(int tab[], int n) // jak duza jest tablica?
{
    int i;
    long suma = 0;
    for(i = 0; i < n; i++)
        suma += tab[i];
    printf("Rozmiar tablicy tab wynosi %d bajtow.\n", sizeof tab);
    return suma;
}