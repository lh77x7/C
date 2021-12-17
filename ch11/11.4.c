// imie1.c - pobiera imie
#include <stdio.h>
#define MAX 81
int main(void){
    char imie[MAX]; // przydziela miejsce
    printf("czesc, jak masz na imie?\n");
    gets(imie);
    printf("ladne imie, %s.\n", imie);
    return 0;
}