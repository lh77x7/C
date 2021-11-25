// 1-16.c - rozwiazania do cwiczen 1-16 rozdzial 6

#include <stdio.h>
#include <stdlib.h>

char zad1(char *tablicaLiter);
void zad2();
void zad3();
void gotox(int x);
void zad4();
int zad5();
int zad6();
int zad7();
int zad8();
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

int zad6(){
    printf("6!!!\n");
}

int zad7(){
    printf("7!!!\n");
}

int zad8(){
    printf("8!!!\n");
}

int zad9(){
    printf("9!!!\n");
}

int zad10(){
    printf("10!!!\n");
}

int zad11(){
    printf("11!!!\n");
}

int zad12(){
    printf("12!!!\n");
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