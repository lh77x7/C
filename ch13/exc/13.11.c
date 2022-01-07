// znajdzlancuch.c - znajduje wiersze z poszukiwanym lancuchem w pliku
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROZMIAR 100

int main(int argc, char *argv[]){
    FILE *we;
    char tablica[ROZMIAR];
    char ch, wynik;
    int licznik = 0;
    if(argc < 3){
        printf("Sposob uzycia: %s plik lancuch", argv[0]);
        exit(1);
    }
    
    if((we = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Blad otwarcia pliku.\n");

    }
    // przeszukuj wczytany plik, wykorzystaj funkcje strstr()
    while((ch = getc(we)) != EOF){
        
    }
    

    return 0;
}