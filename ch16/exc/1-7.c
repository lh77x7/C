// 1-7.c - rozwiazania do cwiczen 1-7 rozdzial 16

/*

1. Zacznij opracowywać plik nagłówkowy zawierający definicje makr, które
będziesz wykorzystywał w swoich programach.

2. Średnią harmoniczną dwóch liczb otrzymujemy przez obliczenie średniej
arytmetycznej ich odwrotności i odwrócenie wyniku. Za pomocą dykrektywy
#define zdefiniuj funkcję-makro wykonującą tę operację. Przetestuj ją 
w prostym programie.

3. Wektor we współrzędnych biegunowych jest opisany przez długość oraz kąt
mierzony od osi x-ów w kierunku przeciwnym do ruchu wskazówek zegara.
Współrzędne kartezjańskie opisują ten sam wektor za pomocą składowych x i y
(patrz rysunek 16.3). Napisz program, który wczytuje długość i kąt (w stopniach)
wektora, a następnie wyświetla wartości jego składowych x i y. Oto potrzebne
równania:
    x = r cos A
    y = r sin A

    y *
      * * * /*
      *    / *
      *  r/  *
      *  /A) *
      * * * * * * * * x
      Rys. 16.3

4. Biblioteka ANSI zawiera funkcję clock() o definicji:

    #include <time.h>
    clock_t clock(void);

Typ clock_t zdefiniowano w time.h. Funkcja zwraca czas procesora, podany w jednostkach
zależnych od implementacji. (Jeśli czas procesora jest niedostępny albo nie może 
zostać przedstawiony, to funkcja zwraca -1). Jednak makro CLOCKS_PER_SEC, także 
zdefiniowane w time.h określa liczbę jednostek czasu procesora w ciągu sekundy.
Zatem, podzielenie różnicy pomiędzy dwoma wartościami zwróconymi przez funkcję 
clock() przez CLOCKS_PER_SEC daje liczbę sekund, jaka minęła między tymi wywołaniami.
Rzutowanie typów wartości do typu double przed podzieleniem pozwala uzyskać wartość
z dokładnością do ułamków sekundy. Napisz funkcję, która pobiera argument double
reprezentujący żądany czas opóźnienia, a następnie wykonuje pętlę, aż minie określony
czas. Napisz prosty program, który korzysta z tej funkcji.

5. Napisz funkcję, która przyjmuje następujące argumenty: nazwę tablicy typu int,
rozmiar tablicy oraz wartość określającą liczbę pozycji do wybrania. Funkcja
w sposób losowy wybiera z tablicy zadaną liczbę elementów i wyświetla je na ekranie.
Żaden z elementów nie może zostać wybrany więcej niż raz (tak jak przy wyborze
liczb w totolotku lub członków zespołu sędziowskiego). Ponadto, jeśli Twoja 
implementacja zawiera funkcję time() (omówioną w rodziale 13 "Klasy zmiennych 
i opracowywanie programu") lub podobną, użyj zwróconej przez nią wartości do 
zainicjalizowania generatora liczb losowych (za pomocą funkcji srand()).
Napisz prosty program testujący funkcję.

6. Zmodyfikuj listing 16.15 tak, aby przyporządkował tablice typu struct osoba 
(zdefiniowaną w tekście po listingu) zamiast tablicy typu double. Użyj mniejszej
liczby elementów i zainicjalizuj je własnoręcznie.

7. Oto fragment programu w którym użyto funkcji o zmiennej liczbe argumentów:

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    void pokaz_tablice(const double tab[], int n);
    double * nowa_tablica(int n, ...);
    int main()
    {
        double *w1;
        double *w2;
        w1 = nowa_tablica(5, 1.2, 2.3, 3.4, 4.5, 5.6);
        w2 = nowa_tablica(4, 100.0, 20.00, 8.08, -1890.0);
        pokaz_tablice(w1, 5);
        pokaz_tablice(w2, 4);
        free(w1);
        free(w2);
        return 0;
    }

Funkcja nowa_tablica() pobiera argument typu int oraz zmienną liczbę argumentów
typu double. Funkcja zwraca wskaźnik do bloku pamięci przydzielonego przez 
malloc(). Argument int wskazuje ile elementów powinno znaleźć się w tablicy
dynamicznej, a wartość double zostają użyte do zainicjalizowania elementów;
pierwsza wartość zostaje przypisana do pierwszego elementu itd. Ukończ ten program
dodając funkcję pokaz_tablica() i nowa_tablica().

*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "makro.h"
#define DL_LAN 30
#define ROZMIAR 30
void wprowadzenie();
void pokaz_strukture();
clock_t clock(void);
void funkcja(double);
void generujtablice(int tab[], int n);
void funkcja(int tab[], int n, int liczba_poz);
void pokaztab(int tab[], int n);
int porownaj(const void * w1, const void * w2);
void pokaz_tablice(const double tab[], int n);
double * nowa_tablica(int n, ...);

struct osoba {
    char imie[DL_LAN];
    char nazwisko[DL_LAN];
};
struct osoba personel[3];

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();

int main(void){
    int choice;

    printf("Podaj liczbe od 1-7(q konczy): ");
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
        default:
            break;
        }
        printf("Podaj liczbe od 1-7 (q konczy): ");
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

*/


