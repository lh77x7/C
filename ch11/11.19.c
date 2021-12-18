// wejscie.c - poczatek jakiego programu
#include <stdio.h>
#include <string.h>
#define ROZMIAR 81
#define GRAN 100
#define STOP "koniec"
int main(void){
    char wejscie[GRAN][ROZMIAR];
    int licz = 0;

    printf("Wpisz maksymalnie %d wierszy (wpisz koniec, aby zakonczyc): \n", GRAN);
    while(licz < GRAN && gets(wejscie[licz]) != NULL && strcmp(wejscie[licz], STOP) != 0)
    {
        licz++;
    }
    printf("Podano %d lancuchow\n", licz);
    return 0;
}