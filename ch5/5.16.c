// bieg.c - przydatny program do biegania
#include <stdio.h>
#define S_W_M 60        // liczba sekund w minutach
#define S_W_H 3600      // liczba sekund w godzinie
int main(void){

    double dyst;        // pokonany dystans w km
    double predkosc;    // srednia predkosc w km/h
    int min, sek;       // minuty i sekundy czas biegu
    int czas;           // czas biegu w samych sekundach
    double czas_km;     // czas na 1 km w sekundach
    int min_km, sek_km; // minuty i sekundy czasu na 1 km

    printf("Ten program zamienia Twoj czas w biegu na dowolny dystans\n");
    printf("na czas przebiegniecia 1km oraz na srednia predkosc w km/h.\n");
    printf("Wpisz pokonana odleglosc w kilometrach: ");
    scanf("%lf", &dyst); // %lf odczytuje wartosc typu double
    printf("Wpisz swoj czas w minutach i sekundach.\n");
    printf("Zacznij od podawania liczby minut: ");
    scanf("%d", &min);   // %d odczytuje wartosc typu int
    printf("Teraz podaj liczbe sekund: ");
    scanf("%d", &sek);
    czas = S_W_M * min + sek;   // ile sekund łącznie?
    predkosc = dyst / czas * S_W_H; // km na sek x liczba sek w godzinie = km/h
    czas_km = (double) czas / dyst; // czas na dystans = czas na km
    min_km = (int) czas_km / S_W_M; // oblicza liczbe pelnych minut
    sek_km = (int) czas_km % S_W_M; // oblicza liczbe pozostalych sekund
    printf("------Twoje dane-------\n");
    printf("Dystans: %1.2f km\n", dyst);
    printf("Czas: %d minuty %d sekund\n", min, sek);
    printf("Czas na km: %d minut %d sekund\n",  min_km, sek_km);
    printf("Srednia predkosc: %1.2f km/h\n", predkosc);
    printf("-----------------------\n");

    return 0;
}