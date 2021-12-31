#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *we, *wy; // deklaracja 2 wskaznikow plikowych
    int ch;
    if(argc < 3)
    {
        fprintf(stderr, "Sposob uzycia: %s plik_wej plik_wyj.\n", argv[0]);
        exit(1);
    }
    if((we = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", argv[1]);
        exit(2);
    }
    if((wy = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc pliku \"%s\".\n", argv[2]);
        exit(3);
    }
    while((ch = getc(we)) != EOF)
        putc(ch, wy);
    if(fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");

    return 0;    
}