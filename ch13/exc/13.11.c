// znajdzlancuch.c - znajduje wiersze z poszukiwanym lancuchem w pliku
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROZMIAR 256
const char *errmesg[] = {"Uzycie: %s lancuch plik\n", 
                        "Nie moge otworzyc pliku %s\n"};

int main(int argc, char *argv[]){
    
    FILE *we;
    char wiersz[ROZMIAR];

    if(argc != 3){
        fprintf(stderr, errmesg[0], argv[0]);
        exit(1);
    }
    
    if((we = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, errmesg[1], argv[2]);
        exit(1);
    }
    // przeszukuj wczytany plik, wykorzystaj funkcje strstr()
    while(fgets(wiersz, ROZMIAR, we) != NULL)
    {
        if(strstr(wiersz, argv[1]) != NULL)
            fputs(wiersz, stdout);
    }

    return 0;
}