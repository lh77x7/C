// 17.2.c -- rozwiazanie zadania 2 z rodzialu 17 (kompiluj z lista.c)

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void showMovies(Pozycja item);
char * get(char * st, int n);
int main(void)
{
	Lista movies;
	Pozycja temp;

	/* initialize */
	InicjujListe(&movies);

	if (PelnaLista(&movies))
	{
		fprintf(stderr,"No memory available! Bye!\n");
		exit(1);
	}

	/* gather and store */
	puts("Enter first movie title:");
	while (get(temp.tytyul, ROZT) != NULL && temp.tytyul[0] != '\0')
	{
		puts("Enter your rating <0-10>:");
		scanf("%d", &temp.ocena);
		while(getchar() != '\n')
			continue;
		
		if (DodajPozycje(temp, &movies)==false) 
		{
			fprintf(stderr,"Problem allocating memory\n");
			break;
		}

		if (PelnaLista(&movies))
		{
			puts("The list is now full.");
			break;
		}

		puts("Enter next movie title (empty line to stop):"); 
	}
	
	/* display */
	if (PustaLista(&movies))
		printf("No data entered. ");
	else
	{
		printf ("Here is the movie list:\n");
		Przejdz(&movies, showMovies);
	}

	printf("You entered %d movies.\n", LiczbaPozycji(&movies));

	/* clean up */
	CzyscListe(&movies);

	printf("Bye!\n");
	return 0;
}

void showMovies(Pozycja item)
{
	printf("Movie: %s Rating: %d\n", item.tytyul, item.ocena);
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
