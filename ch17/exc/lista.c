// lista.c -- funkcja realizująca operacje na liście
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
// funkcje lokalne
static void KopiujDoWezla(Pozycja pozycja, Wezel *wwezel);
// funkcje interfejsu
// inicjalizuj liste jako pustą
void InicjujListe(Lista *wlista)
{
    wlista->poczatek = NULL;
    wlista->koniec = NULL;
}

// zwraca prawde, jesli lista jest pusta
bool PustaLista(const Lista *wlista)
{
    if(wlista->poczatek == NULL)
        return true;
    else
        return false;
}

// zwraca prawde, jesli lista jest pełna
bool PelnaLista(const Lista *wlista)
{
    Wezel *wsk;
    bool full;
    wsk = (Wezel *) malloc(sizeof(Wezel));
    if(wsk == NULL)
        full = true;
    else   
        full = false;
    free(wsk);
    return full;
}

// zwraca liczbe wezłów
unsigned int LiczbaPozycji(const Lista *wlista)
{
    unsigned int licznik = 0;
        Wezel *w = wlista->poczatek; // ustawia na poczatek listy

    while(w != NULL)
    {
        ++licznik;
        w = w->nast;    // sprawia, ze w wskazuje na następny wezeł
    }
    return licznik;
}

// tworzy wezel przechowujący pozycje i dodaje go na końcu
// listy wskazywanej przez wlista(wolna implementacja)
bool DodajPozycje(Pozycja pozycja, Lista *wlista)
{
    Wezel *wnowy;
    wnowy = (Wezel *) malloc(sizeof(Wezel));
    if(wnowy == NULL)
        return false;   // konczy funkcje w razie niepowodzenia
    KopiujDoWezla(pozycja, wnowy);
    wnowy->nast = NULL;

    if(wlista->poczatek == NULL) // lista jest pusta, wnowy nalezy
        wlista->poczatek = wnowy;    // wiec umiescic na jej poczatku
    else 
        (wlista->koniec)->nast = wnowy;

    wlista->koniec = wnowy; // dodaje nowy na koncu

    return true;
}

// "odwiedza" kazdy wezel i wykonuje funkcje wskazywana przez wfun
void Przejdz(const Lista *wlista, void (*wfun)(Pozycja pozycja))
{
    Wezel *wsk = wlista->poczatek;
    while(wsk != NULL)
    {
        (*wfun)(wsk->pozycja);  // stosuje funkcje do pozycji
        wsk = wsk->nast;
    }
}

// zawalnia pamiec przedzieloną przez malloc() i ustawia wskaznik na NULL
void CzyscListe(Lista *wlista)
{
    Wezel *wsk, * wwezel = wlista->poczatek;
    while(wwezel != NULL)
    {
        wsk = wwezel-> nast; // zapisuje adres wezla
        free(wwezel);  // zwalnia wezel
        wwezel = wsk;  // przechodzi do nastepnego wezla
    }
}

// definicja funkcji lokalnej
// kopiuje element do wezla
static void KopiujDoWezla(Pozycja pozycja, Wezel *wwezel)
{
    wwezel->pozycja = pozycja;
}