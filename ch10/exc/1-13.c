// 1-13.c - rozwiazania do cwiczen 1-13 rozdzial 10

#include <stdio.h>
#define MIESIACE 12 // liczba miesiecy w roku (zad. 1, 11)
#define LATA 5      // liczba lat danych    (zad. 1, 11)
#define WIERSZE 2   // liczba wierszy (zad. 6, 10) 
#define KOLUMNY 3   // liczba kolumn  (zad. 6, 10)
#define WIERSZEZBIORU 3 // wiersze zbioru (zad. 8, 12, 13)
#define KOLUMNYZBIORU 5 // kolumny zbioru (zad. 8, 12, 13)
int rok, miesiac;
int i, w, k;
float suma, podsuma;

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
void kopiujTablice(double zrodlo[], double cel1[], int size);
void kopiujTabliceDwu(double zrodlo[][KOLUMNY], double cel[][KOLUMNY], int wiersze, int kolumny);
void kopiujWskaznik(double zrodlo[], double cel2[], int size);
void sumujeTablice(int tablica1[], int tablica2[], int sumatablic[], int rozmiar);
void wyswietlTablice(int tablica[][KOLUMNY], int wiersze);
void podwojTablice(int tablica[][KOLUMNY], int wiersze);
void opadyMiesieczne(const float tablica[][MIESIACE]);
void srednieMiesieczne(const float tablica[][MIESIACE]);
void wpiszDane(const double tablica[][KOLUMNYZBIORU], int wiersze);
void sredniaTablicy(const double tablica[][KOLUMNYZBIORU], int wiersze);
void sredniaZbioru(const double tablica[][KOLUMNYZBIORU], int wiersze);
void znajdzNajwieksza(const double tablica[][KOLUMNYZBIORU], int wiersze);
void wyswietlWyniki(const double tablica[][KOLUMNYZBIORU], int wiersze);

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
10 -    DONE
11 -    DONE
12 -    DONE
13 -    DONE

*/

// funkcje do zadań

void zad1(){
    const float deszcz[LATA][MIESIACE] =            // przypisz wartości tablicy dwuwymiarowej
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    printf("ROK     OPDADY(w calach)\n");
    for(rok = 0, suma = 0; rok < LATA; rok++)
    {   // dla kazdego roku sumuj opady dla kazdego miesiaca
        for(miesiac = 0, podsuma = 0; miesiac < MIESIACE; miesiac++)
            podsuma += *(*(deszcz+rok)+miesiac);    // działam na wskaźnikach
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
            podsuma += *(*(deszcz+rok)+miesiac);        // operuj na wskaźnikach
        printf("%4.1f ", podsuma/LATA);
    }
    printf("\n");
}

void zad2(){
    double zrodlo[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double cel1[5];
    double cel2[5];
    kopiujTablice(zrodlo, cel1, 5);
    kopiujWskaznik(zrodlo, cel2, 5);
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
    double tablica1[WIERSZE][KOLUMNY] = {{1, 2, 3}, {3, 4, 5}};
    double tablica2[WIERSZE][KOLUMNY];
    kopiujTabliceDwu(tablica1, tablica2, 2, 3);
}

void zad7(){
    double tab[7] = {1, 3, 6, 8, 9, 10, 11};
    double kopia[3];
    kopiujTablice(tab+4, kopia, 3);
    printf("\n");
}

void zad8(){
    double tablica[3][5] = {
        {1, 3, 5, 6, 8},
        {2, 5, 6, 7, 9},
        {3, 6, 9, 10, 12}
    };
    double kopiaTablicy[3][5];
    for(w = 0; w < WIERSZEZBIORU; w++)
    {
        for(k = 0; k < KOLUMNYZBIORU; k++)
        {
            kopiaTablicy[w][k] = tablica[w][k];
        }
    }
    // wyswietl kopie
    for (w = 0; w < WIERSZEZBIORU; w++){
        for(k = 0; k < KOLUMNYZBIORU; k++)
        {
            printf("%.2lf ", kopiaTablicy[w][k]);
        }
        printf("\n");
    }
}

void zad9(){
    int tablica1[4] = {2, 4, 5, 8};
    int tablica2[4] = {1, 0, 4, 6};
    int sumatablic[4];
    sumujeTablice(tablica1, tablica2, sumatablic, 4);
}

void zad10(){
    int tablica [WIERSZE][KOLUMNY] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    wyswietlTablice(tablica, WIERSZE);
    podwojTablice(tablica, WIERSZE);
    wyswietlTablice(tablica, WIERSZE);
}

void zad11(){
    const float deszcz[LATA][MIESIACE] = {
        
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    opadyMiesieczne(deszcz);
    srednieMiesieczne(deszcz);
}

void zad12(){
    const double tablicaZbiorow[3][5];
    wpiszDane(tablicaZbiorow, 3);
    sredniaTablicy(tablicaZbiorow, 3);
    sredniaZbioru(tablicaZbiorow, 3);
    znajdzNajwieksza(tablicaZbiorow, 3);
    wyswietlWyniki(tablicaZbiorow, 3);
}

void zad13(){
    const double tablicaZbiorow[WIERSZEZBIORU][KOLUMNYZBIORU];
    printf("Zadanie 12 wykonane na VLA\n");
    //wpiszDane(tablicaZbiorow, 3);
    //sredniaTablicy(tablicaZbiorow, 3);
    //sredniaZbioru(tablicaZbiorow, 3);
    //znajdzNajwieksza(tablicaZbiorow, 3);
    //wyswietlWyniki(tablicaZbiorow, 3);
}

// dodatkowe funkcje pomocnicze do rozwiązania zadań 

void kopiujTablice(double zrodlo[], double cel1[], int size){
    //printf("cel1: ");
    for(i = 0; i < size; i++) {
        cel1[i] = zrodlo[i];
        // potwierdzenie kopiowania poprzez wyświetlenie
        printf("%.2f ", cel1[i]);  // użyj tylko, aby sprawdzić
    }
    printf("\n");
}

void kopiujTabliceDwu(double zrodlo[][KOLUMNY], double cel[][KOLUMNY], int wiersze, int kolumny){
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < kolumny; k++)
        {
            cel[w][k] = zrodlo[w][k];
            printf("%.2lf ", cel[w][k]);
        }
        printf("\n");
    }
        
}