void zad1(){
    printf("Przygotowanie pliku makr makro.h\n");
}    

void zad2(){
    printf("Srednia harmoniczna: z 1 i 5: %.2f\n", SREDNIAHARMONICZNA(1,5));
}

void zad3(){
    
    double x, y;
    double r, alfa;
    
    puts("Wprowadz dlugosc wektora: ");
    scanf("%lf", &r);

    puts("Podaj kat nachylenia (w stopniach): ");
    scanf("%lf", &alfa);
    alfa = STOPNIENARADIANY * alfa;

    x = r * cos(alfa);
    y = r * sin(alfa);

    printf("Wyniki:\n");
    printf("x = %.2lf\n", x);
    printf("y = %.2lf\n", y);
}

void zad4(){
    
    double czas;

    printf("Podaj czas:\n");
    scanf("%lf", &czas);

    funkcja(czas);

}

void zad5(){

}

void zad6(){
    
    wprowadzenie();
    qsort(personel, 3, sizeof(struct osoba), porownaj);
    pokaz_strukture();

}

void zad7(){
    double *w1;
    double *w2;
    w1 = nowa_tablica(5, 1.2, 2.3, 3.4, 4.5, 5.6);
    w2 = nowa_tablica(4, 100.0, 20.00, 8.08, -1890.0);
    pokaz_tablice(w1, 5);
    pokaz_tablice(w2, 4);
    free(w1);
    free(w2);
}

void funkcja(double czas){

    int i = 0;

    double x = (double)clock();
    double y = (double)clock();

    while((y - x)/CLOCKS_PER_SEC < czas)
    {
        i++;
        y = (double)clock();
    }
    printf("%f\n", y/CLOCKS_PER_SEC);
    printf("%d\n", i);

}

//porzadkuje w kolejnosci rosnacej
int porownaj(const void * w1, const void *w2)
{
    const struct osoba *ws1 = w1;
    const struct osoba *ws2 = w2;
    int wyn;
    wyn = strcmp(ws1->nazwisko, ws2->nazwisko);
    if(wyn!=0)
        return wyn;
    else
        return strcmp(ws1->imie, ws2->imie);
}

void wprowadzenie(){

    for(int i = 0; i < 3; i++){
        printf("Imie %d: ", i+1);
        scanf("%s", personel[i].imie);
        printf("Nazwisko %d: ", i+1);
        scanf("%s", personel[i].nazwisko);
    }
    printf("Koniec wprowadzania\n");

}

void pokaz_strukture(){
    for(int i = 0; i < 3; i++){
        printf("%s %s\n", personel[i].imie, personel[i].nazwisko);
    }       
}

void pokaz_tablice(const double tab[], int n){
    for(int i = 0; i < n; i++)
    {
        printf("%.2lf ", tab[i]);
    }
    putchar('\n');
}

double * nowa_tablica(int n, ...) {

    double *tab = malloc ((n)*sizeof(double));

    va_list ap;
    int i;
    va_start(ap, n);
    // zainicjalizowanie ap lista argumentów
    for(int i = 0; i < n; i++){ // dostęp do każdego elementu w liście argumentów
        tab[i] = va_arg(ap, double);
    }
    va_end(ap); // czyszczenie

    return tab;
}

void generujtablice(int tab[], int n){

}

void funkcja(int tab[], int n, int liczba_poz){

}

void pokaztab(int tab[], int n){

}
