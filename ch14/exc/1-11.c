// 1-11.c - rozwiazania do cwiczen 1-11 rozdzial 14

/*

1. Ponownie wykonaj funkcję z pytania nr 3, ale tym razem niech jej argument będzie
nazwą, a nie numerem miesiąca. (Pamiętaj o funkcji strcmp()).

2. Napisz program, który prosi użytkownika o podanie dnia, miesiąca oraz roku.
Miesiąc może zostać wskazany za pomocą numeru (np. "9"), nazwy ("wrzesien")
lub nazwy skróconej ("wrz"). Program powinien wyswietlic całkowitą liczbę
dni w roku od podania dnia włącznie.

3. Zmodyfikuj program z listingu 14.2 tak, aby wyświetlał on opisy książek
w porządku alfabetycznym (wg tytułu) oraz całkowitą wartość książek.

4. Napisz program, który tworzy szablon struktury o dwóch składnikach zgodnie z 
poniższymi kryteriami:

a) Pierwszym składnikiem jest numer PESEL, a drugim - struktura o trzech składnikach.
Jej pierwszy składnik zawiera imię, drugi - drugie imię, a trzeci - nazwisko.
Utwórz i zainicjuj tablicę złożoną z trzech takich strukutr. 
Program powinien wyświetlać dane w następującej formie:

Jordan, Michael J. -- 65092301159

b) Wyświetlana jest tylko pierwsza litera drugiego imienia wraz z kropką. 
W przypadku, jeśli składnik zawiera drugie imię jest pusty, program nie powinien
wyświetlać ani inicjału (co oczywiste), ani kropki. Algorytm wyświetlania zaimplementuj
w postaci oddzielnej funkcji, probierającej tablicę struktur jako argument.

c) Zmodyfikuj program opisany w punkcie a. tak, aby funkcja wyświetlająca przyjmowała
strukturę, a nie adres tablicy struktur.

5. Napisz program, realizujący następujący przepis:

a) Zdefiniuj zewnętrznie szablon struktur o nazwie daneos, zawierający dwa 
składniki: łańcuch przechowujący imię i łańcuch przechowujący nazwisko.

b) Zdefiniuj zewnętrznie szablon struktur o nazwie student, zawierający trzy 
składniki: strukturę typu daneos, tablicę oceny przechowującą liczby zmiennoprzecinkowe
oraz zmienną przechowującą średnią ocen.

c) W funkcji main() zadeklaruj tablicę złożoną z ROZMIAR (gdzie ROZMIAR = 4) 
struktur typu student i zainicjalizuj składniki typu daneos przy pomocy
dowolnie wybranych imion i nazwisk. Użyj funkcji do wykonywania zadań opisanych
w punktach d, e, f i g.

d) Poproś użytkownika o podanie ocen kolejnych studentów i umieść je w składniku
oceny odpowiednich struktur. Potrzebna do tego celu pętla może znajdować się - zgodnie
z Twoimi preferencjami - w funkcji main() lub w funkcji pobierającej dane.

e) Oblicz średnią ocen dla każdej struktury i przepisz ją odpowiedniemu składnikowi.

f) Wyświetl informacje zawarte w każdej ze struktur.

g) Wyświetl średnią ocen wszystkich studentów.

6. Plik tekstowy zawiera informacje o drużynie koszykarskiej. Każdy z jego 
wierszy ma następujący układ:
    10 Maciej Zielinski 14 10 8 5

Pierwszą pozycją jest numer gracza, należący do przedziału 0-18, drugą
- imię gracza, a trzecią - nazwisko. Zarówno imię, jak i nazwisko składają się 
z jednego słowa. Kolejnymi wartościami są: liczba oddanych rzutów za 2 punkty,
liczba trafień za 2 punkty, liczba asyst oraz liczba fauli.
Plik może zawierać dane z więcej niż jednego meczu, a więc statystyki jednego 
gracza mogą przeplatać się ze statystykami innych graczy. Napisz program, który
pobiera dane z pliku (aż do jego końca) i wczytuje je do tablicy struktur.
Każda struktura powinna opisywać jednego gracza i zawierać składniki przeznaczone
do przechowywania jego imienia, nazwiska, ilości rzutów za 2 punkty, ilości
rzutów trafionych, ilości asyst, ilości fauli (chodzi o całkowite ilości ze wszystkich
meczów) oraz skuteczności (która zostanie obliczona później). Numer gracza może
zostać użyty jako indeks tablicy.

Najprostszym sposobem, aby to osiągnąć, jest przypisanie wszystkich składnikom 
struktury wartości 0, wczytywanie danych liczbowych z pliku do zmiennych
tymczasowych i dodawanie ich do składników odpowiedniej struktury. Po zakończeniu
odczytywania pliku program powinien obliczyć skuteczność każdego gracza 
i zapisać ją w odpowiednim składniku każdej struktury. Skuteczność otrzymujemy
przez podzielenie całkowitej liczby rzutów trafionych przez całkowitą liczbę rzutów
oddanych; powinna być ona wartością zmiennoprzecinkową. Program powinien
wyświetlać zbiorcze statystyki dla każdego gracza oraz dla całej drużyny.

7. Zmodyfikuj listing 14.14 tak, aby w miarę odczytywania kolejnych rekordów
i wyświetlania ich na ekranie, możliwe było usunięcie lub zmiana zawartości 
każdego rekordu. W przypadku usunięcia rekordu w zwolnionym miejscu tablicy powinien
zostać umieszczony następny odczytany rekord. Aby umożliwić zmianę zawartości
pliku, będziesz musiał użyć trybu "r+b" zamiast "a+b". Będziesz również
musiał poświęcić więcej uwagi wskaźnikowi położenia tak, aby dodawane rekordy
nie zamazywały rekordów istniejących. Najrostszym wyjściem jest 
przygotowanie danych w pamięci komputera, a następnie zapisanie ich ostatecznej 
wersji w pliku.

8. Flota linii lotniczych Colossus składa się z jednego samolotu o 12 miejscach.
Samolot ten odbywa jeden rejs dziennie. Napisz program do rezerwacji miejsc
spełniający następujące warunki:

a) Program wykorzystuje tablicę 12 struktur. Każda z nich powinna przechowywać
numer identyfikujący miejsca, znacznik określający, czy miejsce jest wolne,
oraz imię i nazwisko osoby, która dokonała rezerwacji.

b) Program wyświetla poniższe menu:

    Aby wybrac opcje, wpisz jej oznaczenie literowe:
    a) Pokaz liczbe pustych miejsc
    b) Pokaz liste pustych miejsc
    c) Pokaz alfabetyczna liczbe miejsc
    d) Zarezerwuj miejsce dla klienta
    e) Usun rezerwacje miejsca
    f) Koniec

c) Program wykonuje czynnosci zapowiedziane w menu. Opcje d) i e) wymagają podania 
dodatkowych danych: każda z nich powinna umożliwić przerwanie wpisywania.

d) Po wykonaniu jednej z funkcji program powinien ponownie wyświetlić menu 
(nie dotyczy opcji f).

e) Informacje o rezerwacjach są przechowywane w pliku.

9. Linie lotnicze Colossus nabyły drugi samolot (o tej samej liczbie miejsc) 
i rozszerzyły swoje usługi do czterech rejsów dziennie (rejsy 102, 311, 444 i 519).
Zmodyfikuj program z poprzedniego ćwiczenia tak, aby obsługiwał on cztery
rejsy. Dodaj nadrzędne menu, pozwalające wybrać jeden z lotów lub zakończyć
program. Po wybraniu rejsu na ekranie powinno pojawić się menu podobne do tego 
z ćwiczenia nr 8. Powinno ono jednak zawierać dodatkową opcję: potwierdzenie
rezerwacji miejsca. Podanto, opcja "koniec" powinna zostać zastąpiona opcją
"powrót do menu głównego". Przez cały czas na ekranie powinien być widoczny
numer lotu, który jest aktualnie modyfikowany. Oprócz tego, lista alfabetyczna
(opcja c) powinna zawierać informację o powtwierdzeniu rezerwacji dla każdego z miejsc.

10. Napisz program, który realizuje menu za pomocą tablicy wskaźników do funkcji.
Na przykład, wybrane opcji a powodowałoby uruchomienie funkcji wskazanej 
przez pierwszy element tablicy.

11. Napisz funkcje przeksztalc(), która pobiera cztery argumenty: nazwę tablicy
źródłowej zawierającej dane typu double, nazwę docelowej tablicy typu double, 
zmienną typu int określającą liczbę elementów tablicy oraz nazwę funkcji (albo
odpowiednio wskaźnik do funkcji). Funkcja przeksztalc() powinna zastosować
podobną funkcję do każdego elementu w tablicy źródłowej, umieszczając rezultaty
w docelowej tablicy. Dla przykładu wywołanie:

    przeksztalc(zrodlo, cel, 100, sin);

powinno wstawić do cel[0] wartość zwróconą przez funkcję sin(zrodlo[0]),
itd. Sprawdź jak zachowuje się ta funkcja w prawdziwym programie wywołującym
funkcję przeksztalc() czterokrotnie, stosując dwie funkcje z biblioteki math.h 
oraz dwie funkcje Twojego autorstwa jako argumenty kolejnych wywołań funkcji
przeksztalc().

*/

