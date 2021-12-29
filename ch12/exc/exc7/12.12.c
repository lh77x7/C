// wielorzut.c - wielokrotny rzut koscmi
// kompilowac wraz z rzutkosc.c - 12.11.c
#include <stdio.h>
#include <stdlib.h> // funkcja srand()
#include <time.h>   // funkcja time()
#include "rzutkosc.h" // potrzeba funkcji rzucaj_n_razy() 
//i zmiennej liczby rzutow

int main(void){
    int rzuty, wynik;
    int kolejki, scianki, kosci;
    srand((unsigned int) time(0));  // losowe ziarno
    printf("Wprowadz liczbe kolejek; wybierz q aby zakonczyc.");
    while(scanf("%d", &kolejki) == 1 && kolejki > 0)
    {
        printf("Ile scian i ile kosci: ");
        while (scanf("%d", &scianki) == 1 && scianki > 0 && scanf("%d", &kosci) == 1 && kosci > 0)
        {
            printf("Oto %d kolejek rzutow %d %d-sciennymi kostkami: \n", kolejki, kosci, scianki);
            for(int i = 0; i < kolejki; i++)
            {
                wynik = rzucaj_n_razy(kosci, scianki);
                printf("%d ", wynik);
                if(i % 14 == 0 && i > 0)
                    printf("\n");
            }
        }
        printf("Wprowadz liczbe kolejek; wybierz q aby zakonczyc.");
    }
    printf("ZYCZE DUZO SZCZESCIA!\n");
    
    return 0;
}