// drzewo.h 

#ifndef DRZEWO_H_
#define DRZEWO_H_ 1

#include <stdbool.h>

#define WORD_SIZE 30

typedef struct 
{
	char slowo[WORD_SIZE];
	int licznik;
} Pozycja;

typedef struct wezel {
	Pozycja pozycja;
	struct wezel * left;
	struct wezel * right;
} Wezel;

typedef Wezel * Drzewo;

Drzewo * InicjujDrzewo(Drzewo * ptree);

bool DrzewoPuste(const Drzewo * ptree);

bool DrzewoPelne(const Drzewo * ptree);

bool DodajSlowo(const char * word, Drzewo * ptree);

bool UsunSlowo(const char * word, Drzewo * ptree);

bool WDrzewie(const char * word, const Drzewo * ptree);

void DolaczDoWszystkich(const Drzewo * ptree, void (*fn)(Pozycja));

void DolaczDoWezla(const char * word, const Drzewo * ptree, void (*fn)(Pozycja));

void UsunWszystko(Drzewo * ptree);

#endif