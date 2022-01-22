// rozwiazanie zadania 7 z rodziały 15

#include <stdio.h>
#include <string.h>
#define TYP_MASKA 0xFF
#define ROZMIAR_MASKA 0x7F00
#define LEWA 0x0000
#define SRODEK 0x8000
#define PRAWA 0x10000
#define WYR_MASKA 0x18000
#define WYTLUSZCZENIE 0x20000
#define KURSYWA 0x40000
#define PODKRESLENIE 0x80000
#define STYL_MASKA 0xE0000

typedef unsigned int czcionka;

void wyswietl(czcionka *c);
void zmianaCzcionki(czcionka *c);
void menu();
void poprawnaOdpowiedz(char odp);
void usunEnter();
void rozmiarCzcionki(czcionka *c);
void zmianaWyrownania(czcionka *c);
void wyborFunkcji(czcionka *c);

// main programu
int main(void){

    czcionka przyklad = 1 | 12 << 8 | LEWA;

    wyswietl(&przyklad);

    return 0;
}

// usuwanie zbednych znakow
void usunEnter(){
    while(getchar() != '\n') {
        continue;
    }
}

// jakie masz opcje?
void menu(){
    printf("a) zmiana czcionki  b) zmiana rozmiaru  c) zmiana wyrownania\n");
    printf("d) zmiena przetluszczenia   e) zmiana kursywy\n");
    printf("f) zmiana podkreslenia  k) koniec\n");
}

// jakie są poprawne odpowiedzi
void poprawnaOdpowiedz(char odp){

    while(strchr("abcdefk", odp) == 0){
        printf("Nieprawidlowa odpowiedz. Podaj ponownie litere.\n");
        menu();
        scanf("%c", &odp);
        usunEnter();
    }
}

// wybor opcji: [abcdef]
void wyborFunkcji(czcionka *c){

    char odp;
    scanf("%c", &odp);

    switch (odp)
    {
    case 'a':   zmianaCzcionki(c);   break;

    case 'b':   rozmiarCzcionki(c);  break;

    case 'c':   zmianaWyrownania(c); break;

    case 'd':   *c ^= (STYL_MASKA & WYTLUSZCZENIE);   break;  // zmiana wytłuszczenia

    case 'e':   *c ^= (STYL_MASKA & KURSYWA);     break;  // zmiana kursywy

    case 'f':   *c ^= (STYL_MASKA & PODKRESLENIE);   break; // zmiana podkreslenia

    default:    break;

    }

    if(odp != 'k')
        wyswietl(c);
}

void wyswietl(czcionka *c){

    printf("Typ   Rozmiar     Wyrownanie    Wytl.   Kurs.    Podkr.\n");
    printf("%d %6d ", TYP_MASKA & *c, (ROZMIAR_MASKA & *c)>>8);

    switch (WYR_MASKA & *c) {
        case LEWA:  printf("%13s", "lewo"); break;
        case SRODEK:   printf("%13s", "srodek"); break;
        case PRAWA: printf("%13s", "prawo"); break;
        default: break;
    }
    
    printf("%13s %7s %8s\n", (*c&WYTLUSZCZENIE) == WYTLUSZCZENIE?"wl":"wyl", (*c&KURSYWA) == KURSYWA?"wl":"wyl", (*c&PODKRESLENIE) == PODKRESLENIE?"wl":"wyl");
    
    menu();
    wyborFunkcji(c);

}

// zmien typ czcionki
void zmianaCzcionki(czcionka *c){

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

    *c &= ~TYP_MASKA;
    typ = typ & TYP_MASKA;
    *c |= typ;
}

// zmien rozmiar
void rozmiarCzcionki(czcionka *c){

    int rozmiar;

    printf("Podaj rozmiar czcionki (0 - 127): ");
    scanf("%d", &rozmiar);
    usunEnter();

    while(rozmiar < 0 || rozmiar > 127) {
        printf("Nieprawidlowa wartosc (0 - 127), podaj jeszcze raz: ");
        scanf("%d", &rozmiar);
        usunEnter();
    }

    *c &= ~ROZMIAR_MASKA;
    rozmiar = (rozmiar<<8) & ROZMIAR_MASKA;
    *c |= rozmiar;
}

// zmien wyrownanie
void zmianaWyrownania(czcionka *c){

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

    *c &= ~WYR_MASKA;

    switch (zmianaWyrownania)
    {
    case 'l': *c |= LEWA;     break;
    case 's': *c |= SRODEK;   break;
    case 'p': *c |= PRAWA;    break;
    }
}