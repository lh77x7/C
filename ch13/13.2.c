// reduktor.c - zmiejsza rozmiar Twoich plikow o dwie trzecie
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // dla strcpy(), strcat()
int main(int argc, char *argv[])
{
    FILE *we, *wy;  // deklaracja dwoch wskaznikow
    int ch;
    char nazwa[40]; // miejsce na nazwe pliku wyjsciowego
    int licznik = 0;
    if(argc < 2)    // sprawdza obecnosc argumentow
    {
        fprintf(stderr, "Sposob uzycia: %s nazwa_pliku\n", argv[0]);
        exit(1);
    }
    if((we = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", argv[0]);
        exit(2);
    }
    strcpy(nazwa, argv[1]); // kopiuje nazwe pliku do tablicy
    strcat(nazwa, ".red");  // dodaje .red do nazwy
    if((wy = fopen(nazwa, "w")) == NULL)
    {   // otwiera plik do zapisu
        fprintf(stderr, "Nie mozna otworzyc pliku wyjsciowego.\n");
        exit(3);
    }
    while((ch = getc(we)) != EOF)
        if(licznik++ %3 == 0)
            putc(ch, wy);   // wyswietla co trzeci znak
    if(fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr, "Blad przy zamykaniu pliku\n");
    return 0;
}