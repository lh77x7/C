#ifndef _FILM_H_
#define _FILM_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define TSIZE 40

typedef struct film{
    char tytul[TSIZE];
    int ocena;
    struct film * nastepny;
} Film;

typedef Film * List;

// delete all list and free memory
void deleteList(List * list);

// add movie to the list
void addMovie(List filmlist, Film * item);

// show list in orginal order
void listMovie(List filmlist);

// show list in reverse order
void reverseMovie(List filmlist);

#endif


