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
    *wlista = NULL;
}

// zwraca prawde, jesli lista jest pusta
bool PustaLista(const Lista *wlista)
{
    if(*wlista == NULL)
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
        Wezel *w = *wlista; // ustawia na początek listy
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
    Wezel *szuk = *wlista;
    wnowy = (Wezel *) malloc(sizeof(Wezel));
    if(wnowy == NULL)
        return false;   // konczy funkcje w razie niepowodzenia
    KopiujDoWezla(pozycja, wnowy);
    wnowy->nast = NULL; 
    if(szuk == NULL) // lista jest pusta, wnowy należy
        *wlista = wnowy;    // wiec umieścić na jej początku
    else 
    {
        while(szuk->nast != NULL)
            szuk = szuk->nast;  // znajduje koniec listy
        szuk->nast = wnowy; // dodaje nowy na końcu
    }
    return true;
}

// "odwiedza" kazdy wezel i wykonuje funkcje wskazywana przez wfun
void Przejdz(const Lista *wlista, void (*wfun)(Pozycja pozycja))
{
        Wezel *wsk = *wlista;
    while(wsk != NULL)
    {
        (*wfun)(wsk->pozycja);  // stosuje funkcje do pozycji
        wsk = wsk->nast;
    }
}

// zawalnia pamiec przedzieloną przez malloc() i ustawia wskaznik na NULL
void CzyscListe(Lista *wlista)
{
    Wezel *wsk;
    while(*wlista != NULL)
    {
        wsk = (*wlista)-> nast; // zapisuje adres wezła
        free(*wlista);  // zwalnia wezel
        *wlista = wsk;  // przechodzi do następnego węzła
    }
}

// definicja funkcji lokalnej
// kopiuje element do wezła
static void KopiujDoWezla(Pozycja pozycja, Wezel *wwezel)
{
    wwezel->pozycja = pozycja;
}