#include <stdio.h>
#include <string.h>

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
#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 100 // maksymalna liczba ksiazek

int main(void){
    int choice;

    printf("Podaj liczbe od 1-11(q konczy): ");
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
        default:
            break;
        }
        printf("Podaj liczbe od 1-11 (q konczy): ");
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
8 -     NOT DONE!
9 -     NOT DONE!
10 -    NOT DONE!
11 -    NOT DONE!

*/

void zad1(){
    printf("Patrz rozwiazanie zadania 14.1.c\n");
}    

void zad2(){
    printf("Patrz rozwiazanie zadania 14.2.c\n");
}

void zad3(){
    struct ksiazka{
        char tytul[MAXTYT];
        char autor[MAXAUT];
        float wartosc;
    };
    struct ksiazka bibl[MAXKS]; // tablica struktur typu ksiazka
    struct ksiazka temp; // tablica struktur tymczasowa
    float suma = 0;
    int licznik = 0;
    int index;
    getchar(); // przechwytywania znaku
    printf("Podaj tytul ksiazki.\n");
    printf("Aby zakonczyc, wcisnij [ENTER] na poczatku wiersza.\n");
    while(licznik < MAXKS && gets(bibl[licznik].tytul) != NULL && bibl[licznik].tytul[0] !='\0'){
        printf("Teraz podaj autora.\n");
        gets(bibl[licznik].autor);
        printf("Teraz podaj wartosc.\n");
        scanf("%f", &bibl[licznik++].wartosc);
        while(getchar() != '\n')    // czysci wiersz wejsciowy
            continue;
        if(licznik < MAXKS)
        printf("Podaj kolejny tytul.\n");
    }
    // przed sortowaniem
    printf("Oto lista Twoich ksiazek:\n");
    for(index = 0; index < licznik; index++)
    printf("%s, autor: %s, cena: %.2f zl\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
    
    // sortowanie 
    for(index = 1; index < licznik; index++) {
        for(int i = 0; i < licznik - index; i++)
        {
            // w ifie podajesz ktora czesc struktury sortujesz 
            if(strcmp(bibl[i].tytul, bibl[i+1].tytul) > 0)
            {
                temp = bibl[i];
                bibl[i] = bibl[i + 1];
                bibl[i + 1] = temp;
            }
        }
    }

    // po sortowaniu
    printf("-----------------------------------------------\n");
    printf("Oto lista Twoich ksiazek posortowana wg tytulu:\n");
    for(index = 0; index < licznik; index++) {
        printf("%s, autor: %s, cena: %.2f zl\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
        suma += bibl[index].wartosc;
    }
    printf("Suma wartosci ksiazek: %.2f\n", suma);
    printf("-----------------------------------------------\n");
    
}

void zad4(){
    printf("Patrz rozwiazanie zadania 14.4.c oraz 14.4c.c\n");
}

void zad5(){
    printf("Patrz rozwiazanie zadania 14.5.c\n");
}

void zad6(){
    printf("Patrz rozwiazanie zadania 14.6.c\n");
}

void zad7(){
    printf("Patrz rozwiazanie zadania 14.7.c\n");
}

void zad8(){
    printf("Patrz rozwiazanie zadania 14.8.c\n");
}

void zad9(){
    printf("Patrz rozwiazanie zadania 14.9.c\n");
}

void zad10(){
    printf("Patrz rozwiazanie zadania 14.10.c\n");
}

void zad11(){
    printf("Patrz rozwiazanie zadania 14.11.c\n");
}