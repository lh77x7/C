// wielorzut.c - wielokrotny rzut koscmi
// kompilowac wraz z rzutkosc.c - 12.11.c
#include <stdio.h>
#include <stdlib.h> // funkcja srand()
#include <time.h>   // funkcja time()
#include "rzutkosc.h" // potrzeba funkcji rzucaj_n_razy() 
//i zmiennej liczby rzutow

int main(void){
    int rzuty, wynik;
    int kolejki, scianki;
    srand((unsigned int) time(0));  // losowe ziarno
    
    printf("Podaj liczbe scianek, 0 oznacza koniec.\n");
    while (scanf("%d", &scianki) == 1 && scianki > 0)
    {
        printf("Ile rzutow?\n");
        scanf("%d", &rzuty);
        wynik = rzucaj_n_razy(rzuty, scianki);
        printf("Wyrzucono razem %d uzywajac %d %d - sciennych kosci.\n",
        wynik, rzuty, scianki);
        printf("Podaj liczbe scianek, 0 oznacza koniec.\n");
    }
    printf("Funkcja rzucaj() zostala wywolana %d razy.\n", liczba_rzutow);  //zmienna zew.
    printf("ZYCZE DUZO SZCZESCIA!\n");
    
    return 0;
}