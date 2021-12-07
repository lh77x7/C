// 1-13.c - rozwiazania do cwiczen 1-13 rozdzial 10

#include <stdio.h>
#define MIESIACE 12 // liczba miesiecy w roku
#define LATA 5      // liczba lat danych

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
void kopiuj_tab(double zrodlo[5], double cel1[5], int size);
void kopiuj_wsk(double zrodlo[5], double cel2[5], int size);

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
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!
9 -     NOT DONE!
10 -    NOT DONE!
11 -    NOT DONE!
12 -    NOT DONE!
13 -    NOT DONE!

*/

// funkcje do zadań

void zad1(){
    const float deszcz[LATA][MIESIACE] =
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    int rok, miesiac;
    float suma, podsuma;
    printf("ROK     OPDADY(w calach)\n");
    for(rok = 0, suma = 0; rok < LATA; rok++)
    {   // dla kazdego roku sumuj opady dla kazdego miesiaca
        for(miesiac = 0, podsuma = 0; miesiac < MIESIACE; miesiac++)
            podsuma += *(*(deszcz+rok)+miesiac);
        printf("%5d %12.1f\n", 2000 + rok, podsuma);
        suma += podsuma;        // suma dla wszystkich lat
    }
    printf("\nRoczna srednia wynosi %.1f cale\n\n", suma/LATA);
    printf("SREDNIE MIESIECZNE:\n\n");
    printf(" Sty  Lut  Mar  Kwi  Maj  Cze  Lip  Sie  Wrz  Paz ");
    printf(" Lis  Gru\n");
    for(miesiac = 0; miesiac < MIESIACE; miesiac++)
    {   // dla każdego miesiaca, sumuj opady w ciagu lat
        for(rok = 0, podsuma = 0; rok < LATA; rok++)
            podsuma += *(*(deszcz+rok)+miesiac);
        printf("%4.1f ", podsuma/LATA);
    }
    printf("\n");
}

void zad2(){
    double zrodlo[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double cel1[5];
    double cel2[5];
    kopiuj_tab(zrodlo, cel1, 5);
    kopiuj_wsk(zrodlo, cel2, 5);
}

void zad3(){
    int tab[10] = {1, 2, 5, 4, 4, 4, 4, 10, 11, 8};     // testowa tablica
    int poz;
    int najwiekszy = tab[0];        // największy i najmniejszy przypisany do pierwszego elementu tablicy
    int najmniejszy = tab[0];
    
    for(int i = 0; i < 10; i++)
    {
        if(tab[i] > najwiekszy)     // znajdź największy element tablicy
            najwiekszy = tab[i];

        if(tab[i] < najmniejszy)    // znajdź najmniejszy element tablicy
            najmniejszy = tab[i];
    }
    printf("najwiekszy: %d, najmniejszy: %d, roznica: %d\n", najwiekszy, najmniejszy, najwiekszy-najmniejszy);
}

void zad4(){
    int tab[10] = {1, 2, 5, 4, 4, 4, 4, 10, 9, 8};      // testowa tablica
    int index = 0;      // przypisz 0 do tablicy
    for(int i = 0; i < 10; i++)
    {
        if(tab[i] > tab[index])     // sprawdź czy wartości w tablicy są większe od wartości indeksu
            index = i;              // jeśli tak przypisz wartość i do indeksu
    }
    printf("Indeks najwiekszego: %d\n", index+1);   // tablica zaczyna się od i = 0
}

void zad5(){
    printf("Patrz rozwiazanie zadania 3!\n");
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

void zad9(){
    printf("9\n");
}

void zad10(){
    printf("10\n");
}

void zad11(){
    printf("11\n");
}

void zad12(){
    printf("12\n");
}

void zad13(){
    printf("13\n");
}

// dodatkowe funkcje pomocnicze do rozwiązania zadań 

void kopiuj_tab(double zrodlo[5], double cel1[5], int size){
    printf("cel1: ");
    for(int i = 0; i < size; i++) {
        cel1[i] = zrodlo[i];
        // potwierdzenie kopiowania poprzez wyświetlenie
        printf("%.2f ", cel1[i]);
    }
    printf("\n");
}

void kopiuj_wsk(double zrodlo[5], double cel2[5], int size){
    printf("cel2: ");
    for(int i = 0; i < size; i++){
        *(cel2 + i) = *(zrodlo + i);
        // wyświetl skopiowana zawartosc do *(cel2 + i)
        printf("%.2f ", *(cel2+i));
    }
    printf("\n");
}