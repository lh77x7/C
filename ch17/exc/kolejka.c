// kolejka.c - metody interfejsy kolejki.h
#include "kolejka.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

static void KopiujDoWezla(Pozycja pozycja, Wezel * wwezel)
{
    wwezel->pozycja = pozycja;
}

static void KopiujDoPozycji(Pozycja * wpozycja, Wezel * wwezel)
{
    *wpozycja = wwezel->pozycja;
}

/*

dzialanie: inicjalizuje kolejke
war. wstepne: wk wskzuje na kolejke
war. koncowy: kolejka zostaje  zainicjalizowana jako pusta

*/
void InicjujKolejke(Kolejka *wk)
{

    wk->przod = NULL;
    wk->tyl = NULL;
    wk->pozycje = 0;

}

/*

dzialanie: sprawdza, czy kolejka jest pusta
war. wstepne: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowe: zwraca true, jesli kolejka jest pelna,
w przeciwnym wypadku false

*/
bool PelnaKolejka(const Kolejka *wk)
{
    return wk->pozycje == MAXKOLEJKA;
}

/*

dzialanie: sprawdza, czy kolejka jest pusta
war. wstepne: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowe: zwraca true, jesli kolejka jest pusta, 
w przeciwnym wypadku false

*/
bool PustaKolejka(const Kolejka *wk)
{
    return wk->pozycje == 0;
}


/*

dzialanie: okresla liczbe pozycji w kolejce
war. wstepne: wk wskazuje na wczesniej zainicjalizowana kolejke
war. koncowe: zwraca liczbe pozycji w kolejce 

*/
int LiczbaPozycji(const Kolejka *wk)
{
    return wk->pozycje;
}

/*

dzialanie: ustaw pozycje z tylu kolejki
war. wstepny: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowy: jesli kolejka nie jest pusta, pozycja zostaje
umieszczona z tylu kolejki a funkcja zwraca true; w przeciwnym 
wypadku, kolejka pozostaje niezmieniona, a funkcja zwraca false

*/
bool Ustaw(Pozycja pozycja, Kolejka *wk)
{

    if(PelnaKolejka(wk)){
        return false;
    }

    Wezel * nowy = (Wezel *) malloc(sizeof(Wezel));
    if(nowy == NULL) {
        fprintf(stderr, "Nie mozna przydzielic pamieci!\n");
        exit(EXIT_FAILURE);
    }

    KopiujDoWezla(pozycja, nowy);
    nowy->nast = NULL;

    if(PustaKolejka(wk))
    {
        wk->przod = nowy;
    } 
    else 
    {
        (wk->tyl)->nast = nowy;
    }
    wk->tyl = nowy;
    wk->pozycje++;

    return true;       

}

/*

dzialanie: odlacza pozycje z przodu kolejki a
war. wstepny: wk wskazuje na wczesniej zainicjalizowana kolejke

war. koncowy: jesli kolejka nie jest pusta, pozycja z przodu
kolejki zostaje skopiowana do *wpozycja i usunieta z kolejki, a funkcja
zwraca true. Jesli usunieto ostatnia pozycje, kolejka jest zerowana (inicjowana).
Jesli kolejka byla pusta juz wczesniej, pozostaje ona bez zmian, a funkcja
zwraca false. 

*/

bool Odlacz(Pozycja *wpozycja, Kolejka *wk)
{
    if(PustaKolejka(wk))
    {
        return false;
    }

    Wezel * pierwszy = wk->przod;
    KopiujDoPozycji(wpozycja, pierwszy);
    wk->przod = pierwszy->nast;
    free(pierwszy);

    wk->tyl--;

    if(wk->pozycje == 0) {
        wk->tyl = NULL;    
    }
    return true;
}

/*

działanie: opróżnij kolejkę
war. wstepny: wskaźnik wk do poprzednio zainicjalizowanej kolejki

war. koncowy: kolejka jest pusta

*/
void OproznijKolejke(Kolejka *wk)
{
    Pozycja temp;
    while (Odlacz(&temp, wk))
        continue;

}