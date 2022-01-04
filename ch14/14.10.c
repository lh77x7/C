// imiona3.c - wskazniki i malloc()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct daneos{
    char *imie; // uzycie wskaznika
    char *nazwisko;
    int litery;
};
void pobierz(struct daneos *); // alokuje pamiec
void oblicz(struct daneos *);
void pokaz(const struct daneos *);
void wyczysc(struct daneos *);

int main(void){
    struct daneos osoba;
    pobierz(&osoba);
    oblicz(&osoba);
    pokaz(&osoba);
    wyczysc(&osoba);

    return 0;
}

void pobierz(struct daneos *wsk){
    char temp[81];
    printf("Podaj swoje imie.\n");
    gets(temp);
    // alokuje pamiec dla lancucha
    wsk->imie = (char *)malloc(strlen(temp) + 1);
    // kopiuj lancuch do zaalokowanej pamieci
    strcpy(wsk->imie, temp);
    printf("Podaj swoje nazwisko.\n");
    gets(temp);
    wsk->nazwisko = (char *)malloc(strlen(temp)+1);
    strcpy(wsk->nazwisko, temp);
}

void oblicz(struct daneos *wsk){
    wsk->litery = strlen(wsk->imie) + strlen(wsk->nazwisko);
}

void pokaz(const struct daneos *wsk){
    printf("%s %s, Twoje imie i nazwisko sklada sie z %d liter.\n", wsk->imie, wsk->nazwisko, wsk->litery);
}

void wyczysc(struct daneos *wsk){
    free(wsk->imie);
    free(wsk->nazwisko);
}