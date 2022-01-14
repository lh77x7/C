// 1-15.c - rozwiazania do cwiczen 1-15 rozdzial 11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define STOP '|'
#define MAKSZNAKOW 15
#define ROZMIARLAN 100

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
void porzuc(char *tab, char *tab2, int n);
void znajdzZnak(char *, char *, int);
int znajduje_sie_w(char *lancuch, char *znak);
char *kopiujLancuch(char *cel, char *zrodlo, int);
char *zawieraLancuch(char *, char *);
void odwroc(char *);
void usunSpacje(char *);

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
3 -     DONE
4 -     DONE
5 -     DONE
6 -     DONE
7 -     DONE
8 -     DONE
9 -     DONE
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
    char tab[ROZMIARLAN];
    char tab2[ROZMIARLAN];
    getchar(); // program oczekuje znaku
    porzuc(tab, tab2, ROZMIARLAN);
    return;
}

void zad4(){
    char tablica[ROZMIARLAN], litera;
    int i = 1;
    getchar();
    printf("Wprowadz lancuch: ");
    char *wsk = gets(tablica);
    printf("Jakiej litery szukasz?: ");
    scanf("%c", &litera);
    while(*wsk != '\0')
    {
        znajdzZnak(wsk, &litera, i);
        wsk++;
        i++;
    }

}

void zad5(){
    char znak;
    char lancuch[ROZMIARLAN];
    getchar();
    printf("Wprowadz lancuch: ");
    gets(lancuch);
    printf("Jaka litere chcesz znalezc w lancuchu? ");
    scanf("%c", &znak);

    printf("%d\n", znajduje_sie_w(lancuch, &znak));
}

void zad6(){
    char tablica1[ROZMIARLAN];
    char tablica2[ROZMIARLAN];
    int n;
    getchar();
    printf("Podaj pierwszy lancuch: ");
    gets(tablica1);
    printf("Ile znakow chcesz skopiowac? ");
    scanf("%d", &n);
    kopiujLancuch(tablica2, tablica1, n);
    puts(tablica2);

}

void zad7(){
    char lancuch1[ROZMIARLAN];
    char lancuch2[ROZMIARLAN];
    char *wsk;
    getchar();
    puts("Wprowadz pierwszy lancuch: ");
    gets(lancuch1);
    puts("Wprowadz drugi lancuch: ");
    gets(lancuch2);

    wsk = zawieraLancuch(lancuch1, lancuch2);
    if(wsk != NULL)
        printf("Lancuch 2 zawiera sie w lancuch 1: %c, %p\n", *wsk, wsk);
    else 
        printf("Lancuch 2 nie zawiera sie w lancuchu 1.\n");
}

void zad8(){
    char lancuch[ROZMIARLAN];
    getchar();
    puts("Wprowadz zawartosc lancucha: ");
    gets(lancuch);
    odwroc(lancuch);
    puts(lancuch);
}

void zad9(){
    char lancuch[ROZMIARLAN];
    getchar();
    while(gets(lancuch) && isalpha(*lancuch))
    {
        usunSpacje(lancuch);
        puts(lancuch);
    }
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

void porzuc(char *tab, char *tab2, int n){
    int i = 0,j;
    puts("Wprowadz wiersz");
    gets(tab);

    while(!isspace(*tab))
    {
        tab2[i] = *tab;
        tab++;
        i++;
    }      
    // wyswietl slowo
    for(j = 0; j < i; j++)
    {
        printf("%c", tab2[j]);
    }
    printf("\n"); 
}

void znajdzZnak(char *a, char *b, int i){
    if(*a == *b)
        printf("Znaleziono na pozycji %d\n", i);
    else {
            return;
    }

}

int znajduje_sie_w(char *lancuch, char *znak){
    int licznik = 0;
    while(*lancuch != '\0')
    {
        if(*lancuch == *znak)
        {
            licznik++;
        }
        lancuch++;
    }

    if(licznik != 0)
        return 1;
    else
        return 0;
}

char *kopiujLancuch(char *cel, char *zrodlo, int n){
    int i = 0;
    while(i < n)
    {
        cel[i] = zrodlo[i];
        i++;        
    }
    return cel;
}

char *zawieraLancuch(char *lancuch1, char *lancuch2){
    char *litera;
    // lancuch1 - lancuch pierwotny
    // lancuch2 - lancuch wtorny (porownywany do pierwotnego)
    if((strcmp(lancuch1, lancuch2)) >= 0 )
    {
        // czy znalazles koniec lancucha1?
        while(*lancuch1 != '\0')
        {
            if(*lancuch1 == *lancuch2) // kiedy lancuchy sa sobie rowne
            {
                litera = lancuch1; // przypisz litere z lancucha 1
            }
            lancuch1++; // przejdz po kolejnym znaku lancucha 1
        }
    }
    else
        litera = NULL;
    return litera;
}

void odwroc(char *lancuch){
    int len = 0, temp;
    while (lancuch[len++]);     // dziala do napotkania znaku '\0'
    len -= 2;       // odejmnij 2 czyli null oraz tablica numerowana jest od 0

    // i ustawione na poczatek = 0; i < od połowy + 1; inkrementacja licznika
    for(int i = 0, temp; i < (len+1)/2; i++){
        // temp - zmienna pomocnicza przy przenoszeniu znaków
        // zwykła podmiana
        temp = lancuch[len - i];
        lancuch[len - i] = lancuch[i];
        lancuch[i] = temp; 
    }
        
}

void usunSpacje(char *lancuch){

    while(*lancuch)
    {
        if(*lancuch == ' ')
            *lancuch = *(lancuch + 1);
        else 
            *lancuch = *(lancuch);
        
        lancuch++;
    }

    printf("%s", lancuch);
}