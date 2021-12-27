#include "pe12-2a.h"

int wybierzTryb(int wybor){
    
    int temp;
    
    if(wybor != 0 && wybor != 1){
        printf("Wprowadziles niewlasciwy tryb\n");
        wybor = temp;
        printf("Ostatnio dobrze wprowadzony tryb = %d, uzyjemy go\n", wybor);
        return wybor;
    } else {
        temp = wybor;
        return wybor;
    }
}

void pobierzDane(int x){
    
    float odleglosc = 0;
    float zuzycie = 0;

    if(x == 0){
        printf("Wprowadz przebyta odleglosc w kilometrach: ");
        scanf("%f", &odleglosc);
        printf("Wprowadz zuzyte paliwo w litrach: ");
        scanf("%f", &zuzycie);
    }
    if(x == 1){
        printf("Wprowadz przebyta odleglosc w milach: ");
        scanf("%f", &odleglosc);
        printf("Wprowadz zuzyte paliwo w galonach: ");
        scanf("%f", &zuzycie);
    }
    wyswietlDane(x, odleglosc, zuzycie);
}

void wyswietlDane(int zmienna, float odleglosc, float zuzycie){
    
    float wynik;
    
    if(zmienna == 0){
        wynik = zuzycie/(odleglosc/100);
        printf("Zuzycie paliwa wynioslo %.2f litrow na 100km\n", wynik);
    }
    if(zmienna == 1){
        wynik =  odleglosc/zuzycie;
        printf("Zuzycie paliwa wynioslo %.2f mil na galon\n", wynik);
    }
}