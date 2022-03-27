// 17.4.c - rozwiązanie zadania 4 rozdział 17
#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()
#include "kolejka.h"

#define MIN_W_GODZ 60.0

bool nowyklient(double x);  // czy jest nowy klient?
Pozycja czasklienta(long kiedy);    // ustawia parametry klienta

int main(void){

    // definicje
    Kolejka kol1, kol2;    
    Pozycja tymcz;  // dane o nowym kliencie
    int godz;       // liczba godzin symulacji
    int nagodz;    // srednia liczba nowych klientów na godz.
    long cykl, gran_cyklu;  // licznik petli, granica
    long odeslani = 0;  // klienci odeslani z braku miejsca
    long klienci = 0;   // klienci, którzy weszli do kolejki
    long obsluzeni1 = 0;  // obsluzeni w czasie symulacji
    long obsluzeni2 = 0;
    long suma_kol1 = 0;  // kumulatywna dlugosc kolejki
    long suma_kol2 = 0;
    int czas_czek1 = 0;  // czas do obsluzenia następnego klienta
    int czas_czek2 = 0;
    double min_na_kl;   // sredni czas miedzy przybylymi klientami
    long kol_czek1 = 0;  // kumulatywny czas stania w kolejce
    long kol_czek2 = 0;
    
    InicjujKolejke(&kol1);
    InicjujKolejke(&kol2);
    srand(time(0)); // losowa inicjalizacja funkcji rand()
    puts("Studium przypadku: Punkt porad Zygmunta Prywaciarza");
    puts("Podaj liczbe godzin symylacji: ");
    scanf("%d", &godz);
    gran_cyklu = MIN_W_GODZ * godz;
    puts("Podaj srednia liczbe klientow w ciagu godziny: ");
    scanf("%d", &nagodz);
    min_na_kl = MIN_W_GODZ / nagodz;
    
    for(cykl = 0; cykl < gran_cyklu; cykl++)
    {
        if(nowyklient(min_na_kl))
        {
            if(PelnaKolejka(&kol1) & PelnaKolejka(&kol2)) {
                odeslani++;
            }
            else {
                // dodaj klienta do krótszej kolejki
                tymcz = czasklienta(cykl);
                if(LiczbaPozycji(&kol1) <= LiczbaPozycji(&kol2)){
                    Ustaw(tymcz, &kol1);
                }
                else 
                {
                    Ustaw(tymcz, &kol2);
                }
                klienci++;
            }
        }
        if(czas_czek1 <= 0 && !PustaKolejka(&kol1))
        {
            Odlacz(&tymcz, &kol1);
            czas_czek1 = tymcz.czaskons;
            kol_czek1 += cykl - tymcz.przybycie;
            obsluzeni1++;
        }
        if(czas_czek2 <= 0 && !PustaKolejka(&kol2))
        {
            Odlacz(&tymcz, &kol2);
            czas_czek2 = tymcz.czaskons;
            kol_czek2 += cykl - tymcz.przybycie;
            obsluzeni2++;
        }
        if(czas_czek1 > 0){
            czas_czek1--;
        }
            
        if(czas_czek2 > 0){
            czas_czek2--;
        }

        suma_kol1 += LiczbaPozycji(&kol1);
        suma_kol2 += LiczbaPozycji(&kol2);
    }

    if(klienci > 0)
    {
        printf("klienci przyjeci do kolejki: %ld\n", klienci);
        printf("          klienci obsluzeni: %ld\n", obsluzeni1 + obsluzeni2);
        printf("          klienci odeslani: %ld\n", odeslani);
        printf("kolejka1  klienci obsluzeni: %ld\n", obsluzeni1);
        printf("kolejka2  klienci obsluzeni: %ld\n", obsluzeni2);
        printf("   srednia dlugosc kolejki1: %.2f\n", (double) suma_kol1 / gran_cyklu);
        printf("   srednia dlugosc kolejki2: %.2f\n", (double) suma_kol2 / gran_cyklu);
        printf("kolejka1  sredni czas oczekiwania: %.2f minut\n", (double) kol_czek1 / obsluzeni1);
        printf("kolejka2  sredni czas oczekiwania: %.2f minut\n", (double) kol_czek2 / obsluzeni2);
    }
    else {
        puts("Brak klientow!");
    }
        
    PustaKolejka(&kol1);
    PustaKolejka(&kol2);

    return 0;
}

// x = sredni czas w minutach miedzy wejsciem kolejnych klientow
// wartoscia zwracana jest true, jesli w tej minucie pojawi sie klient
bool nowyklient(double x){
    if(rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

/*

kiedy jest czasem wejscia klienta do kolejki
funkcja zwraca strukture typu Pozycja z czasem przybycia
ustawionym na kiedy i czasem konsultacji ustawionym na
wartosc losowa z przedzialu 1 - 3

*/
Pozycja czasklienta(long kiedy){
    Pozycja klient;
    klient.czaskons = rand() % 3 + 1;
    klient.przybycie = kiedy;
    return klient;
}