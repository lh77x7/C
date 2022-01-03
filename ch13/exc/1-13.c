// 1-13.c - rozwiazania do cwiczen 1-13 rozdzial 13

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcpy(), strcat()
#include <ctype.h>  // toupper()
#define MAX 40

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
11 -    NOT DONE!
12 -    NOT DONE!
13 -    NOT DONE!

*/

void zad1(){
    printf("Patrz rozwiazanie 13.1.c\n");
}    

void zad2(){
    printf("Patrz rozwiazanie 13.2.c\n");
}

void zad3(){
    FILE *we, *wy;
    int ch;
    char plikWej[40], plikDoc[40];
    int licznik = 0;
    getchar();
    printf("Podaj nazwe pliku wejsciowego: ");
    gets(plikWej);
    // czy mozna otworzyc plik wejsciowy?
    if((we = fopen(plikWej, "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n.", plikWej);
        exit(2);
    }
    printf("Podaj nazwe pliku wyjsciowego: ");
    gets(plikDoc);
    // czy mozna otworzyc plik docelowy do zapisu?
    if((wy = fopen(plikDoc, "w")) == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc \"%s\" - pliku wyjsciowego.\n", plikDoc);
        exit(3);
    }
    while((ch = getc(we)) != EOF)
    {
        ch = toupper(ch);
        putc(ch, wy);
        putc(ch, stdout);
        licznik++;
    }
    if(fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");

}

void zad4(){
    printf("Patrz rozwiazanie 13.4.c\n");
}

void zad5(){
    printf("Patrz rozwiazanie 13.5.c\n");
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
    printf("Patrz rozwiazanie 13.7.c\n");
}

void zad8(){
    printf("Patrz rozwiazanie 13.8.c\n");
}

void zad9(){
    FILE *wp;
    char slowa[MAX];
    char ch;
    int licznik = 1;
    getchar();
    if((wp = fopen("slowa", "a+b")) == NULL)
    {
        fprintf(stdin, "Nie moge otworzyc pliku \"slowa\".\n");
        exit(1);
    }

    rewind(wp); // przejdz do poczatku pliku
    while((ch = fgetc(wp)) != EOF)
    {
        if(ch = ' ')
            licznik++;
    }

    puts("Podaj slowa, ktore maja zostac dodane do pliku;");
    puts("Aby zakonczyc, wcisnij Enter na poczatku wiersza.");
    while(gets(slowa) != NULL && slowa[0] != '\0')
    {
        fprintf(wp, "%d-%s ", licznik, slowa);
        licznik++;
    }
    puts("Zawartosc pliku:");
    rewind(wp); // przejdz do poczatku pliku
    
    while(fscanf(wp, "%s", slowa) == 1)
        puts(slowa);
    
    if(fclose(wp) != 0)
        fprintf(stderr, "Blad przy zamykaniu pliku.\n");
}

void zad10(){
    FILE *we;
    char nazwa[40];
    char ch;
    char wiersz[40];
    long poz;
    int pozycja;
    getchar();
    printf("Podaj nazwe pliku do otwarcia: ");
    gets(nazwa);
    // otwieram plik
    if((we = fopen(nazwa, "r")) == NULL)
    {
        fprintf(stderr, "Nie mogę otworzyć pliku %s.\n", nazwa);
        exit(1);
    }
    printf("Podaj pozycje w pliku: ");
    scanf("%d", &pozycja);
    while(pozycja > 0 && pozycja < 100)
    {
        while((ch = getc(we)) != EOF || ch != '\n')
        {
            poz = (long) pozycja * sizeof(char); // oblicza offset
            fseek(we, poz, SEEK_SET); // przejscie w odpowiednie miejsce
            fread(&ch, sizeof(char), 1, we);
            fputc(ch, stdout);
        }
        scanf("%d", &pozycja);
    }
    // zamykam plik
    fclose(we);
}

void zad11(){

}

void zad12(){

}

void zad13(){
    
}