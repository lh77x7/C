// lista.c -- funkcja realizująca operacje na liście
#include <stdio.h>
#include <stdlib.h>
#include "lista2.h"

// funkcje interfejsu
// inicjalizuj liste jako pustą
void InicjujListe(Lista *wlista)
{
    wlista->pozycje = 0;
}

// zwraca prawde, jesli lista jest pusta
bool PustaLista(const Lista *wlista)
{
    return (wlista->pozycje == 0);
}

// zwraca prawde, jesli lista jest pełna
bool PelnaLista(const Lista *wlista)
{
    return (wlista->pozycje == MAXROZM);
}

// zwraca liczbe pozycji
unsigned int LiczbaPozycji(const Lista *wlista)
{
    return wlista->pozycje;
}

// dodaje pozycje do listy
bool DodajPozycje(Pozycja pozycja, Lista *wlista)
{
    if(wlista->pozycje < MAXROZM)
    {
        wlista->wpisy[wlista->pozycje] = pozycja;
        (wlista->pozycje)++;
        return true;
    }
    else
        return false;
}

// "odwiedza" kazdy pozycję i wykonuje funkcje wskazywana przez wfun
void Przejdz(const Lista *wlista, void (*wfun)(Pozycja pozycja))
{
    for(int i = 0; i < wlista->pozycje; i++)
        (* wfun)(wlista->wpisy[i]);
}

// czyści listę
void CzyscListe(Lista *wlista)
{
    wlista->pozycje = 0;
}
