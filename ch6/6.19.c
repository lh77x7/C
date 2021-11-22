// wyniki.c - wykorzystuje petle do przetwarzania tablicy
#include <stdio.h>
#define ROZMIAR 10
#define PAR 72
int main(void){

    int index, wynik[ROZMIAR];
    int suma = 0;
    float srednia;

    printf("Podaj %d wynikow gry w golfa: \n", ROZMIAR);
    for(index = 0; index < ROZMIAR; index++)
        scanf("%d", &wynik[index]);         // wczytanie 10 wyników
    printf("Odczytane wyniki to:\n");
    for(index = 0; index < ROZMIAR; index++)
        printf("%5d", wynik[index]);        // wyswietlanie wpisanych danych
    printf("\n");

    for(index = 0; index < ROZMIAR; index++) {
        suma += wynik[index];               // sumowanie wyników
    }
    srednia = (float)suma / ROZMIAR;        // liczenie średniej
    printf("Suma wynikow = %d, srednia = %.2f\n", suma, srednia);
    printf("Oznacza to handicap w wysokosci %.0f.\n", srednia - PAR);
    return 0;
}