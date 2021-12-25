// 1-8.c - rozwiazania do cwiczen 1-8 rozdzial 12

#include <stdio.h>
#include "../../include/pe12-2a.h"

void zad1(void);
void zad2(void);
void zad3(void);
void zad4(void);
void zad5(void);
void zad6(void);
void zad7(void);
void zad8(void);
void krytyka(void);
static int jednostki = 0;  // lacznosc wewnetrzna, zasieg plikowy
int wybierzTryb(int);
void pobierzDane(void);
void wyswietlDane(void);
static int tryb;
int pobierzInt(void);
float pobierzFloat(void);

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

void zad1(void){
    extern int jednostki;
    printf("Ile funtow masla miesci sie w barylce?\n");
    scanf("%d", &jednostki);
    while (jednostki != 56)
        krytyka();
    printf("Musiales podejrzec!\n");
}    

void zad2(void){
    int tryb;

    printf("Wybierz: 0 - system metryczny, 1 - system US: ");
    printf("(-1 aby zakonczyc): ");
    scanf("%d", &tryb);
    while(tryb >= 0)
    {
        wybierzTryb(tryb);
        pobierzDane();
        wyswietlDane();
        printf("Wybierz: 0 - system metryczny, 1 - system US");
        printf("(-1 aby zakonczyc): ");
        scanf("%d", &tryb);
    }
    printf("Koniec.\n");
}

void zad3(void){

}

void zad4(void){

}

void zad5(void){

}

void zad6(void){

}

void zad7(void){

}

void zad8(void){

}

void krytyka(void){
    extern int jednostki;
    printf("Nie masz szczescia, sprobuj ponownie.\n");
    scanf("%d", &jednostki);

}

int wybierzTryb(int wybor) {
        switch (wybor)
        {
        case '0':
            printf("Jestem tutaj na 0!\n");
            pobierzDane();
            //wyswietlDane();
            break;
        case '1':
            printf("Jestem tutaj na 1!\n");
            pobierzDane();
            //wyswietlDane();
            break;
        default:
            printf("Blad programu!\n");
            break;
        }
}

void pobierzDane(void) {
    extern int tryb;
    int kilometry, mile;
    float litry, galony, wynik;
    if(tryb == 0){
        printf("Wprowadz przebyta odleglosc w kilometrach: ");
        kilometry = pobierzInt();
        printf("Wprowadz zuzyte paliwo w litrach: ");
        litry = pobierzFloat();
    }
    else {
        printf("Wprowadz przebyta odleglosc w milach: ");
        mile = pobierzInt();
        printf("Wprowadz zutyte paliwo w galonach: ");
        galony = pobierzFloat();
    }
}

void wyswietlDane(void) {
    /*
    extern int tryb;
    int kilometry, mile;
    float litry, galony, wynik;
    */
}

int pobierzInt(void){
    int we;
    char ch;
        while(scanf("%d", &we) != 1)
        {
            while((ch = getchar()) != '\n')
            putchar(ch);    // pomija bledne dane wejsciowe
            printf(" nie jest liczba calkowita.\n Prosze podac ");
            printf("wartosc calkowita, np. 23, 7, 100");
        }
    return we;
}

float pobierzFloat(void){
    float we;
    char ch;
        while (scanf("%f", &we) !=1)
        {
            while((ch = getchar()) != '\n')
            putchar(ch);    // pomija bledne dane wejsciowe
            printf(" nie jest liczba zmiennoprzecinkowa.\n Prosze podac ");
            printf("wartosc zmiennoprzecinkowa, np. 23.4, 7.7, 4.4");
        }
    return we;    
}