// test.c - test funkcji skracajacej lancuchy
#include <stdio.h>
#include <string.h> // zawiera prototypy funkcji łańcuchowej
void skroc(char *, unsigned int);
int main(void){
    
    char tekst[] = "Wyjasnienie powinno byc tak proste jak to mozliwe, ale nie prostsze.";

    puts(tekst);
    skroc(tekst, 50);
    puts(tekst);
        puts("Spojrzmy na reszte lancucha. ");
        puts(tekst+51); 
    return 0;
}

void skroc(char *lancuch, unsigned int rozmiar){
    if(strlen(lancuch) > rozmiar)
        *(lancuch + rozmiar) = '\0';
}