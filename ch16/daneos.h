// daneos.h - plik naglowkowy struktury nazwiska
// stale

#ifndef DANEOS_H_
#define DANEOS_H_
// stale
#define DL_LAN 32

// deklaracje struktur
struct daneos_st
{
    char imie[DL_LAN];
    char nazw[DL_LAN];
};

// typedef
typedef struct daneos_st daneos;

// prototypy funkcji
void wprowadz(daneos *);
void wyswietl(const daneos *);
#endif

