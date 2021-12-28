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
6 -     DONE
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
    int *wsk;
    wsk = (int *) malloc(100 * sizeof(int));
    srand(time(0));     // generator seed
    // rand() % 10 + 1  (liczby z przedzialu od 1 do 10)
    for(int i = 0; i < 100; i++){
        wsk[i] = rand() % 10 + 1;
    }
    // pokaz elementy przed sortowaniem
    printf("przed sortowaniem: \n");
    for(int i = 0; i < 100; i++){
        printf("%d ", wsk[i]);
    }
    printf("\n");
    printf("------------------\n");
    // sortowanie babelkowe (bubble sort)
    sortowaniebabelowe(wsk, 100);
    // pokaz posortowane elementy tablicy
    printf("Po sortowaniu: \n");
    for(int i = 0; i < 100; i++){
        printf("%d ", wsk[i]);
    }
    printf("\n");
    printf("------------------\n");
    free(wsk);
}

void zad6(void){
    int liczba1 = 0, liczba2 = 0, liczba3 = 0, liczba4 = 0, liczba5 = 0;
    int liczba6 = 0, liczba7 = 0, liczba8 = 0, liczba9 = 0, liczba10 = 0;
    srand(time(0)); // generator seed
    int * wsk, n;
    wsk = (int *) malloc(100 * sizeof(int));
    for(int i = 0; i < 1000; i++){
        wsk[i] = rand() % 10 + 1;
    }
    
    for(int i = 0; i < 1000; i++){
        //printf("%d ", wsk[i]);
        if(wsk[i] == 1) liczba1++;
        if(wsk[i] == 2) liczba2++;
        if(wsk[i] == 3) liczba3++;
        if(wsk[i] == 4) liczba4++;
        if(wsk[i] == 5) liczba5++;
        if(wsk[i] == 6) liczba6++;
        if(wsk[i] == 7) liczba7++;
        if(wsk[i] == 8) liczba8++;
        if(wsk[i] == 9) liczba9++;
        if(wsk[i] == 10) liczba10++;
    }
    printf("\n");

    printf("Wystepowanie liczb w zbiorze 1000 liczb.\n");
    printf("1: %d\n", liczba1);
    printf("2: %d\n", liczba2);
    printf("3: %d\n", liczba3);
    printf("4: %d\n", liczba4);
    printf("5: %d\n", liczba5);
    printf("6: %d\n", liczba6);
    printf("7: %d\n", liczba7);
    printf("8: %d\n", liczba8);
    printf("9: %d\n", liczba9);
    printf("10: %d\n", liczba10);
    printf("----------------------\n");
    free(wsk);
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