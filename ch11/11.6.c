// imie3.c - pobiera imie przy pomocy fgets()
#include <stdio.h>
#define MAX 81
int main(void){
    char imie[MAX];
    char *wsk;
    printf("Czesc, jak masz na imie?\n");
    wsk = fgets(imie, MAX, stdin);
    printf("%s? A! %s\n", imie, wsk);
    return 0;
}