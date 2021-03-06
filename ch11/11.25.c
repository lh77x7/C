// sort_lan.c - pobiera lancuchy i je porzadkuje
#include <stdio.h>
#include <string.h>
#define ROZMIAR 81  // granica dlugosci lancucha, wraz z \0
#define GRAN 20     // maksymalna liczba wierszy
void srtlan(char *lancuchy[], int num); // funkcja sortujaca lancuchy
int main(void){
    char dane[GRAN][ROZMIAR];   // tablica przechowujaca dane wejsciowe
    char *wsklan[GRAN];         // tablica zmiennych wskaznikowych
    int licz = 0;               // licznik danych wejsciowych
    int k;                      // licznyk danych wyjsciowych
    printf("Podaj maksymalnie %d wierszy, a ja je uporzadkuje.\n", GRAN);
    printf("Aby zakonczyc, wcisnij Enter na poczatku wiersza.\n");
    while(licz < GRAN && gets(dane[licz]) != NULL && dane[licz][0] != '\0')
    {
        wsklan[licz] = dane[licz];  // ustaw wskazniki na lancuchy
        licz++;
    }
    srtlan(wsklan, licz);   // maszyna sortujaca lancuchy
    puts("\nOto uporzadkowana lista:\n");
    for(k = 0; k < licz; k++)
        puts(wsklan[k]);    // posortowane wskazniki
    return 0;
}

// funkcja sortujaca wskazniki do lancuchow
void strlan(char *lancuchy[], int num){
    char *temp;
    int dol, szuk;
    for(dol = 0; dol < num - 1; dol++)
        for(szuk = dol + 1; szuk < num; szuk++)
            if(strcmp(lancuchy[dol], lancuchy[szuk]) > 0)
            {
                temp = lancuchy[dol];
                lancuchy[dol] = lancuchy[szuk];
                lancuchy[szuk] = temp;
            }
}