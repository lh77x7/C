// kopia2.c - demo strcpy()
#include <stdio.h>
#include <string.h>
#define SLOWO "cukier"
#define ROZMIAR 40
int main(void){
    char *zrodlo = SLOWO;
    char kopia[ROZMIAR] = "Podaj mnie do sadu";
    char *w1;
    puts(zrodlo);
    puts(kopia);
    w1 = strcpy(kopia + 6, zrodlo);
    puts(kopia);
    puts(w1);
    return 0;
}