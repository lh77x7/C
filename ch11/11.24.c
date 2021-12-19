// format.c - formatowanie lancucha
#include <stdio.h>
#define MAX 20
int main(void){
    char imie[MAX];
    char nazwisko[MAX];
    char formal[2 * MAX + 10];
    double wygrana;
    puts("Podaj imie: "); 
    gets(imie);
    puts("Podaj swoje nazwisko: ");
    gets(nazwisko);
    puts("Podaj wygrana sume pieniedzy: ");
    scanf("%lf", &wygrana);
    sprintf(formal, "%s, %-19s: %6.2f zl\n", nazwisko, imie, wygrana);
    puts(formal);
    return 0;
}