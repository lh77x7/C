// 14.2.c - rozwiazanie zadania 2 z rozdzialu 14
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct miesiace {
    char skrot[4];
    char nazwa[20];
    int dni;
    int numer;
};

int oblicz(const struct miesiace *wsk, int dzien, int n);
void usunWiersz();

int main(void){
    int dzien;
    int rok;
    char mies[10];
    int znaleziono = 0;
    int przestepny = 0;
    int i = 0;

    struct miesiace miesiac[12] =
    {
        {"sty", "styczen", 31, 1},
        {"lut", "luty", 28, 2},
        {"mar", "marzec", 31, 3},
        {"kwi", "kwiecien", 30, 4},
        {"maj", "maj", 31, 5},
        {"cze", "czerwiec", 30, 6},
        {"lip", "lipiec", 31, 7},
        {"sie", "sierpien", 31, 8},
        {"wrz", "wrzesien", 30, 9},
        {"paz", "pazdzienik", 31, 10},
        {"lis", "listopad", 30, 11},
        {"gru", "grudzien", 31, 12}
    };

    puts("Wprowadz dzien: ");
    scanf("%d", &dzien);
    usunWiersz();
    puts("Wprowadz miesiac: (numer, skrot lub pelna nazwe): ");
    scanf("%s", mies);
    usunWiersz();
    puts("Wprowadz rok: ");
    scanf("%d", &rok);

    // czy rok jest przestepny?
    if(rok%4 == 0 || rok%400 == 0)
        przestepny = 0;
    if(przestepny == 1)
    {
        printf("Rok, ktory wprowadziles jest przestepny.\n");
        miesiac[1].dni = 29;
    }

    if(isdigit(*mies)){
        while (znaleziono == 0 && i < 12)
        {
            znaleziono = 1;
        
        if(znaleziono == 0)
            i++;
        }
    }

    if(strlen(mies) == 3) // czy zastosowano skrot?
    {
        while (znaleziono == 0 && i < 12)
        {
            if(strcmp(miesiac[i].skrot, mies) == 0)
                znaleziono = 1;
            if(znaleziono == 0)
                i++;
        }
                
    }
    else 
    {
        while (znaleziono == 0 && i < 12)
        {
            if(strcmp(miesiac[i].nazwa, mies) == 0)
                znaleziono = 1;
            if(znaleziono == 0)
                i++;
        }
    }

    if (dzien > miesiac[i].dni) {
        printf("Dzien, ktory wprowadziłes jest za duzy dla %s\n", miesiac[i].nazwa);
        exit(1);
    }
    
    if(znaleziono == 1)
    printf("Calkowita liczba dni w roku do podanego dnia wlacznie: %d\n", oblicz(miesiac, dzien, i));
    else
        printf("Nie znaleziono takiego miesiaca\n");

    return 0;
}

int oblicz(const struct miesiace *wsk, int dzien, int n){
    int i;
    int wynik = 0;

    for(i = 0; i < n; i++){
        wynik += wsk[i].dni;
    }
    wynik += dzien;

    return wynik;
}

void usunWiersz(){
    while(getchar() != '\n')
        continue;
}