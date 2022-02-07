// 17.7.c -- rozwiazanie zadania 7 z rodzialu 17 (kompiluj z drzewo.h)

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "drzewo.h"

void wyswieltMenu(void);
int wybierzOpcje(void);
void wyswietlPoliczoneSlowa(Pozycja pozycja);
char * zamienNaMale(char * string);
char * get(char * string, int n);

int main(int argc, char *argv[]){
    if(argc != 2)
        fprintf(stderr, "Uzycie %s nazwa_pliku\n", argv[0]);
        exit(1);

    FILE * fp = fopen(argv[1], "r");
    if(fp == NULL){
        fprintf(stderr, "Nie mozna otworzyc pliku '%s'.\n", argv[1]);
        exit(1);
    }
    
    char temp[WORD_SIZE];
    Drzewo words;
    Drzewo *ptree = InicjujDrzewo(&words);
    while(fscanf(fp, "%s", temp) == 1){
        zamienNaMale(temp);
        if(!DodajSlowo(temp, ptree)) {
            fprintf(stderr, "Nie moglem dodac slowa do drzewa.\n");
            exit(1);
        }
    }

    int ch;
    char word[WORD_SIZE];
    while((ch = wybierzOpcje()) != 'q'){
        if(ch == 'a'){
            DolaczDoWszystkich(ptree, wyswietlPoliczoneSlowa);
        } else if (ch == 'b') {
            printf("Wpisz slowo do odszukania: ");
            get(word, WORD_SIZE);
            DolaczDoWezla(word, ptree, wyswietlPoliczoneSlowa);
        }
        puts("");
    }
    puts("Czesc!\n");
}

void wyswietlMenu(void) {
	puts("Opcje:");
	puts("a) Lista wszystkich slow");
	puts("b) Szukaj slowo");
	puts("q) Wyjdz");
	printf("Wybierz opcje: ");
}

int wybierzOpcje(void) {
	wyswietlMenu();
	int opt;
	while ((opt = getchar()) != 'a' && opt != 'b' && opt != 'q') {
		puts("Nie ma takiej opcji. Sprobuj ponownie.");
		printf("Wybierz opcje: ");
		while (getchar() != '\n')
			continue;
	}
	while (getchar() != '\n')
		continue;
	return opt;
}

void wyswietlPoliczoneSlowa(Pozycja pozycja) {
	printf("%s: %d\n", pozycja.slowo, pozycja.licznik);
}

char * zamienNaMale(char * string) {
	char * retval = string;
	for (; *string != '\0'; string++) {
		*string = tolower(*string);
	}
	return retval;
}

char * get(char * string, int n) {
	
	// wrapper dla fgets - czytaj z wejscia stdin i zamien
	// pierwsza wczytywana linie na znak zero - null character

	char * retval = fgets(string, n, stdin);

	for (; *string != '\0'; string++) {
		if (*string == '\n') {
			*string = '\0';
			break;
		}
	}
	return retval;
}