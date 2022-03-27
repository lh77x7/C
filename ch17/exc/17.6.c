// 17.6.c - rozwiązanie zadania 6 rozdział 17
 
// compile with szukanie_dwudzielne.c

#include <stdio.h>
#include "szukanie_dwudzielne.h"

int main(void)
{
	// szukanie_dwudzielne()

	int arr[10] = {1, 4, 6, 9, 11, 12, 15, 19, 25, 40};

	for (int i = 0; i < 15; i++)
	{
		printf("%d in array? %s\n", i, binarysearch(arr, 10, i) ? "yes" : "no");
	}
}