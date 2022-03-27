#ifndef STOS_H_
#define STOS_H_ 

// stos.h -- plik nagłówkowy dla stosu

#include <stdbool.h>

// definicje

typedef struct node
{
	char item;
	struct node * previous;
} Node;

typedef Node * Stack;

// funkcje

// inicjalizuj listę
Stack * InitializeStack(Stack * pstack);

/*

dodaj znak ch do stosu poprzez wskażnik pstack.
Zwróć true jeśli operacja udana, a false w przeciwnym razie.

*/

bool PushItem(const char * pch, Stack * pstack);

/*

Zabierz znak ze stosu i umieść w miejscu wskazywanym przez wskaźnik pch.
Zwróć true jeśli operacja udana, a false kiedy stos jest pusty.

*/

bool PopItem(char *pch, Stack * pstack);

// opróżnij stos i wyczyść pamięć 
void EmptyStack(Stack * pstack);

#endif