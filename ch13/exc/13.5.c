// 13.5.c - dopisuje plik do pliku
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR_BUF 1024
#define DLAN 50
char temp[ROZMIAR_BUF];
void dopisz(FILE *zrodlo, FILE *cel);

int main(int argc, char *argv[]){
    FILE *pd, *pz;
    int pliki = 0;

    if(argc < 3)
    {
        fprintf(stderr,"Sposob uzycia: %s plik_wejsciowy plik docelowy\n", argv[0]);
        exit(1);
    } else {
                // argv[1] - plik docelowy
                if((pd = fopen(argv[2], "a")) == NULL)
                {
                    fprintf(stderr, "Blad otwarcia pliku %s\n", argv[1]);
                    exit(2);
                }
                if(setvbuf(pd, NULL, _IOFBF, ROZMIAR_BUF) != 0)
                {
                    fputs("Nie mozna otworzyc bufora wyjsciowego\n", stderr);
                    exit(3);
                }
        
                    if(strcmp(argv[1], argv[2]) == 0)
                        fputs("Nie mozna dopisac pliku do siebie\n", stderr);
                    else if ((pz = fopen(argv[1], "r")) == NULL)
                        fprintf(stderr, "Blad otwarcia pliku %s\n", argv[1]);
                    else 
                    {
                        if(setvbuf(pz, NULL, _IOFBF, ROZMIAR_BUF) != 0)
                        {
                            fputs("Nie mozna otworzyc bufora wejsciowego\n", stderr);
                            exit(4);
                        }
                        dopisz(pz, pd);
                        if(ferror(pz) != 0)
                            fprintf(stderr, "Blad odczytu pliku %s\n", argv[1]);
                        if(ferror(pd) != 0)
                            fprintf(stderr, "Blad zapisu pliku %s\n", argv[2]);
                        fclose(pz);
                        fprintf(pd, "Nie mozna wyswietlic");
                        pliki++;
                        printf("Plik %s dopisany.\n", argv[1]);
            
                    }
                printf("Koniec. Dopisano %d plikow.\n", pliki);
                fclose(pd);
            }
    return 0;
}

void dopisz(FILE *zrodlo, FILE *cel){
    size_t bajty;
    extern char temp[]; // korzysta z tablicy zewnetrznej temp
    while((bajty = fread(temp, sizeof(char), ROZMIAR_BUF, zrodlo)) > 0)
        fwrite(temp, sizeof(char), bajty, cel);
}