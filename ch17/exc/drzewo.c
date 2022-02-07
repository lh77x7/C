// drzewo.c - funkcje dla pliku naglowkowego drzewo.h

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "drzewo.h"

Drzewo * InicjujDrzewo(Drzewo * ptree) {
	*ptree = NULL;
	return ptree;
}

bool DrzewoPuste(const Drzewo * ptree) {
	return (*ptree == NULL);
}

bool DrzewoPelne(const Drzewo * ptree) {
	Wezel * pnode = (Wezel *) malloc(sizeof(Wezel));
	if (pnode == NULL) {
		return true;
	}
	else {
		free(pnode);
		return false;
	}
}

bool DodajSlowo(const char * word, Drzewo * ptree) {
	if (DrzewoPelne(ptree)) {
		return false;
	}

	int cmp;
	while (*ptree != NULL) {
		int cmp = strcmp(word, (*ptree)->pozycja.slowo);
		if (cmp == 0) {
			(*ptree)->pozycja.licznik++;
			return true;
		}
		else if (cmp < 0) {
			ptree = &((*ptree)->left);
		}
		else {
			ptree = &((*ptree)->right);
		}
	}

	Pozycja pozycja;
	strncpy(pozycja.slowo, word, WORD_SIZE);
	pozycja.licznik = 1;

	Wezel * pnode = (Wezel *) malloc(sizeof(Wezel));
	if (pnode == NULL) {
		fprintf(stderr, "Nie mozna przydzielic pamieci.\n");
		return false;
	}

	pnode->pozycja = pozycja;
	pnode->left = NULL;
	pnode->right = NULL;

	*ptree = pnode;
	return true;
}

bool UsunSlowo(const char * word, Drzewo * ptree) {
	while (*ptree != NULL) {
		int cmp = strcmp(word, (*ptree)->pozycja.slowo);
		if (cmp == 0) {
			// usun ten wezel
			Wezel * right = (*ptree)->right;
			Wezel * tmp = (*ptree);
			*ptree = (*ptree)->left;
			while ((*ptree)->right != NULL) {
				ptree = &((*ptree)->right);
			}
			(*ptree)->right = right;

			free(tmp);
			return true;
		}
		else if (cmp < 0) {
			ptree = &((*ptree)->left);
		}
		else {
			ptree = &((*ptree)->right);
		}
	}
	return false;
}

bool WDrzewie(const char * word, const Drzewo * ptree) {
	Wezel * pnode = *ptree;
	while (pnode != NULL) {
		int cmp = strcmp(word, pnode->pozycja.slowo);
		if (cmp == 0) {
			return true;
		}
		else if (cmp < 0) {
			pnode = pnode->left;
		}
		else {
			pnode = pnode->right;
		}
	}
	return false;
}

void DolaczDoWezla(const char * word, const Drzewo * ptree, void (*fn)(Pozycja)) {
	Wezel * pnode = *ptree;
	while (pnode != NULL) {
		int cmp = strcmp(word, pnode->pozycja.slowo);
		if (cmp == 0) {
			(*fn)(pnode->pozycja);
			return;
		}
		else if (cmp < 0) {
			pnode = pnode->left;
		}
		else {
			pnode = pnode->right;
		}
	}
	return;
}

void DolaczDoWszystkich(const Drzewo * ptree, void (*fn)(Pozycja)) {
	Wezel * pnode = *ptree;
	if (pnode == NULL) {
		return;
	}
	DolaczDoWszystkich(&(pnode->left), fn);
	(*fn)(pnode->pozycja);
	DolaczDoWszystkich(&(pnode->right), fn);
}

void UsunWszystko(Drzewo * ptree) {
	Wezel * pnode = *ptree;
    UsunWszystko(&(pnode->left));
	UsunWszystko(&(pnode->right));
	free(pnode);
}