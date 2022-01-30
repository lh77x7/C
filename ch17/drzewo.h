// drzewo.h -- drzewo binarne
// drzewo nie może zawierać dwóch jednakowych pozycji
#ifndef _DRZEWO_H_
#define _DRZEWO_H_
#include <stdbool.h>
// typ Pozycja nalezy zdefiniowac w zaleznosci od okolicznosci
typedef struct pozycja
{
    char imie[20];
    char gatunek[20];
} Pozycja;
#define MAXPOZ 10
typedef struct wezel
{
    Pozycja pozycja;
    struct *lewy;   // wskaznik po prawej galezi
    struct *prawy;  // wskaznik po lewej galezi
} Wezel;
typedef struct drzewo
{
    Wezel *korzen;  // wskaznik do korzenia drzewa
    int rozmiar;    // liczba pozycji na drzewie
} Drzewo;

// prototypy funkcji

/*

dzialanie: inicjalizuje drzewo jako puste
war. wstepne:   wdrzewo wskazuje na drzewo
war. koncowe:  drzewo zostalo zainicjalizowane

*/
void InicjujDrzewo(Drzewo *wdzewo);

/*

dzialanie:    okresla, czy drzewo jest puste
war. wstepne: wdrzewo wskazuje na drzewo

war. koncowe: funkcja zwraca true, jesli drzewo jest puste,
a w przeciwnym wypadku - false.

*/
bool PusteDrzewo(const Drzewo *wdrzewo);

/*

dzialanie:      okresla, czy drzewo jest pelne
war. wstepne:   wdrzewo wskazuje na drzewo

war. koncowe:   funkcja zwraca true, jesli drzewo jest puste,
a w przeciwnym wypadku - false.

*/
bool PelneDrzewo(const Drzewo *wdrzewo);

/*

dzialanie:      okresla liczbe pozycji w drzewie
war. wstepne:   wdrzewo wskazuje na drzewo
war. koncowe:   funkcja zwraca liczbe pozycji w drzewie

*/
int LiczbaPozycji(const Drzewo *wdrzewo);

/*

dzialanie:      dodaje pozycje do drzewa
war. wstepne:   wp jest adresem dodawanej pozycji 
wdrzewo wskazuje na zainicjalizowane drzewo

war. koncowe:   jesli jest to mozliwe, funkcja dodaje
pozycje do drzewa i zwraca true; w przeciwnym wypadku
funkcja zwraca false.

*/
bool DodajPozycje(const Pozycja *wp, Drzewo *wdrzewo);

/*

dzialanie:      znajduje pozycje w drzewie
war. wstepne:   wp wskazuje na pozycje wdrzewo wskazuje 
na zainicjalizowane drzewo

war. koncowe:   funkcja zwraca true, jesli pozycja
znajduje sie sie w drzewie, a w przeciwnym wypadku - false.

*/
bool WDrzewie(const Pozycja *wp, const Drzewo *wdrzewo);

/*

dzialanie:      usun pozycje z drzewa
war. wstepne:   wp jest adresem usuwanej pozycji
wdrzewo wskazuje na zainicjalizowane drzewo

war. koncowe:   jesli jest to mozlwie, funkcja usuwa
pozycje z drzewa i zwraca true;
w przeciwnym wypadku funkcja zwraca false.

*/
bool UsunPozycje(const Pozycja *wp, Drzewo *wdrzewo);

/*

dzialanie:      stosuje funkcje do kazdej pozycji w drzewie
war. wstepne:   wdrzewo wskazuje na funkcje, ktora
przyjmuje argument typu Pozycja i nie posiada wartosci zwracanej

war. koncowe:   funkcja wskazywana przez wfun zostaje
zastosowana jeden raz dla kazdej pozycji w drzewie

*/
void Przejdz(const Drzewo *wdrzewo, void (* wfun)(Pozycja pozycja));

/*

dzialanie:      usuwa cale drzewo
war. wstepne:   wdrzewo wskazuje na zainicjalizowane drzewo
war. koncowe:   drzewo jest puste

*/
void UsunWszystko(Drzewo *wdrzewo);
#endif
