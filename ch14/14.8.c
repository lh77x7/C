// imienaz1.c -- wykorzystuje wskazniki do struktury
#include <stdio.h>
#include <string.h>
struct daneos {
    char imie[20];
    char nazw[20];
    int litery;
};
void pobierz(struct daneos *);
void oblicz(struct daneos *);
void pokaz(const struct daneos *);

int main(void){
    struct daneos osoba;
    pobierz(&osoba);
    oblicz(&osoba);
    pokaz(&osoba);
    return 0;
}

void pobierz(struct daneos *wsk)
{
    printf("Podaj swoje imie.\n");
    gets(wsk->imie);
    printf("Podaj swoje nazwisko.\n");
    gets(wsk->nazw);
}

void oblicz(struct daneos *wsk)
{
    wsk->litery = strlen(wsk->imie) + strlen(wsk->nazw);
}

void pokaz(const struct daneos *wsk)
{
    printf("%s %s, Twoje imie i nazwisko sklada sie z %d liter.\n",
    wsk->imie, wsk->nazw, wsk->litery);
}