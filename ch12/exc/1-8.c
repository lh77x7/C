// 1-8.c - rozwiazania do cwiczen 1-8 rozdzial 12

/*

1. Przepisz program z listingu 12.4 tak, aby nie korzystał ze zmiennych globalnych.

2. Zużycie paliwa jest zwykle podawane w USA w milach na galon a w Europie w litrach
na 100 km. Oto część programu, który pyta użytkownika o wybór trybu (metryczny 
badź US), a następnie gromadzi dane i wylicza zużycie paliwa:

// pe12-2b.c

#include <stdio.h>
#include "pe12-2a.h"
int main(void){
    int tryb;

    printf("Wybierz: 0 - system metryczny, 1 - system US: ");
    scanf("%d", &tryb);
    while(tryb >= 0)
    {
        wybierz_tryb(tryb);
        pobierz_dane();
        wyswietl_dane();
        printf("Wybierz: 0 - system metryczny, 1 - system US");
        printf("(-1 aby zakonczyc):");
        scanf("%d", &tryb);
    }
    printf("Koniec.\n");
    return 0;
}

Oto przykładowe wyjściowe programu:

    Wybierz: 0 - system metryczny, 1 - system US: 0
    Wprowadz przebyta odleglosc w kilometrach: 600
    Wprowadz zuzyte paliwo w litach: 78.8
    Zuzycie paliwa wynioslo 13.13 litrow na 100 km.
    Wybierz: 0 - system metryczny, 1 - system US (-1 aby zakonczyc): 1
    Wprowadz przebyta odleglosc w milach: 434
    Wprowadz zuzyte paliwo w galonach: 12.7
    Zuzycie paliwa wynioslo 34.2 mil na galon.
    Wybierz: 0 - system metryczny, 1 - system US (-1 aby zakonczyc): 3
    Podano nieprawidlowa wartosc. Wybrano system 1(US).
    Wprowadz przebyta odleglosc w milach: 388
    Wprowadz zuzyte paliwo w galonach: 15.3
    Zuzycie paliwa wynioslo 25.4 mil na galon.
    Wybierz: 0 - system metryczny, 1 - system US (-1 aby zakonczyc): -1
    Koniec.

Jeśli użytkownik wybierze niewłaściwy tryb, program powinien to skomentować
i użyć ostatnio wybranego trybu. Program powinien działać po dołączeniu
do niego pliku nagłówkowego pe12-2a.h i pliku pe12-2a.c. Plik z kodem źródłowym
powinien definiować trzy zmienne o zasięgu plikowym i łączności wewnętrznej.
Niech jedna reprezentuje tryb, druga dystans, a trzecia zużyte paliwo. 
Funkcja pobierz_dane() ma prosić o dane zgodnie z wybranym trybem i przechowywać
wprowadzone przez użytkownika dane w zmiennych o zasięgu plikowym.
Funkcja wyswietl_dane() niech oblicza o wyświetla zużycie paliwa w oparciu 
o wybrany tryb.

3. Zmodyfikuj ponownie program opisany w ćwiczeniu 2 tak, by używał wyłącznie
zmiennych automatycznych. Niech program posiada taki sam interfejs użytkownika,
to znaczy powinien prosić użytkownika, by wpisał tryb itd. Będziesz musiał
skorzystać jednak z innych wywołań funkcji.

4. Napisz i sprawdź w pętli funkcję, która zwraca ile razy została wywołana.

5. Napisz program, który generuje listę 100 losowych liczb z przedziału
od 1 do 10 w porządku malejącym. (Możesz w tym celu wykorzystać algorytm przedstawiony
w rodziale 11 dla typu int. W tym przypadku po prostu posortuj same liczby).

6. Napisz program, który generuje 1000 losowych liczb z przedziału od 1 do 10.
Nie zachowuj ani nie pokazuj liczb, tylko wyświetl liczbę razy dana liczba została
wybrana. Niech program korzysta z 10 różnych ziaren. Czy liczby te pojawią się
w różnej ilości? Możesz użyć funkcji z tego rodziału albo standardowych funkcji
ANSI C: rand() i srand(), które działają tak jak nasze funkcje. Jest to jeden
ze sposobów, by sprawdzić losowość określonego generatora liczb losowych.

7. Napisz program, który zachowuje się jak modyfikacja listingu 12.13, którą omówiliśmy
po pokazaniu jego wyników. Niech program zwraca następujące wartości:

    Wprowadź liczbe kolejek: wybierz q aby zakonczyc.
    18
    Ile scian i ile kosci?
    6 3
    Oto 18 kolejek rzytow 3 6-sciennymi kostkami:
        12 10 6 9 8 14 8 15 9 14 12 17 11 7 10
    Wprowadz liczbe kolejek; wybierz q aby zakonczyc.
    q

8. Oto fragment programu:

// pe12-8.c

#include <stdio.h>
int * stworz_tablice(int elem, int wart);
void pokaz_tablice(const int tab[], int n);
int main(void){
    int *wt;
    int rozmiar;
    int wartosc;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &rozmiar);
    while(rozmiar > 0)
    {
        printf("Podaj wartosc poczatkowa: ");
        scanf("%d", &wartosc);
        wt = stworz_tablice(rozmiar, wartosc);
        if(wt)
        {
            pokaz_tablice(wt, rozmiar);
            free(wt);
        }
        printf("Podaj liczbe elementow (<1 - koniec): ");
        scanf("%d", &rozmiar);
    }
    printf("Koniec.\n");
    return 0;
}

Uzupełnij program przez udostępnienie definicji funkcji stworz_tablice()
i pokaz_tablice(). Funkcja stworz_tablice() wymaga dwoch argumentow.
Pierwszy z nich jest liczba elementow tablicy liczb calkowitych (int), 
a drugi oznacza wartość, która jest przypisana każdemu z elementów. 
Funkcja używa malloc(), by stworzyć tabelę o odpowiednim rozmiarze, przypisać
każdemu elementowi wskazana wartość i zwrócić wskaźnik do tablicy. Funkcja
pokaz_tablice() wyswietla zawartosc - po osiem liczb w wierszu.

*/

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
int *stworzTablice(int elem, int wart);
void pokazTablice(const int tab[], int n);
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
7 -     DONE
8 -     DONE

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
    printf("Rozwiazanie zad. 7 folder exc 7 - 12.11, 12.12 + naglowek.h\n");
}

void zad8(void){
    int *wt;
    int rozmiar, wartosc;
    printf("Podaj liczbe elementow: ");
    scanf("%d", &rozmiar);
    while(rozmiar > 0)
    {
        printf("Podaj wartosc poczatkowa: ");
        scanf("%d", &wartosc);
        wt = stworzTablice(rozmiar, wartosc);
        if(wt)
        {
            pokazTablice(wt, rozmiar);
            free(wt);
        }
        printf("Podaj liczbe elementow (<1 - koniec): ");
        scanf("%d", &rozmiar);
    }
    printf("Koniec.\n");
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

int *stworzTablice(int elem, int wart){
    int *wsk;
    int i;
    wsk = (int *) malloc (elem * sizeof(int));
    for(i = 0; i < elem; i++){
        wsk[i] = elem;
    }
    return wsk;
}

void pokazTablice(const int tab[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", tab[i]);
        if(i > 0 && i % 7 == 0){
            printf("\n");
        }
    }
    printf("\n");
}