#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *we;
    int i,ch ;
    int licznik = 0;
    if(argc < 2)
    {
        fprintf(stderr, "Sposob uzycia: %s plik1 plik2 ...\n", argv[0]);
        exit(1);
    }

    for(i = 1; i < argc; i++)
    {
        if((we = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", argv[i]);
            exit(2);
        }
        while((ch = getc(we)) != EOF)
        {
            putchar(ch);
        }
        printf("\n");
        
    }
    
    if(fclose(we) != 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");

    return 0;    
}