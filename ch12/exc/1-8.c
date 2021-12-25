// 1-8.c - rozwiazania do cwiczen 1-8 rozdzial 12

#include <stdio.h>
#include "../../include/pe12-2a.h"

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void krytyka();
static int jednostki = 0;  // lacznosc wewnetrzna, zasieg plikowy
int wybierzTryb(int);
void pobierzDane();
void wyswietlDane();

int main(void){
    int choice;

    printf("Podaj liczbe od 1-8(q konczy): ");
    while(scanf("%d", &choice) == 1)
    {
        switch (choice)
        {
        case 1:
            zad1();
            break;
        case 2:
            zad2();
            break;
        case 3:
            zad3();
            break;
        case 4:
            zad4();
            break;
        case 5:
            zad5();
            break;
        case 6:
            zad6();
            break;
        case 7:
            zad7();
            break;
        case 8:
            zad8();
            break;        
        default:
            break;
        }
        printf("Podaj liczbe od 1-8 (q konczy): ");
    }
    printf("Koniec programu.\n");

    return 0;
}

/*

1 -     DONE
2 -     NOT DONE!
3 -     NOT DONE!
4 -     NOT DONE!
5 -     NOT DONE!
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!

*/




void zad1(){
    extern int jednostki;
    printf("Ile funtow masla miesci sie w barylce?\n");
    scanf("%d", &jednostki);
    while (jednostki != 56)
        krytyka();
    printf("Musiales podejrzec!\n");
}    

void zad2(){
    int tryb;

    printf("Wybierz: 0 - system metryczny, 1 - system US: ");
    scanf("%d", &tryb);
    while(tryb >= 0)
    {
        wybierzTryb(tryb);
        pobierzDane();
        wyswietlDane();
        printf("Wybierz: 0 - system metryczny, 1 - system US");
        printf("(-1 aby zakonczyc):");
        scanf("%d", &tryb);
    }
    printf("Koniec.\n");
}

void zad3(){

}

void zad4(){

}

void zad5(){

}

void zad6(){

}

void zad7(){

}

void zad8(){

}

void krytyka(){
    extern int jednostki;
    printf("Nie masz szczescia, sprobuj ponownie.\n");
    scanf("%d", &jednostki);

}

int wybierzTryb(int tryb) {
        
}

void pobierzDane() {
    
}

void wyswietlDane() {

}