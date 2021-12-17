// imie2.c - pobiera imie
#include <stdio.h>
#define MAX 81
int main(void){
    char imie[MAX];
    char * wsk;
    printf("Czesc, jak masz na imie?\n");
    wsk = gets(imie);
    printf("%s? A %s!\n", imie, wsk);
    return 0;
}