// 1-13.c - rozwiazania do cwiczen 1-13 rozdzial 13

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcpy(), strcat()

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

int main(void){
    int choice;

    printf("Podaj liczbe od 1-13(q konczy): ");
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
        default:
            break;
        }
        printf("Podaj liczbe od 1-13 (q konczy): ");
    }
    printf("Koniec programu.\n");

    return 0;
}

/*

1 -     NOT DONE!
2 -     NOT DONE!
3 -     NOT DONE!
4 -     NOT DONE!
5 -     NOT DONE!
6 -     DONE
7 -     NOT DONE!
8 -     NOT DONE!
9 -     NOT DONE!
10 -    NOT DONE!
11 -    NOT DONE!
12 -    NOT DONE!
13 -    NOT DONE!

*/




void zad1(){

}    

void zad2(){

}

void zad3(){

}

void zad4(){

}

void zad5(){

}

void zad6(){
    FILE *we, *wy;  // deklarowanie 2 wskazników plikowych
    int ch;
    char nazwaWe[40]; // miejsce dla nazwy pliku wejsciowego
    char nazwa[40]; // miejsce dla nazwy pliku wyjsciowego
    int licznik = 0;
    getchar();
    printf("Podaj nazwe pliku: ");
    gets(nazwaWe);
    if((we = fopen(nazwaWe, "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", nazwaWe);
        exit(2);
    }
    strcpy(nazwa, nazwaWe); // kopiowanie nazwy pliku do tablicy
    strcat(nazwa, ".new");  // dopisanie .new do nazwy
    if((wy = fopen(nazwa, "w")) == NULL)
    {   // otwiera plik do zapisu
        fprintf(stderr, "Nie mozna otworzyc pliku wyjsciowego.\n");
        exit(3);
    }
    while((ch = getc(we)) != EOF)
        if(licznik++ %3 == 0)
            putc(ch, wy);   // wyswietla co 3 znak
    if(fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");
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

}

void zad12(){

}

void zad13(){
    
}