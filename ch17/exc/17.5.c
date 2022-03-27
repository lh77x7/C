// 17.5.c - rozwiązanie zadania 5 rozdział 17

#include <stdio.h>
#include "stos.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return 1;
	}

	Stack character_stack;
	Stack * stack_ptr = InitializeStack(&character_stack);

	// for (char * pchar = argv[1]; *pchar != '\0'; pchar++)
	// 	printf("%c", *pchar);

	for (char * pchar = argv[1]; *pchar != '\0'; pchar++)
		PushItem(pchar, stack_ptr);

	char pch[1];
	while (PopItem(pch, stack_ptr))
		printf("%c", *pch);

	puts("");

}