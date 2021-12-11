/* naglowek2.c */
#include <stdio.h>
#include <string.h> // zawiera prototyp strlen()
#define NAZWA "MEGATHINK, INC."
#define ADRES "10 Megabuck Plaza"
#define MIEJSCOWOSC "Megapolis, CA 94904"
#define GRANICA 65
#define ODSTEP ' '
void n_znak(char ch, int num);
int main(void){
    int odstepy;
    n_znak('*', GRANICA);   // stale jako argumenty
    putchar('\n');
    n_znak(ODSTEP, 25);     //  stale jako argumenty
    printf("%s\n", NAZWA);
    odstepy = (65 - strlen(ADRES))/2; // ile odstepów wyswietlić?
    n_znak(ODSTEP, odstepy);
    printf("%s\n", ADRES);
    n_znak(ODSTEP, (65 - strlen(MIEJSCOWOSC))/2);
    printf("%s\n", MIEJSCOWOSC);
    n_znak('*', GRANICA);
    putchar('\n');
    return 0;
}

// fun. n_znak()
void n_znak(char ch, int num){
    int licznik;
    for(licznik = 1; licznik <= num; licznik++)
    putchar(ch);
}

