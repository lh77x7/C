// 11.10.c - rozwiazanie zadania 10 z rodzialu 11
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LICZBALAN 10
#define ROZMIAR 100

void lista(char *wsk[], int);
void ASCII(char *wsk[], int);
void dlugosc(char *wsk[], int);

int main(void){

    char tab[LICZBALAN][ROZMIAR];
    char *wsk[LICZBALAN];
    int licz = 0, wybor;

    puts("Podaj maksymalnie 10 lancuchow (Enter na poczatku - koniec)");
    printf("Podaj %d lancuch\n", licz + 1);
    while((licz < LICZBALAN) && (gets(tab[licz]) != NULL) && (tab[licz][0] != '\0'))
    {
        wsk[licz] = tab[licz];
        licz++;
        if(licz != 10)
        printf("Podaj %d lancuch\n", licz + 1);
    }

    puts("Wybierz od 1 do 4.\n");
    puts("1 - lista, 2 - ASCII, 3 - dlugosc, 4 - koniec\n");
    while(scanf("%d", &wybor))
    {
        switch (wybor)
        {
        case 1:
            lista(wsk, licz);
            puts("\n1 - lista, 2 - ASCII, 3 - dlugosc, 4 - koniec\n");
            break;
        case 2: 
            ASCII(wsk, licz);
            puts("\n1 - lista, 2 - ASCII, 3 - dlugosc, 4 - koniec\n");
            break;
        case 3:
            dlugosc(wsk, licz);
            puts("\n1 - lista, 2 - ASCII, 3 - dlugosc, 4 - koniec\n");
            break;
        case 4:
            exit(1);
        default:
            puts("\nWybierz od 1 do 4.\n");
            puts("1 - lista, 2 - ASCII, 3 - dlugosc, 4 - koniec\n");
        }
    }

    return 0;
}

void lista(char *wsk[], int licz){
    int i;

    // wyswietlanie i przejscie po tablicy wskaznikow
    for(i = 0; i < licz; i++)
    {
        printf("%s\n", *wsk);
        wsk++;
    }
}

void ASCII(char *wsk[], int licz){
    int i,j, k = 0;
    char *temp[LICZBALAN];
    char *y[LICZBALAN];

    // przypisanie
    for(i = 0; i < licz; i++){
        y[i] = wsk[i];
    }

    // sortowanie
    for(i = 0; i < licz; i++)
    {
        k = 0;
        for(j = i + 1;  j < licz - 1; j++)
        {
            for(k = 0; k < licz; k++)
            {
                if(y[i][k] > y[j][k])
                {
                    temp[i] = y[i];
                    y[i] = y[j];
                    y[j] = temp[i];
                }
            }
        }
    }

    // wyswietlanie
    for(i = 0; i < licz; i++){
        printf("%s\n", y[i]);
    }
}

void dlugosc(char *wsk[], int licz){
    char *y[LICZBALAN];
    char *temp[LICZBALAN];
    int i,j;

    // przypisanie
    for(i = 0; i < licz; i++){
        y[i] = wsk[i];
    }

    // sortowanie 
    for(i = 0; i < licz; i++)
    {
        for(j = i + 1; j < licz; j++)
        {
            if(strlen(y[i]) > strlen(y[j]))
            {
                temp[i] = y[i];
                y[i] = y[j];
                y[j] = temp[i];
            }
        }
    }

    // wyswietlanie
    for(i = 0; i < licz; i++){
        printf("%s\n", y[i]);
    }
}