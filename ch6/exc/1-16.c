// 1-16.c - rozwiazania do cwiczen 1-16 rozdzial 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char zad1(char *tablicaLiter);
void zad2();
void zad3();
void gotox(int x);
void zad4();
int zad5();
void zad6();
double zad7();
double zad8();
double wynik(double x, double y);
int zad9();
int zad10();
int zad11();
int zad12();
int zad13();
int zad14();
int zad15();
int zad16();

// dane do zadan
// 6.1
char tablicaLiter[]="abcdefghijklmnopqrstuvwxyz";

// 6.2 - 6.3
char ch;

// 6.4


// 6.5


// 6.6


// 6.7 


// 6.8


// 6.9


// 6.10
#define rozmiar 8

// 6.11


// 6.12


// 6.13


// 6.14


// 6.15


// 6.16


int main(void){
    int choice;

    while (1)
    {
        printf("1 - 1  4 - 4  7 - 7  10 - 10  13 - 13  16 - 16\n");
        printf("2 - 2  5 - 5  8 - 8  11 - 11  14 - 14  17 - koniec\n");
        printf("3 - 3  6 - 6  9 - 9  12 - 12  15 - 15\n");
        printf("Wybierz numer zadania z listy: ");
        scanf("%d", &choice);
         
        switch (choice)
        {
        
        case 1:
            zad1(tablicaLiter);
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
        case 16:
            zad16();
            break;
        case 17:
            printf("Koniec!");
            exit(0);
        default:
            printf("Wybierz numer od 1 - 17.\n");
            break;
        }
        
    }
    
    return 0;
}

void gotox(int x){
    for(x; x > 0; --x)
        putchar(' ');
}

/* 

zad 1 -
abcdefghijklmnopqrstuvwxyz

*/

char zad1(char tablicaLiter[]){
    // wpisanie danych
    /*printf("Wpisz 26 liter: ");
    for (int i = 0; i < 26; i++){
        scanf("%c", &tablicaLiter[i]);
    }*/
    // wypisanie danych
    for(int i = 0; i < 26; i++){
        printf("%c", tablicaLiter[i]);
    }
    printf("\n");
    return *tablicaLiter;
    
}

/* 

zad 2 -

$
$$
$$$
$$$$
$$$$$

*/

void zad2(){
    char ch = '$';
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");
}

/*

zad 3 - 
A
AB
ABC
ABCD
ABCDE

*/

void zad3(){
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (ch = 'A'; ch < ('A' + i + 1); ch++){
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");
}


/*

zad 4 -

chcę otrzymać:

    A
   BAB
  CBABC
 DCBABCD 

*/

void zad4(){

    /* choinka - uproszczona wersja, 
    
        **
       ****
      ******
     ********
    **********

    dla liczba = 5;

    */

    /*
    
    int liczba;
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &liczba);
    for(int i = 1; i < liczba; i++){
        gotox(liczba - i);
        for (int j = 0; j < i; j++) printf("**");
        putchar('\n');
    }
    
    */    
}

/* 

zad 5 -
n n*n n*n*n

1  1  1
2  4  8
3  9  27

wyświetla liczby w zakresie granicy dolnej i górej

*/
int zad5(){
    int minimum, maksimum;
    printf("Podaj minimum: "); scanf("%d", &minimum);
    printf("Podaj maksimum: "); scanf("%d", &maksimum);
    if(minimum < maksimum) {
        printf("n n*n n*n*n\n");
        for(int index = minimum; index <= maksimum; index++) {
            printf("%d %d %d\n", index, index*index, index*index*index);
        }
    } else {
        printf ("Min musi byc wieksze od maks.\n");
    }
}

/*

zad6 -
slowo: tajnik
odwrotnosc: kinjat

*/

void zad6(){
    char slowo[50], odwSlowo[50];
    printf("Slowo: ");
    scanf("%s", &slowo);
    int dlSlowa = strlen(slowo);
    for(int i = 0; i < dlSlowa; i++){
        odwSlowo[i] = slowo[dlSlowa-i-1];
    }
    printf("Odwrotnosc: %s\n", odwSlowo);
}

/*

zad7,8 -
wejscie: 
liczba1 - 2.5
liczba2 - 5.0

obliczenie:
wynik = (liczba1 - liczba2)/(liczba1*liczba2)

*/


double zad7(){
    double x, y, wyliczenie;
    printf("podaj dwie liczby (q konczy): ");
    while(scanf("%lf%lf", &x, &y) == 2){
        wyliczenie = (x-y) / (x*y);
        printf("wynik: %.3g\n", wyliczenie);
        printf("podaj dwie liczby (q konczy): ");
    }
    printf("koniec\n");
}

/*

zad 8-
to samo co 7

*/

double zad8(){
    double x, y, wyliczenie;
    printf("podaj dwie liczby (q konczy): \n");
    while(scanf("%lf%lf", &x, &y) ==2 ){
        wyliczenie = wynik(x,y);
        printf("wynik: %.3g\n", wyliczenie);
        printf("podaj dwie liczby (q konczy): \n");
    }
    printf("koniec\n");
}

double wynik(double a, double b){
    return (a - b)/(a*b);
}

/*

zad 9-
suma kwadratów z przedziału liczb
wejscie:
5, 8
suma = 5*5 + 6*6 + 7*7 + 8*8;

*/

int zad9(){
    int min, maks, tab[100];
    printf("Podaj dolny zakres: "); scanf("%d", &min);
    printf("Podaj gorny zakres: "); scanf("%d", &maks);
    if(min < maks) {
        int zakres = maks - min;
        tab[0] = min;
        tab[zakres] = maks;
        printf("%d %d\n", tab[0], tab[zakres]);
        printf("zakres: %d\n", zakres);
        int suma = 0;
        for (int i = 0; i < tab[zakres]; i++)
            suma += tab[i];
            printf("Suma: %d\n", suma);
    } else {
        printf("Minium musi byc wieksze od maks.\n");
    }
    
    
}

/*

zad10-
wejscie:
10 9 8 7 6 5 4 3 2 1
wyjscie:
1 2 3 4 5 6 7 8 9 10

*/

int zad10(){
    int tablica[rozmiar];
    printf("Podaj 8 liczb calkowitych: ");
    for(int i = 0; i < rozmiar ; i++)
    {
        scanf("%d", &tablica[i]);
    }
    for (int i = rozmiar; i > 0 ; i--) {
        printf("%d ", tablica[i-1]);
    }
    printf("\n");
}

/*

obliczanie granicy ciągów
ciąg 1:
+ 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...

ciąg 2:
- 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

*/

int zad11(){
    printf("11!!!\n");
}

/*

zad12-
wyswietlanie pierwszych 8 poteg w tablicy int.
1 2 4 8 16 32 64 128

*/

int zad12(){
    int tablica[rozmiar];
    // przypisanie wartości do tablicy
    for(int i = 0; i < rozmiar; i++){
        tablica[i] = 1;     // przypisanie początkowej wartości do tablicy 
        for(int j = 0; j <= i-1; j++){
            // przypisanie potęgi 2 do tablicy za pomocą pętli wewnętrznej
            tablica[i] = tablica[i]*2;
        }
    }
    // wyswietlanie zapisanych wartości
    for(int i = 0; i < rozmiar; i++){
        printf("%d\n", tablica[i]);
    }
    printf("\n");
}

int zad13(){
    printf("13!!!\n");
}

int zad14(){
    printf("14!!!\n");
}

int zad15(){
    printf("15!!!\n");
}

int zad16(){
    printf("16!!!\n");
}