void kopiujWskaznik(double zrodlo[], double cel2[], int size){
    //printf("cel2: "); // 
    for(i = 0; i < size; i++){
        *(cel2 + i) = *(zrodlo + i);
        // wyświetl skopiowana zawartosc do *(cel2 + i)
        //printf("%.2f ", *(cel2+i)); // użyj tylko, aby sprawdzić
    }
    //printf("\n");
}

void sumujeTablice(int tablica1[], int tablica2[], int sumatablic[], int rozmiar){
    sumatablic[3] = 0;
    for(i = 0; i < rozmiar; i++)
    {
        sumatablic[i] = tablica1[i] + tablica2[i];
        printf("%d ", sumatablic[i]);
    }
    printf("\n");    
}

void wyswietlTablice(int tablica[][KOLUMNY], int wiersze){
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < KOLUMNY; k++)
            printf("%d ", tablica[w][k]);
        printf("\n");
    }
    printf("--------\n");
}

void podwojTablice(int tablica[][KOLUMNY], int wiersze){
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < KOLUMNY; k++)
            tablica[w][k] *=2;
    }
}

void opadyMiesieczne(const float tablica[][MIESIACE]){
    printf(" ROK     OPADY (w calach)\n");
    for(rok = 0, suma = 0; rok < LATA; rok++)
    {
        for(miesiac = 0, podsuma = 0; miesiac < MIESIACE; miesiac++)
            podsuma += tablica[rok][miesiac];
        printf("%5d %12.1f\n", 2000 + rok, podsuma);
        suma += podsuma;
    }
    printf("Roczna srednia wynosi %.1f cale\n", suma/LATA);
}

void srednieMiesieczne(const float tablica[][MIESIACE]){
    printf("SREDNIE MIESIECZNE:\n");
    printf(" Sty  Lut  Mar  Kwi  Maj  Cze  Lip  Sie  Wrz  Paz  Lis  Gru\n");
    for(miesiac = 0; miesiac < MIESIACE; miesiac++)
    {
        for(rok = 0, podsuma = 0; rok < LATA; rok++)
            podsuma += tablica[rok][miesiac];
        printf("%4.1f ", podsuma/LATA);
    }
    printf("\n");
}

void wpiszDane(const double tablica[][KOLUMNYZBIORU], int wiersze){
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < KOLUMNYZBIORU; k++)
        {
            printf("Liczba: %d %d: ", w+1, k+1);
            scanf("%lf", &tablica[w][k]);
        }
    }
}

void sredniaTablicy(const double tablica[][KOLUMNYZBIORU], int wiersze){
    for(w = 0; w < wiersze; w++)
    {
        suma = 0;
        for(k = 0; k < KOLUMNYZBIORU; k++)
            suma += tablica[w][k];
    }
}

void sredniaZbioru(const double tablica[][KOLUMNYZBIORU], int wiersze){
    suma = 0;
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < KOLUMNYZBIORU; k++)
            suma += tablica[w][k];
    }
}

void znajdzNajwieksza(const double tablica[][KOLUMNYZBIORU], int wiersze){
    float najwiekszy = tablica[0][0];
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < KOLUMNYZBIORU; k++)
        {
            if(tablica[w][k] > najwiekszy)
            najwiekszy = tablica[w][k];
        }
    }
}

void wyswietlWyniki(const double tablica[][KOLUMNYZBIORU], int wiersze){
    for(w = 0; w < wiersze; w++)
    {
        suma = 0;
        for(k = 0; k < KOLUMNYZBIORU; k++)
            suma += tablica[w][k];
        printf("Wiersz %d: suma = %.2lf\n", w, suma);
    }

    suma = 0;
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < KOLUMNYZBIORU; k++)
            suma += tablica[w][k];
    }
    printf("Srednia calego zbioru wynosi %.2f\n", suma/WIERSZEZBIORU);

    float najwiekszy = tablica[0][0];
    for(w = 0; w < wiersze; w++)
    {
        for(k = 0; k < KOLUMNYZBIORU; k++)
        {
            if(tablica[w][k] > najwiekszy)
            najwiekszy = tablica[w][k];
        }

    }
    printf("Najwieksza liczba zbioru: %.2lf\n", najwiekszy);
}