// 1-8.c - rozwiazania do cwiczen 1-8 rozdzial 12

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zad1(void);
void zad2(void);
void zad3(void);
void zad4(void);
void zad5(void);
void zad6(void);
void zad7(void);
void zad8(void);
int krytyka(int jednostki);
int funkcja(void);
void sortowaniebabelowe(int tab[], int size);
int ileRazy = 0;

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
2 -     DONE
3 -     DONE
4 -     DONE
5 -     DONE
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!

*/

void zad1(void){
    int jednostki = 0;
    printf("Ile funtow masla miesci sie w barylce?\n");
    scanf("%d", &jednostki);
    while (jednostki != 56)
        jednostki = krytyka(jednostki);
    printf("Musiales podejrzec!\n");
}    

void zad2(void){
    printf("Rozwiazanie zad.2: folder exc2 - pe12-2a.c, pe12-2b.c ");
    printf("oraz naglowek pe12-2a.h\n");
}

void zad3(void){
    printf("Rozwiazanie zad.3: forder exc3 - pe12-2a.c, pe12-2b.c ");
    printf("oraz naglowek pe12-2a.h\n");
}

void zad4(void){
    int liczba, x = 0;
    while(scanf("%d", &liczba) == 1)
    {
        x = funkcja();
    }
    printf("Wowalana: %d razy\n", x);
}

void zad5(void){
    int tab[100];
    srand(time(0));     // generator seed
    // rand() % 10 + 1  (liczby z przedzialu od 1 do 10)
    for(int i = 0; i < 100; i++){
        tab[i] = rand() % 10 + 1;
    }
    // pokaz elementy przed sortowaniem
    printf("przed sortowaniem: \n");
    for(int i = 0; i < 100; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    printf("------------------\n");
    // sortowanie babelkowe (bubble sort)
    sortowaniebabelowe(tab, 100);
    // pokaz posortowane elementy tablicy
    printf("Po sortowaniu: \n");
    for(int i = 0; i < 100; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    printf("------------------\n");
}

void zad6(void){

}

void zad7(void){

}

void zad8(void){

}

int krytyka(int jednostki){
    // deklaracja pominieta

    printf("Nie masz szczescia, sprobuj ponownie.\n");
    scanf("%d", &jednostki);

    return jednostki;
}

int funkcja (void){
    ileRazy++;
    return ileRazy;
}

void sortowaniebabelowe(int tab[], int size){
    int i, j, temp;
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - 1 - i; j++){
            if(tab[j] < tab[j+1]){ // tab[j] < tab[j+1] - porzadek malejacy
                temp = tab[j+1];    // gdy tab[j] > tab[j+1] - porzadek rosnący
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }        
}