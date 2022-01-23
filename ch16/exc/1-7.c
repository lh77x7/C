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

6. Zmodyfikuj listing 16.13 tak, aby przyporządkował tablice typu struct osoba 
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
#include <time.h>
#include "makro.h"
clock_t clock(void);
void funkcja(double);

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
5 -     NOT DONE!
6 -     NOT DONE!
7 -     NOT DONE!

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

}

void zad7(){

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