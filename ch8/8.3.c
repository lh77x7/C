// file_eof.c - otwiera plik i wyswietla jego zawartosc
#include <stdio.h>
#include <stdlib.h>     // potrzebujemy funkcji exit()
int main(void){
    int ch;
    FILE * fp;
    char nazwapliku[50];        // potrzebuje nazwe pliku

    printf("Podaj nazwe pliku: "); scanf("%s", nazwapliku);
    fp = fopen(nazwapliku, "r");    // otwiera plik do odczytu
    if(fp == NULL)
    {
        printf("Blad przy probie otwarcia pliku.\n");
        exit(1);
    }
    // getc (fp) pobiera znak z otwartego pliku
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;    
}
