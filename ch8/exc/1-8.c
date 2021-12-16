// 1-8.c - rozwiazania do cwiczen 1-8 rozdzial 8

#include <stdio.h>
#include <stdlib.h>

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();

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
        printf("Podaj liczbe od 1-13 (q konczy): ");
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
    // zlicza liczbe znakow w pliku
    int ch;
    FILE*fp;
    char nazwapliku[50];    // przechowuje nazwe pliku

    printf("Podaj nazwe pliku: "); scanf("%s", nazwapliku);
    fp = fopen(nazwapliku, "r"); // otwiera plik do odczytu
    if(fp == NULL)
    {
        printf("Blad przy probie otwarcia pliku");
        exit(1);    // wyjscie z programu
    }
    // getc(fp) pobiera znak z otwartego pliku
    int licznik = 0;
    while ((ch = getc(fp)) != EOF)
        licznik++;
        printf("Liczba znakow: %d\n", licznik);
    fclose(fp); // zamyka plik
}

void zad2(){
    // zlicza liczbe znakow w pliku
    int ch;
    FILE*fp;
    char nazwapliku[50];    // przechowuje nazwe pliku

    printf("Podaj nazwe pliku: "); scanf("%s", nazwapliku);
    fp = fopen(nazwapliku, "r"); // otwiera plik do odczytu
    if(fp == NULL)
    {
        printf("Blad przy probie otwarcia pliku");
        exit(1);    // wyjscie z programu
    }
    // getc(fp) pobiera znak z otwartego pliku
    int licznik = 0;
    while ((ch = getc(fp)) != EOF)
        
    fclose(fp); // zamyka plik
}

void zad3(){
    printf("3\n");
}

void zad4(){
    printf("4\n");
}

void zad5(){
    printf("5\n");
}

void zad6(){
    printf("6\n");
}

void zad7(){
    printf("7\n");
}

void zad8(){
    printf("8\n");
}

