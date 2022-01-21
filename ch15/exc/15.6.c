// rozwiazanie zadania 6 z rodziału 15

#include <stdio.h>
#include <string.h>

// wlaczenie/wylaczenie bitu
#define WLACZ 1
#define WYLACZ 0

// wyrownanie
#define LEWA 0
#define SRODEK 1
#define PRAWA 2

// struktura
struct wl_czcionki {
    unsigned int typ: 8;
    unsigned int rozmiar: 7;
    unsigned int wyr: 3;
    unsigned int wytl: 1;
    unsigned int kursywa: 1;
    unsigned int podkreslenie: 1;
};

void usunEnter();
void wyswietlOpcje();
void poprawnaOdpowiedz(char odp);
void wyborFunkcji(struct wl_czcionki *czcionka, char odp);
void wyswietlanieMenu(struct wl_czcionki *czcionka);
void zmianaCzcionki(struct wl_czcionki *czcionka);
void rozmiarCzcionki(struct wl_czcionki *czcionka);
void zmianaWyrownania(struct wl_czcionki *czcionka);

// main programu
int main(void){
    
    struct wl_czcionki czcionka;

    czcionka.typ = 1;
    czcionka.rozmiar = 12;
    czcionka.wyr = LEWA;
    czcionka.wytl = WYLACZ;
    czcionka.kursywa = WYLACZ;
    czcionka.podkreslenie = WYLACZ;

    wyswietlanieMenu(&czcionka);

    return 0;
}

// usuwanie zbednych znakow
void usunEnter(){
    while(getchar() != '\n') {
        continue;
    }
}

// jakie masz opcje?
void wyswietlOpcje(){
    printf("a) zmiana czcionki  b) zmiana rozmiaru  c) zmiana wyrownania\n");
    printf("d) zmiena przetluszczenia   e) zmiana kursywy\n");
    printf("f) zmiana podkreslenia  k) koniec\n");
}

// jakie są poprawne odpowiedzi
void poprawnaOdpowiedz(char odp){

    while(strchr("abcdefk", odp) == 0){
        printf("Nieprawidlowa odpowiedz. Podaj ponownie litere.\n");
        wyswietlOpcje();
        scanf("%c", &odp);
        usunEnter();
    }
}

// wybor opcji: [abcdef]
void wyborFunkcji(struct wl_czcionki *czcionka, char odp){
    switch (odp)
    {
    case 'a':   zmianaCzcionki(czcionka);   break;

    case 'b':   rozmiarCzcionki(czcionka);  break;

    case 'c':   zmianaWyrownania(czcionka); break;

    case 'd':   czcionka->wytl = ~czcionka->wytl;   break;  // zmiana wytłuszczenia

    case 'e':   czcionka->kursywa = ~czcionka->kursywa;     break;  // zmiana kursywy

    case 'f':   czcionka->podkreslenie = ~czcionka->podkreslenie;   break; // zmiana podkreslenia

    default:    break;

    }
}

void wyswietlanieMenu(struct wl_czcionki *czcionka){

    char wyrownanie[10];
    char odp;

    switch(czcionka->wyr) {
        case SRODEK:    strcpy(wyrownanie, "srodek"); break;
        case LEWA:      strcpy(wyrownanie, "lewa"); break;
        case PRAWA:     strcpy(wyrownanie, "prawa"); break;
    }

    printf("Typ   Rozmiar     Wyrownanie    Wytl.   Kurs.    Podkr.\n");
    printf("%d     %d          %s          %s     %s      %s\n", czcionka->typ, czcionka->rozmiar, wyrownanie, czcionka->wytl? "wl":"wyl",czcionka->kursywa? "wl":"wyl", czcionka->podkreslenie? "wl":"wyl");
    wyswietlOpcje();

    scanf("%c", &odp);
    usunEnter();
    
    
    poprawnaOdpowiedz(odp);
    
    while (odp != 'k')
    {
        wyborFunkcji(czcionka, odp);
        switch (czcionka->wyr) {
            case SRODEK: strcpy(wyrownanie, "srodek"); break;
            case LEWA: strcpy(wyrownanie, "lewa"); break;
            case PRAWA: strcpy(wyrownanie, "prawa"); break;
        }
        printf("Typ   Rozmiar     Wyrownanie    Wytl.   Kurs.    Podkr.\n");
        printf("%d     %d          %s          %s     %s        %s\n", czcionka->typ, czcionka->rozmiar, wyrownanie, czcionka->wytl? "wl":"wyl",czcionka->kursywa? "wl":"wyl", czcionka->podkreslenie? "wl":"wyl");
        wyswietlOpcje();
        scanf("%c", &odp);
        usunEnter();
        poprawnaOdpowiedz(odp);
    }
    
}

// zmien typ czcionki
void zmianaCzcionki(struct wl_czcionki *czcionka){

    int typ;

    printf("Podaj typ czcionki (0 - 255): ");
    scanf("%d", &typ);
    usunEnter();

    while (typ < 0 || typ > 255)
    {
        printf("Nieprawidlowa wartosc (0 - 255), podaj jeszcze raz: ");
        scanf("%d", &typ);
        usunEnter();
    }

    czcionka->typ = typ;
}

// zmien rozmiar
void rozmiarCzcionki(struct wl_czcionki *czcionka){

    int rozmiar;

    printf("Podaj rozmiar czcionki (0 - 127): ");
    scanf("%d", &rozmiar);
    usunEnter();

    while(rozmiar < 0 || rozmiar > 127) {
        printf("Nieprawidlowa wartosc (0 - 127), podaj jeszcze raz: ");
        scanf("%d", &rozmiar);
        usunEnter();
    }

    czcionka->rozmiar = rozmiar;
}

// zmien wyrownanie
void zmianaWyrownania(struct wl_czcionki *czcionka){

    char zmianaWyrownania;

    printf("Wybierz wyrownanie:\n");
    printf("l) lewo s) srodek   p) prawo\n");
    scanf("%c", &zmianaWyrownania);
    usunEnter();

    while(strchr("lsp", zmianaWyrownania) == 0){
        printf("Nieprawidlowa odpowiedz\n");
        printf("l) lewo s) srodek   p) prawo\n");
        scanf("%c", &zmianaWyrownania);
        usunEnter();
    }

    switch (zmianaWyrownania)
    {
    case 'l': czcionka->wyr = LEWA;     break;
    case 's': czcionka->wyr = SRODEK;   break;
    case 'p': czcionka->wyr = PRAWA;    break;
    }
}





