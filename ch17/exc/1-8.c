// 1-8.c - rozwiazania do cwiczen 1-8 rozdzial 17

/*

1. Zmodyfikuj listing 17.2 tak, aby wyświetlał on listę filmów zarówno w kolejności
rosnącej, jak i malejącej. Można to osiągnąć przez taka zmienę definicji listy
łączonej, aby możliwe było poruszanie się po niej w obu kierunkach, lub przez 
użycie rekurencji.

2. Załóżmy, że plik lista.h (patrz listing 17.3) zawiera następującą definicję listy:

    typedef struct lista
    {
        Wezel *glowny;      // wskazuje na początek listy 
        Wezel *koniec;      // wskazuje na koniec listy
    } Lista;

Zmień plik źródłowy lista.c (patrz listing 17.5) tak, aby pasował on do tej definicji
i wypróbuj otrzymany kod w programie filmy3.c (patrz listing 17.4).

3. Załóżmy, że plik lista.h (patrz listing 17.3) zawiera następującą definicję listy:

    #define MAXROZM 100
    typedef struct lista
    {
        Pozycja wpisy[MAXROZM];     // tablica pozycji
        int Pozycje;                // liczba pozycji w liście
    } Lista;

Zmień plik źródłowy porady.c (patrz listing 17.5) tak, aby pasował on do tej definicji
i wypróbuj otrzymany kod w programie filmy3.c (patrz listing 17.4).

4. Zmień program porady.c (patrz listing 17.9) tak, aby symulował on punkt porad 
o dwóch okienkach i dwóch kolejkach.

5. Napisz program, który pozwala wpisać łańcuch, kładzie na stosie jego kolejne znaki
(patrz pytanie sprawdzajace nr 5), a następnie zdejmuje je jeden po drugim 
i wyświetla. W efekcie łańcuch zostaje wyświetlony w odwrotnej kolejności.

6. Napisz funkcję, która przyjmuje trzy argumenty: nazwę uporządkowanej tablicy 
liczb całkowitych, liczbę elementów w tablicy oraz liczbę całkowitą, która ma 
zostać znaleziona. Funkcja zwraca 1, jeśli liczba znajduje się w tablicy, a w 
przeciwnym wypadku 0. Funkcja powinna korzystać z metody wyszukiwania dwudzielnego.

7. Napisz program, który otwiera i odczytuje plik tekstowy, notując liczbę 
wystąpień poszczególnych słów. Skorzystaj z drzewa binarnego poszerzonego o 
możliwość przechowywania oprócz samego słowa także liczby razy, jaką zostało ono
napotkane. Po odczytaniu pliku program wyświetla menu z trzema opcjami. Pierwszą
z nich jest wyświetlanie listy wszystkich słów wraz z liczbę tych wystąpień.
Drugą opcją jest wyświetlanie liczby wystąpień zadanego słowa. Wybranie
trzeciej opcji powoduje zakończenie programu.

8. Zmodyfikuj program Klub Zwierząt Domowych tak, aby wszystkie zwierzęta o tym
samym imieniu były przechowywane w liście łączonej "podłączonej" do tego samego
węzła w drzewie. Jeśli użytkownik chce znaleźć zwierzę, program prosi o podanie
jego imienia, a następnie wyświetla wszystkich członków klubu o tym imieniu
(wraz z nazwami gatunków).

*/

#include <stdio.h>

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
        }
        printf("Podaj liczbe od 1-8 (q konczy): ");
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
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!

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

}

void zad7(){

}

void zad8(){

}