// witaj.c - przetwarza argument wiersza polecen na liczbe
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int i, razy;
    if(argc < 2 || (razy = atoi(argv[1])) < 1)
        printf("Sposob uzycia: %s liczba-dodatnia\n", argv[0]);
    else
        for(i = 0; i < razy; i++)
            puts("Witaj, przystojniaku!");
    return 0;
}