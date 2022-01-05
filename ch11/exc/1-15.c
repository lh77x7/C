// 1-15.c - rozwiazania do cwiczen 1-15 rozdzial 11

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STOP '|'
#define MAKSZNAKOW 15

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void zad10();
void zad11();
void zad12();
void zad13();
void zad14();
void zad15();
void pobierz(int);
void pobierzZnak(char *tablica, int);

int main(void){
    int choice;

    
    printf("Podaj liczbe od 1-15(q konczy): ");
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
        case 9:
            zad9();
            break;
        case 10:
            zad10();
            break;
        case 11:
            zad11();
            break;
        case 12:
            zad12();
            break;
        case 13:
            zad13();
            break;
        case 14:
            zad14();
            break;
        case 15:
            zad15();
            break;        
        default:
            break;
        }
        printf("Podaj liczbe od 1-15 (q konczy): ");
    }
    printf("Koniec programu.\n");
    
    return 0;
}

/*

1 -     DONE
2 -     DONE
3 -     NOT DONE!
4 -     NOT DONE!
5 -     NOT DONE!
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!
9 -     NOT DONE!
10 -    NOT DONE!
11 -    DONE
12 -    DONE
13 -    DONE
14 -    NOT DONE!
15 -    NOT DONE!

*/

void zad1(){
    pobierz(MAKSZNAKOW);
}    

void zad2(){
    char tablica[MAKSZNAKOW];
    pobierzZnak(tablica, MAKSZNAKOW);
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

void zad9(){

}

void zad10(){

}

void zad11(){
    // zliczba slowa, wielkie litery, male litery
    // znaki przystankowe, cyfry
    int ileSlow = 0;
    int ileDuzych = 0;
    int ileMalych = 0;
    int znakiPrzyst = 0;
    int cyfry = 0;
    char c;
    printf("Wprowadzaj dane az do napotkania (\"|\")\n");
    while((c = getchar()) != STOP)
    {
        if(isdigit(c))
            cyfry++;
        if(islower(c))
            ileMalych++;
        if(isupper(c))
            ileDuzych++;
        if(isspace(c))
            ileSlow++;
        if(ispunct(c))
            znakiPrzyst++;
    }
    printf("Podsumowanie:\n");
    printf("cyfry = %d\n", cyfry);
    printf("male litery = %d\n", ileMalych);
    printf("duze litery = %d\n", ileDuzych);
    printf("slowa = %d\n", ileSlow);
    printf("znaki przystankowe = %d\n", znakiPrzyst);
}

void zad12(){
    printf("Patrz rozwiazanie 11.12.c\n");
}

void zad13(){
    printf("Patrz rozwiazanie 11.13.c\n");
}

void zad14(){

}

void zad15(){

}

void pobierz(int liczba){
    int i = 0;
    char znak;
    while(scanf("%c", &znak) != 0 && i < liczba){
        i++;              
    }
}

void pobierzZnak(char *tablica, int n){
    int i = 0, j;
    char znak;
    printf("Podawaj znaki: ");
    znak = getchar();
    while((znak = getchar()) && !isspace(znak) && i < n)
    {
        tablica[i] = znak;
        i++;        
    }
    // wyswietlani znakow
    for(j = 0; j < i; j++)
    {
        printf("%c", tablica[j]);
    }
    printf("\n");
}