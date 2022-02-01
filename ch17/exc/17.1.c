// 17.1 - rozwiazanie 17.1 - compile with film.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "film.h"

char * get(char * string, int n);

int main(void)
{
	List film_list = NULL;
	Film * obecny;
	char input[TSIZE];

	puts("Enter first movie title:");
	while (get(input, TSIZE) != NULL && input[0] != '\0')
	{
		obecny = (Film *) malloc(sizeof(Film));
		if (obecny == NULL)
		{
			fprintf(stderr, "Could not allocate memory.\n");
			exit(EXIT_FAILURE);
		}

		obecny->nastepny = NULL;
		strcpy(obecny->tytul, input);
		printf("Enter your rating (0 - 10): ");
		scanf("%d", &(obecny->ocena));
		while (getchar() != '\n') continue;

		if (film_list == NULL)
			film_list = obecny;
		else
			addMovie(film_list, obecny);

		puts("Enter next movie title (empty line to stop):");
	}

	// show list of movies
	puts("Here is your list of movies:");
	listMovie(film_list);
	puts("");

	// show list of movies in reverse order
	puts("Here is your list of movies in reverse order:");
	reverseMovie(film_list);

	// clean up
	deleteList(&film_list);

}

char * get(char * string, int n)
{
	// wrapper for fgets that replaces first newline with null

	char *return_value = fgets(string, n, stdin);

	while (*string != '\0')
	{
		if (*string == '\n')
		{
			*string = '\0';
			break;
		}
		string++;
	}

	return return_value;
}
