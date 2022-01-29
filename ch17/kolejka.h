// kolejka.h -- interfejs dla kolejki
#ifndef _KOLEJKA_H_
#define _KOLEJKA_H_
#include <stdbool.h>

typedef int Pozycja;
#define MAXKOLEJKA 10
typedef struct wezel
{
    Pozycja pozycja;
    struct wezel *nast;
} Wezel;
typedef struct kolejka
{
    Wezel *przod;   // wskaznik do przodu kolejki
    Wezel *tyl;     // wskaznik do tylu kolejki
    int pozycje;    // liczba pozycji w kolejce
} Kolejka;

/*

dzialanie: inicjalizuje kolejke
war. wstepne: wk wskzuje na kolejke
war. koncowy: kolejka zostaje  zainicjalizowana jako pusta

*/
void InicjujKolejke(Kolejka *wk);

/*

dzialanie: sprawdza, czy kolejka jest pusta
war. wstepne: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowe: zwraca true, jesli kolejka jest pelna,
w przeciwnym wypadku false

*/
bool PelnaKolejka(const Kolejka *wk);

/*

dzialanie: sprawdza, czy kolejka jest pusta
war. wstepne: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowe: zwraca true, jesli kolejka jest pusta, 
w przeciwnym wypadku false

*/
bool PustaKolejka(const Kolejka *wk);

/*

dzialanie: okresla liczbe pozycji w kolejce
war. wstepne: wk wskazuje na wczesniej zainicjalizowana kolejke
war. koncowe: zwraca liczbe pozycji w kolejce 

*/
int LiczbaPozycji(const Kolejka *wk);

/*

dzialanie: ustaw pozycje z tylu kolejki
war. wstepny: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowy: jesli kolejka nie jest pusta, pozycja zostaje
umieszczona z tylu kolejki a funkcja zwraca true; w przeciwnym 
wypadku, kolejka pozostaje niezmieniona, a funkcja zwraca false

*/
bool Ustaw(Pozycja pozycja, Kolejka *wk);

/*

dzialanie: odlacza pozycje z przodu kolejki a
war. wstepny: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowy: jesli kolejka nie jest pusta, pozycja z przodu
kolejki zostaje skopiowana do *wpozycja i usunieta z kolejki, a funkcja
zwraca true. Jesli usunieto ostatnia pozycje, kolejka jest zerowana (inicjowana).
Jesli kolejka byla pusta juz wczesniej, pozostaje ona bez zmian, a funkcja
zwraca false. 

*/
bool Odlacz(Pozycja *wpozycja, Kolejka *wk);
#endif