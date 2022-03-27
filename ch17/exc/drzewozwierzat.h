// pettree.h -- plik nagłówkowy drzewa zwierzat

#ifndef DRZEWOZW_H_
#define DRZEWOZW_H_

#include <stdbool.h>

#define STRLEN 30

// definicje
typedef struct pet
{
	char type[STRLEN];
	char name[STRLEN];
	struct pet * next;
} Pet;

typedef Pet * List;

typedef struct node {
	char name[STRLEN];
	List head;
	struct node * left;
	struct node * right;
} Node;

typedef Node * Tree;

// funkcje

/*

Funkcja: inicjalizowanie drzewa
Warunki początkowe: ptree wskazuje na niezainicjalizowane drzewo
Warunki końcowe: ptree wskazuje na zainicjalizowane drzewo

*/
Tree * InitializeTree(Tree * ptree);

/*

Zwraca true jeśli wskaźnik ptree z drzewa jest pusty,
w przeciwnym wypadku zwraca false

*/
bool TreeIsEmpty(const Tree * ptree);

/*

Zwraca true jeśli wskaźnik ptree z drzewa jest pełny,
w przeciwnym wypadku zwraca false

*/
bool TreeIsFull(const Tree * ptree);

/*

Funkcja: dodawanie zwierzęcia do drzewa - 
imię i typ wskazywanego przez wskaźnik ptree.
Zwraca true jeśli operacja zakończona sukcesem, 
a w przeciwnym razie false

*/
bool AddPet(Pet * ppet, Tree * ptree);

/*

Funkcja: Znajdź i usuń węzeł zgodny z nazwą.
Zwróć true jeśli węzeł został znaleziony, a false jeśli nie

*/
bool DeletePet(Pet * ppet, Tree * ptree);

/*

Funkcja: Znajdź wezeł zgodny z nazwą.
Zwróć true jeśli słowo zostało znalezione w drzewie, a 
w przeciwnym wypadku zwróć false

*/
bool InTree(Pet * ppet, const Tree * ptree);

/*

Funkcja: Pokaż liczbę elementów drzewa

*/
int TreeItemCount(Tree tree);

/*

Przejdź po każdym węźle ze wskaźnika i wywołaj funkcję 
wskazywaną przez fn dla każdego z znalezionych węzłów

*/
void TraverseTree(const Tree * ptree, void (*fn)(Pet));


/*

Funkcja: Szukaj węzła pasującego do nazwy. Jeśli znajdziesz 
wywołaj funkcję wskazywaną przez fn dla każdego z węzłów

*/
void ApplyToNode(Pet * ppet, const Tree * ptree, void (*fn)(Pet));

/*

Funkcja: Usuń wszystkie węzły w drzewie 
i uwolnij całą zaalokowaną pamięć

*/
void DeleteAll(Tree * ptree);

#endif