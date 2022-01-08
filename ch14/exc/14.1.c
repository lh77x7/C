// 14.1.c - rozwiazanie zadania 1 z rozdzialu 14
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct miesiace {
    char skrot[4];
    char nazwa[20];
    int dni;
    int numer;
};

int oblicz(const struct miesiace *wsk, char *nazwa);

int main(void){
    char nazwa[40];

    struct miesiace miesiac[12] =
    {
        {"sty", "styczen", 31, 0},
        {"lut", "luty", 28, 1},
        {"mar", "marzec", 31, 2},
        {"kwi", "kwiecien", 30, 3},
        {"maj", "maj", 31, 4},
        {"cze", "czerwiec", 30, 5},
        {"lip", "lipiec", 31, 6},
        {"sie", "sierpien", 31, 7},
        {"wrz", "wrzesien", 30, 8},
        {"paz", "pazdzienik", 31, 9},
        {"lis", "listopad", 30, 10},
        {"gru", "grudzien", 31, 11}
    };
    puts("Wprowadz nazwe miesiaca: ");
    gets(nazwa);

    printf("Liczba dni: %d\n", oblicz(miesiac, nazwa));

    return 0;
}

int oblicz(const struct miesiace *wsk, char *nazwa){
    int znaleziono = 0;
    int wynik = 0;
    while(wsk->nazwa != '\0' && znaleziono == 0){
        wynik += wsk->dni;
        if(strcmp(wsk->nazwa, nazwa) == 0){
            znaleziono = 1;
        }
        
        if(znaleziono == 0)
        wsk++;  
    }

    if(znaleziono == 1)
    {
        return wynik;
    }    
    else 
    {
        printf("Niepoprawna nazwa miesiaca\n");
        exit(1);
    }
}