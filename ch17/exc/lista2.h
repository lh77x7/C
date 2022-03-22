// lista.h -- plik nagłówkowy dla typu "prosta lista"
#ifndef _LISTA_H_
#define _LISTA_H_
#include <stdbool.h> 
// deklaracje szczególne programu
#define ROZT 45 // rozmiar tablicy przechowującej tytuł
#define MAXROZM 100 
struct film
{
    char tytyul[ROZT];
    int ocena;
};

// ogólne definicje typów
typedef struct film Pozycja;

//typedef Wezel *Lista;
typedef struct lista {
    Pozycja wpisy[MAXROZM]; // tablica pozycji
    int pozycje;            // liczba pozycji w liście
} Lista;

// prototypy funkcji
/*

działanie: inicjalizuje listę
warunki wstępne: wlista wskazuje na listę
warunki końcowe: lista zostaje zainicjalizowana jako pusta

*/
void InicjujListe(Lista *wlista);

/*

działanie: okresla, czy lista jest pusta
warunki wstępne: wlista wskazuje na zainicjalizowana listę
warunki końcowe: funkcja zwraca true jesli lista jest pusta, 
a w przeciwnym wypadku false 

*/
bool PustaLista(const Lista *wlista);

/*

działanie: określa, czy lista jest pełna
warunki wstępne: wlista wskazuje na zainicjalizowana listę
warunki końcowe: funkcja zwraca true jesli lista jest pełna,
a w przeciwnym wypadku false

*/
bool PelnaLista(const Lista *wlista);

/*

działanie: określa liczbę pozycji w liście
warunki wstępne: wlista wskazuje na zainicjalizowaną listę
warunki końcowe: funkcja zwraca liczbe pozycji w liście

*/
unsigned int LiczbaPozycji(const Lista *wlista);

/*

działanie: dodaje pozycje na końcu listy
warunki wstępne: pozycja jest pozycją do dodania,
wlista wskazuje na zainicjalizowana listę

warunki końcowe: jeśli jest to możliwe, funkcja dodaje
pozycje na końcu listy i zwraca true, w przeciwnym razie
zwraca false

*/
bool DodajPozycje(Pozycja pozycja, Lista *wlista);

/*

działanie: stosuje funkcję do każdej pozycji w liście
warunki wstępne: wlista wskazuje na zainicjalizowana listę
wfun wskazuje na funkcje, która pobiera argument typu Pozycja
i nie ma wartości zwracanej

warunki końcowe: funkcja wskazywana przez wfun jest uruchamiana
jeden raz dla każdej pozycji w liście

*/
void Przejdz(const Lista *wlista, void (*wfun)(Pozycja pozycja));

/*

działanie: zwalnia pamięć zajmowaną przez listę
warunki wstępne: wlista wskazuje na zainicjalizowaną listę
warunki końcowe: pamięć zostaje zwolniona, wlista ma wartość NULL

*/
void CzyscListe(Lista *wlista);

#endif