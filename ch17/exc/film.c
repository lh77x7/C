// film.c -- implementation file for linked film list

#include "film.h"

// delete the entire film list and free allocated memory
void deleteList(List * list_ptr)
{

	Film * tmp, * list = *list_ptr;
	while (list != NULL)
	{
		tmp = list->nastepny;
		free(list);
		list = tmp;
	}

	*list_ptr = NULL;
}

// add a film to the list;
void addMovie(List filmlist, Film * new_film)
{
	Film * film_ptr = filmlist;
	while (film_ptr->nastepny != NULL)
		film_ptr = film_ptr->nastepny;
	film_ptr->nastepny = new_film;
}

// print the list of films in original order
void listMovie(List film_ptr)
{
	while (film_ptr != NULL)
	{
		printf("%s: %d\n", film_ptr->tytul, film_ptr->ocena);
		film_ptr = film_ptr->nastepny;
	}
}

// print the list of films in reverse order
void reverseMovie(List film_ptr)
{
	if (film_ptr == NULL)
		return;
	else
	{
		reverseMovie(film_ptr->nastepny);
		printf("%s: %d\n", film_ptr->tytul, film_ptr->ocena);
	}
}