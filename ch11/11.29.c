// lankonw.c - testujemy strtol()
#include <stdio.h>
#include <stdlib.h>
int main(void){
    char liczba[30];
    char *koniec;
    long wartosc;
    puts("Podaj liczbe (wpisz pusty wiersz, aby zakonczyc):");
    while (gets(liczba) && liczba[0])
    {
        wartosc = strtol(liczba, &koniec, 10);
        printf("wartosc: %ld, poprzedza %s (%d)\n", wartosc, koniec, *koniec);
        wartosc = strtol(liczba, &koniec, 16);
        printf("wartosc: %ld, poprzeda %s (%d)\n", wartosc, koniec, *koniec);
        puts("Nastepna liczba:");
    }
    puts("Do widzenia!\n");
    
    return 0;
}