// podwdol.c -- dwukrotnie dolacza plik naglowkowy
#include <stdio.h>
#include "daneos.h"
#include "daneos.h" // przypadkowe drugie dolaczenie
int main(void){
    struct daneos_st zwyciezca = {"Less", "Ismoor"};
    printf("Zwyciesca jest %s %s.\n", zwyciezca.imie, zwyciezca.nazw);
    return 0;
}