// odwroc.c - wyswietla zawartosc pliku w odwroconej kolejnosci
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'   // znacznik EOF w plikach tekstowych DOS
#define DLAN 50
int main(void){
    char plik[DLAN];
    char ch;
    FILE *wp;
    long licznik, koniec;
    puts("Podaj nazwe pliku: ");
    gets(plik);
    if((wp = fopen(plik, "rb")) == NULL)
    {   // plik binarny tylko do odczytu
        printf("Nie moge otworzyc %s\n", plik);
        exit(1);
    }
    fseek(wp, 0L, SEEK_END); // przejdz do konca pliku
    koniec = ftell(wp);
    for(licznik = 1L; licznik <= koniec; licznik++)
    {
        fseek(wp, -licznik, SEEK_END);  // idź do tylu pliku
        ch = getc(wp);
        // dla DOSu, dziala w Uniksie
        if(ch != CNTL_Z && ch !='\r')
            putchar(ch);
        // dla Macintosha
        /*
        if(ch == '\r')
            putchar('\n');
        else
            putchar(ch);
        */
    }
    putchar('\n');
    fclose(wp);
    return 0;
}