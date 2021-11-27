// dzielnik.c - uzycie zagniezdzonych struktur if do znalezienia dzielników liczby
#include <stdio.h>
#define NIE 0
#define TAK 1
int main(void){

    long num;       // liczba do sprawdzenia
    long dziel;     // potencjalne dzielniki
    int pierwsza;   // flaga
    printf("Wpisz dodatnia liczbe calkowita do zanalizowania: ");
    printf("Wpisz q, aby zakonczyc.\n");
    while (scanf("%ld", &num) == 1)
    {
        for(dziel = 2, pierwsza = TAK; (dziel * dziel) <= num; dziel++)
        {
            if(num % dziel == 0)
            {
                if((dziel * dziel)!= num)
                    printf("%ld dzieli sie przez %ld i %ld.\n", num, dziel, num/dziel);
                    
                else
                    printf("%ld dzieli sie przed %ld.\n", num, dziel);
                    pierwsza = NIE;         // liczba nie jest liczbą pierwszą
            }
        }
        if(pierwsza == TAK)
            printf("%ld jest liczba pierwsza.\n", num);
        printf("Podaj nastepna liczbe do zanalizowania: ");
        printf("Wpisz q, aby zakonczyc.\n");
    }
    
    return 0;
}