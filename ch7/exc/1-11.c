// 1-11.c - rozwiązania zadań z rozdziału 7

/*

1. Napisz program, który odczytuje dane wejściowe aż do napotkania znaku #,
a następnie wyświetla informację o liczbie odczytywanych odstępów, znaków
nowej linii i wszystkich innych znaków.

2. Napisz program, który odczytuje dane wejścioweg aż do napotkania znaku #,
a następnie wyświetla każdy wpisany znak wraz z jego dziesiętnym kodem ASCII.
W jednym wierszu powinno znajdować się osiem par znak-kod. Propozycja:
użyj licznika znaków i operatora modulo (%) do wyświetlania znaku nowej
linii w co ósmym cyklu pętli.

3. Napisz program, który pobiera liczby całkowite do momentu wpisania przez 
użytkownika cyfry 0. Po zakończeniu wczytywanych danych wejściowych program
powinien wyświetlać ilość wpisywanych liczb parzystych (wyłączeniem zera) 
i ich średnia wartość oraz ilość wpisywanych liczb nieparzystych i ich średnią
wartość.

4. Korzystając z instrukcji if else, napisz program, który odczytuje dane 
wejściowe do znaku #, zastępuje każdą kropkę wykrzyknikiem, a każdy wykrzynik 
- dwoma wykrzynikami, oraz wyświetla liczbę zamian, jaką wykonał.

5. Wykonaj ponownie ćwiczenia 3, korzystając z instrukcji switch.

6. Napisz program, który odczytuje dane wejściowe aż do pojawienia się znaku #,
a następnie wyświetla informacje o ilości powtórzeń ciągu ot.

    UWAGA.
    Program będzie musiał przechowywać wartość zarówno poprzedniego, jak 
    i bieżącego znaku. Przetestuj program przy pomocy następujących danych
    wejściowych: "Wlazl kotek na plotek i mruga."

7. Napisz program, który pobiera liczbę przepracowanych godzin w tygodniu, a następnie
wyświetla wynagrodzenie brutto, podatek oraz wynagrodzenie netto.
Przyjmij następujące wartości:

a) podstawowe wynagrodzenie - 40 zł/godz.

b) nadgodziny (powyżej 40 godzin w tygodniu) = 150 % podstawowego wynagrodzenia

c) podatek 15 % dla pierwszych 1200 zł
           20 % dla kolejnych 600 zł
           25 % dla reszty wynagrodzenia
Użyj stałych #define i nie przejmuj się, że przykład nie przestaje do aktualnych
przepisów podatkowych.

8. Zmień założenie a. z ćwiczenia 6 tak, aby program wyświetlał menu pozwalające
wybrać stawkę wynagrodzenia (zastosuj instrukcję switch). Po uruchomieniu program
powinien wyświetlać coś w tym rodzaju:
    ***************************************************************
    Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:
    1) 35 zl/godz.              2) 37 zl/godz.
    3) 40 zl/godz.              4) 45 zl/godz.
    5) wyjscie
    ***************************************************************

W przypadku wybrania opcji od 1 do 4, program powinien poprosic o podanie liczby
przepracowanych godzin. Po wyświetleniu wyników, program powinien wrócić do menu.
W przypadku wpisania wartości innej niż cyfry z przedziału 1 do 5, program 
powinien przypomnieć użytkownikowi o dostępnych opcjach, a następnie wrócić
do menu. Stawki wynagrodzenia i podatku przedstaw za pomocą stałych #define.

9. Napisz program, który pobiera liczbę całkowitą, po czym wyświetla wszystkie
liczby pierwsze mniejsze lub równe tej liczbie.

10. Amerykańska skala podatkowa z roku 1988 była jedyną z najprostszych w ostatnich
czasach. Składała się z czterech kategorii, z których każda zawierała dwie stawki.
Oto jej podsumowanie:

Kategoria                           Podatek
Stan wolny                          15 % dochodu dla 17850 $ plus 28 % reszty
Głowa rodziny                       15 % dochodu dla 23900 $ plus 28 % reszty
Małożeństwo, rozliczane wspólnie    15 % dochodu dla 29750 $ plus 28 % reszty
Małożeństwo, rozliczenie osobne     15 % dochodu dla 14875 $ plus 28 % reszty

Na przykład, osoba stanu wolnego, która osiągnęła dochód w wysokości 20 000 dolarów,
jest winna państwu 0.15 * 17 8500 + 0.28 * (20 000 $ - 17 850 $). 
Napisz program, który pobiera kategorię i dochód podlegający opodatkowaniu, a następnie
oblicza wysokość kwoty podatku. Użyj pętli tak, aby użytkownik mógł obliczyć
podatek dla kilku różnych przypadków w czasie jednej sesji z programem.

11. Firma ABC Wysyła Warzyw sprzedaje arbuzy po 1,25 zł za kilogram, buraki
po 0,65 zł za kg i cebulę po 0,89 zł za kg. Zamówienia o wartości powyżej
100 złotych premiowane są 5 % rabatem naliczanym przed dodaniem kosztów przesyłki.
Koszt przesyłki o wadze nieprzekraczającej 5 kg wynosi 3.50 zł, przesyłki 
o wadze większej niż 5 kg, ale mniejszej od 20 kg wynosi 10 zł, zaś przesyłka
towarów o wadze powyżej 20 kg kosztuje 8 zł plus 10 gr za każdy kilogram.

Napisz program, wprowadzający polecenia użytkownika przy pomocy instrukcji
pętli z instrukcji switch. Niech naciśnięcie klawisza A powoduje przejście
do wprowadzenia zamówionej ilości arbuzów, B - zamówionej ilości buraków, 
zaś C - cebuli. Po naciśnięciu K program kończy przyjmowanie zamówienia.
Powinien wtedy wyliczyć wszystkie opłaty, rabat, koszt przesyłki oraz sumę
płatności oraz wyświetlić informację o zamówieniu: cenę jednostkową za kilogram,
ilość zamówionych warzyw oraz wartość zamówienia dla każdego z zamówionych
towarów, wartość całości zamówienia, ewentualną wysokość przysługującego rabatu,
koszt przesyłki oraz całkowity koszt zamówienia.

*/

#include <stdio.h>
#include <stdlib.h>  // potrzebuje malloc(), free()
#include <stdbool.h> // potrzebuje bool
#define KONIEC '#'
#define PODSTAWA 40
#define STAWKA1 35
#define STAWKA2 37
#define STAWKA3 40
#define STAWKA4 45
#define NADGODZINY 1.5 * PODSTAWA
#define PODATEK1 0.15 * 1200
#define PODATEK2 0.20 * 600
#define PODATEK3 0.2
#define STALAPODATKOWA 0.15 
#define STALAPODATKOWA2 0.28
#define ARBUZ 1.25
#define BURAK 0.65
#define CEBULA 0.89
#define RABAT 0.05
#define KOSZTPRZESYLKI1 3.50
#define KOSZTPRZESYLKI2 10
#define KOSZTPRZESYLKI3 8 

// deklaracje funkcji
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
void menu();
void obliczArbuz();
void obliczBurak();
void obliczCebula();
void podsumowanie();
void wyswietlanie();
void sito(bool *, unsigned int n);

// zmienne globalne dla zad. 12
char ch;
float oplata, oplataArbuz, oplataBurak, oplataCebula;
float wagaArbuz, wagaBurak, wagaCebula;
float rabat, kosztPrzesylki, waga;

// program główny
int main(void){
    int choice;

    printf("Podaj liczbe od 1-12 (znak nieliczbowy konczy): ");
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
        default:
            printf("Wybierz liczbe z zakresu 1-12.\n");
            break;
        }
        printf("Podaj liczbe od 1-12 (znak nieliczbowy konczy): ");
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

*/

// definicje funkcji

void zad1(){
    int ch;
    int licznikodstepow = 0, liczniknowejlini = 0, licznikinne = 0;
    while((ch = getchar()) != KONIEC){
        if (ch == ' ') licznikodstepow++;
        if (ch == '\n') liczniknowejlini++;
        else 
            licznikinne++;
    }
    printf("W zdaniu jest %d odstepow, %d znakow nowej lini i %d innych znakow.\n",
    licznikodstepow, liczniknowejlini, licznikinne);
}

void zad2(){
    int ch, licznik = 0;
    while((ch = getchar()) != KONIEC){
        if(licznik++%8){
            printf("%c:%d ", ch, ch);
        }
        else
            printf("\n");
    }
}

void zad3(){
    int liczbyparzyste = 0, liczbynieparzyste = 0, liczba = 0;
    float sumaparzystych = 0, sumanieparzystych = 0;
    scanf("%d", &liczba);
    while(liczba != 0){
        if(liczba%2){
            liczbynieparzyste++;
            sumanieparzystych += liczba;
        } 
        else{
            liczbyparzyste++;
            sumaparzystych += liczba;
        } 
        scanf("%d", &liczba);
    }
    printf("parzyste: %d, nieparzyste: %d\n", liczbyparzyste, liczbynieparzyste);
    printf("sred. parzystych: %.2f, sred. nieparzystych: %.2f\n", sumaparzystych/liczbyparzyste, sumanieparzystych/liczbynieparzyste);
}

void zad4(){
    int ch, licznik = 0;
    while((ch = getchar()) != KONIEC){
        if(ch == '.'){
            putchar('!'); 
            licznik++;
        } 
        if(ch == '!'){
            putchar('!');
            putchar('!');
            licznik++;
        }
        else {
            putchar(ch);
        }        
    }
    printf("\nLiczba zmian: %d\n", licznik);
}

void zad5(){
    int liczbyparzyste = 0, liczbynieparzyste = 0, liczba = 0;
    float sumaparzystych = 0, sumanieparzystych = 0;
    scanf("%d", &liczba);
    while(liczba != 0){
        int a = liczba%2;
        switch (a)
        {
        case 1:
            liczbynieparzyste++;
            sumanieparzystych += liczba;
            break;

        default:
            liczbyparzyste++;
            sumaparzystych += liczba;
            break;
        }

    scanf("%d", &liczba);
    }

    printf("parzyste: %d, nieparzyste: %d\n", liczbyparzyste, liczbynieparzyste);
    printf("sred. parzystych: %.2f, sred. nieparzystych: %.2f\n", sumaparzystych/liczbyparzyste, sumanieparzystych/liczbynieparzyste);
}

void zad6(){
    int licznik = 0;
    char ch;

    while((ch = getchar()) != KONIEC){
        if(ch == 'o'){
            ch = getchar();
            if(ch == 't')
                licznik++;
        }   
    }
    printf("\nCiag \"ot\" wystapil: %d razy\n", licznik);
}

void zad7(){
    float godziny, wynagrodzenie, podatek;
    printf("Podaj liczbe przepracowanych godzin w miesiacu: ");
    scanf("%f", &godziny);
    if (godziny > 200) {
        printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
    } else {
        if(godziny < 160){
        wynagrodzenie = godziny * PODSTAWA;
        podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
        } 
        else {
        wynagrodzenie = godziny * PODSTAWA + (godziny - 160) * NADGODZINY;
        podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
        }
        printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
    }
}

void zad8(){
    char ch;
    int godziny;
    float wynagrodzenie, podatek;
    while((ch = getchar()) != '5'){
        switch (ch)
        {
            case '1':
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA1;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA1 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            case '2': 
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA2;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA2 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            case '3':
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA3;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA3 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            case '4':
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA4;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA4 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            default:
                printf("********************************************\n");
                printf("Podaj liczbe Twojego wynagrodzenia lub opcji\n");
                printf("1) 35 zl/godz.      2) 37 zl/godz.\n");
                printf("3) 40 zl/godz.      4) 45 zl/godz.\n");
                printf("5) wyjscie\n");
                printf("********************************************\n");
                break;
        }
    }    
}

void zad9(){
    int n;
    bool *tab;

    printf("Podaj liczba: "); scanf("%d", &n);
    tab = (bool *) malloc((n+1) *sizeof(bool));

    for(int i = 2; i <= n; i++) // zerowanie tablicy
        tab[i] = 0;
    sito(tab, n);   // przeslanie liczb

    printf("Liczby z przedzialu od [2..%d]: ", n);

    for(int i = 2; i <= n; i++)
        if(!tab[i])
            printf("%d ",i);
    printf("\n");
    free(tab); 
}

void zad10(){
    char ch;
    float wynagrodzenie, podatek;
    while((ch = getchar()) != '5'){
        switch (ch)
        {
            case '1':
                printf("Podaj wynagrodzenie: "); scanf("%f", &wynagrodzenie);
                if(wynagrodzenie > 17850){
                    podatek = STALAPODATKOWA * 17850 + (wynagrodzenie - 17850) * STALAPODATKOWA2;
                }
                else {
                    podatek = STALAPODATKOWA * wynagrodzenie;
                }
                printf("Podatek: %.2f $\n", podatek);
                break;
            case '2': 
                printf("Podaj wynagrodzenie: "); scanf("%f", &wynagrodzenie);
                if(wynagrodzenie > 23900){
                    podatek = STALAPODATKOWA * 23900 + (wynagrodzenie - 23900) * STALAPODATKOWA2;
                }
                else {
                    podatek = STALAPODATKOWA * wynagrodzenie;
                }
                printf("Podatek: %.2f $\n", podatek);
                break;
            case '3':
                printf("Podaj wynagrodzenie: "); scanf("%f", &wynagrodzenie);
                if(wynagrodzenie > 29750){
                    podatek = STALAPODATKOWA * 29750 + (wynagrodzenie - 29750) * STALAPODATKOWA2;
                }
                else {
                    podatek = STALAPODATKOWA * wynagrodzenie;
                }
                printf("Podatek: %.2f $\n", podatek);
                break;
            case '4':
                printf("Podaj wynagrodzenie: "); scanf("%f", &wynagrodzenie);
                if(wynagrodzenie > 14875){
                    podatek = STALAPODATKOWA * 14875 + (wynagrodzenie - 14875) * STALAPODATKOWA2;
                }
                else {
                    podatek = STALAPODATKOWA * wynagrodzenie;
                }
                printf("Podatek: %.2f $\n", podatek);
                break;
            default:
                printf("**************************************************\n");
                printf("Wybierz kategorie\n");
                printf("1) stan wolny               2) glowa rodziny\n");
                printf("3) malozenstwo, wspolnie    4) malozenstwo, osobno\n");
                printf("5) wyjscie\n");
                printf("**************************************************\n");
                break;
        }
    }    
}

void zad11(){
    char ch;
    float oplata, oplataArbuz, oplataBurak, oplataCebula;
    float wagaArbuz, wagaBurak, wagaCebula;
    float rabat, kosztPrzesylki, waga;
    
    while((ch = getchar()) != 'K'){
        switch (ch)
        {
            case 'A':
            case 'a':
                printf("Ile kilogramow arbuza zamowic? \n"); scanf("%f", &wagaArbuz);
                // wagaArbuz
                oplataArbuz = wagaArbuz * ARBUZ;

                break;
            case 'B':
            case 'b': 
                printf("Ile kilogramow burakow zamowic? \n"); scanf("%f", &wagaBurak);
                // wagaBurak
                oplataBurak = wagaBurak * BURAK;

                break;
            case 'C':
            case 'c':
                printf("Ile kilogramow cebuli zamowic? \n"); scanf("%f", &wagaCebula);
                // wagaCebula
                oplataCebula = wagaCebula * CEBULA;

                break;
            default:
                printf("********************************************\n");
                printf("Wybierz kategorie\n");
                printf("A) arbuzy               B) buraki\n");
                printf("C) cebula               K) koniec zamowienia\n");
                printf("********************************************\n");
                break;
        }
    }
    // podsumowanie zamowienia

    // obliczanie wagi
    // instrukcja warunkowa
    /*

    000 - 0 kg dla arbuza, 0 kg dla buraka, 0 kg dla cebuli
    001 - 0 kg dla arbuza, 0 kg dla buraka, nie 0 kg dla cebuli 
    010 - 0 kg dla arbuza, nie 0 kg dla buraka, 0 kg dla cebuli
    011 - 0 kg dla arbuza, nie 0 kg dla buraka, nie 0 kg dla cebuli
    100 - nie 0 kg dla arbuza, 0 kg dla buraka, 0 kg dla cebuli
    101 - nie 0 kg dla arbuza, 0 kg dla buraka, nie zero kg dla cebuli
    110 - nie 0 kg dla arbuza, nie 0 kg dla buraka, 0 kg dla cebuli
    111 - nie 0 kg dla arbuza, nie 0 kg dla buraka, nie 0 kg dla cebuli

    */
    // waga
    // 000 - 0 0 0
    if(wagaArbuz == 0 && wagaBurak == 0 && wagaCebula == 0){
        waga = 0;
        oplata = 0;
        rabat = 0;
        kosztPrzesylki = 0;
    }
    // 001 - 0 0 (nie 0)
    if((wagaArbuz == 0 && wagaBurak == 0) || wagaCebula != 0){
        waga = wagaCebula;
        oplata = wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }
    // 010 - 0 (nie 0) 0
    if((wagaArbuz == 0 && wagaCebula == 0) || wagaBurak != 0){
        waga = wagaBurak;
        oplata = wagaBurak * BURAK;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 011
    if((wagaBurak != 0 && wagaCebula != 0) || wagaArbuz == 0){
        waga = wagaBurak + wagaCebula;
        oplata = wagaBurak * BURAK + wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 100 - (nie 0) 0 0
    if((wagaBurak == 0 && wagaCebula == 0) || wagaArbuz != 0){
        waga = wagaArbuz;
        oplata = wagaArbuz * ARBUZ;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    } 

    // 101 - (nie 0) 0 (nie 0)
    if((wagaArbuz != 0 && wagaCebula != 0) || wagaBurak == 0){
        waga = wagaArbuz + wagaCebula;
        oplata = wagaArbuz * ARBUZ + wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 110 - (nie 0) (nie 0) 0
    if((wagaArbuz != 0 && wagaBurak != 0) || wagaCebula == 0){
        waga = wagaArbuz + wagaBurak;
        oplata = wagaArbuz * ARBUZ + wagaBurak * BURAK;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 111 - (nie 0) (nie 0) (nie 0)
    if((wagaBurak != 0 && wagaCebula != 0) && wagaArbuz != 0){
        waga = wagaArbuz + wagaBurak + wagaCebula;
        oplata = wagaArbuz * ARBUZ + wagaBurak * BURAK + wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // wyswietlanie 
    printf("Waga razem: %.2f\n", waga);
    if(wagaArbuz != 0) printf("Oplata arbuz: %.2f\n", wagaArbuz*ARBUZ);
    else printf("Oplata arbuz: 0\n");
    if(wagaBurak != 0 ) printf("Oplata burak: %.2f\n", wagaBurak*BURAK);
    else printf("Oplata burak: 0\n");
    if(wagaCebula != 0) printf("Oplata cebula: %.2f\n", wagaCebula*CEBULA);
    else printf("Oplata cebula: 0\n");
    printf("Oplata razem: %.2f\n", oplata);
    if(oplata > 100) printf("Rabat: %.2f\n", rabat);
    else printf("Rabat: 0\n");
    printf("Koszt przesylki: %.2f\n", kosztPrzesylki);
}

// zad11 wykonane modularnie czyli podzielenie programu ze względu 
// na funkcje w nim realizowane

void zad12(){    
    while((ch = getchar()) != 'K'){
        switch (ch)
        {
            case 'A':
            case 'a':
                obliczArbuz();
                break;
            case 'B':
            case 'b': 
                obliczBurak();
                break;
            case 'C':
            case 'c':
                obliczCebula();                
                break;
            default:
                menu();                
                break;
        }
    }
    // podsumowanie
    podsumowanie();
    
    // wyswietlanie 
    wyswietlanie();
}

// udostepniam menu wyboru
void menu(){
printf("********************************************\n");
printf("Wybierz kategorie\n");
printf("A) arbuzy               B) buraki\n");
printf("C) cebula               K) koniec zamowienia\n");
printf("********************************************\n");
}

// wykonuje obliczenia dla Arbuza
void obliczArbuz(){
printf("Ile kilogramow arbuza zamowic? \n"); scanf("%f", &wagaArbuz);
// wagaArbuz
oplataArbuz = wagaArbuz * ARBUZ;
}

// wykonuje obliczenia dla Buraka
void obliczBurak(){
printf("Ile kilogramow burakow zamowic? \n"); scanf("%f", &wagaBurak);
// wagaBurak
oplataBurak = wagaBurak * BURAK;
}

// wykonuje obliczenia dla Cebuli
void obliczCebula(){
printf("Ile kilogramow cebuli zamowic? \n"); scanf("%f", &wagaCebula);
// wagaCebula
oplataCebula = wagaCebula * CEBULA;
}

// obliczam koszty na podstawie wag
void podsumowanie(){
/*
    000 - 0 kg dla arbuza, 0 kg dla buraka, 0 kg dla cebuli
    001 - 0 kg dla arbuza, 0 kg dla buraka, nie 0 kg dla cebuli 
    010 - 0 kg dla arbuza, nie 0 kg dla buraka, 0 kg dla cebuli
    011 - 0 kg dla arbuza, nie 0 kg dla buraka, nie 0 kg dla cebuli
    100 - nie 0 kg dla arbuza, 0 kg dla buraka, 0 kg dla cebuli
    101 - nie 0 kg dla arbuza, 0 kg dla buraka, nie zero kg dla cebuli
    110 - nie 0 kg dla arbuza, nie 0 kg dla buraka, 0 kg dla cebuli
    111 - nie 0 kg dla arbuza, nie 0 kg dla buraka, nie 0 kg dla cebuli
*/
// waga
// 000 - 0 0 0
    if(wagaArbuz == 0 && wagaBurak == 0 && wagaCebula == 0){
        waga = 0;
        oplata = 0;
        rabat = 0;
        kosztPrzesylki = 0;
    }
    // 001 - 0 0 (nie 0)
    if((wagaArbuz == 0 && wagaBurak == 0) || wagaCebula != 0){
        waga = wagaCebula;
        oplata = wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }
    // 010 - 0 (nie 0) 0
    if((wagaArbuz == 0 && wagaCebula == 0) || wagaBurak != 0){
        waga = wagaBurak;
        oplata = wagaBurak * BURAK;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 011
    if((wagaBurak != 0 && wagaCebula != 0) || wagaArbuz == 0){
        waga = wagaBurak + wagaCebula;
        oplata = wagaBurak * BURAK + wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 100 - (nie 0) 0 0
    if((wagaBurak == 0 && wagaCebula == 0) || wagaArbuz != 0){
        waga = wagaArbuz;
        oplata = wagaArbuz * ARBUZ;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    } 

    // 101 - (nie 0) 0 (nie 0)
    if((wagaArbuz != 0 && wagaCebula != 0) || wagaBurak == 0){
        waga = wagaArbuz + wagaCebula;
        oplata = wagaArbuz * ARBUZ + wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 110 - (nie 0) (nie 0) 0
    if((wagaArbuz != 0 && wagaBurak != 0) || wagaCebula == 0){
        waga = wagaArbuz + wagaBurak;
        oplata = wagaArbuz * ARBUZ + wagaBurak * BURAK;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }

    // 111 - (nie 0) (nie 0) (nie 0)
    if((wagaBurak != 0 && wagaCebula != 0) && wagaArbuz != 0){
        waga = wagaArbuz + wagaBurak + wagaCebula;
        oplata = wagaArbuz * ARBUZ + wagaBurak * BURAK + wagaCebula * CEBULA;
        if(oplata > 100) {
            rabat = RABAT * oplata;
        }
        if(waga < 5) {
            kosztPrzesylki = KOSZTPRZESYLKI1;
        }
        if(waga > 5 && waga < 20){
            kosztPrzesylki = KOSZTPRZESYLKI2;
        }
        if(waga > 20){
            kosztPrzesylki = KOSZTPRZESYLKI3 + (waga - 20) * 0.1;
        }
    }
}

// wyswietlam wyniki
void wyswietlanie(){
printf("Waga razem: %.2f\n", waga);
if(wagaArbuz != 0) printf("Oplata arbuz: %.2f\n", wagaArbuz*ARBUZ);
else printf("Oplata arbuz: 0\n");
if(wagaBurak != 0 ) printf("Oplata burak: %.2f\n", wagaBurak*BURAK);
else printf("Oplata burak: 0\n");
if(wagaCebula != 0) printf("Oplata cebula: %.2f\n", wagaCebula*CEBULA);
else printf("Oplata cebula: 0\n");
printf("Oplata razem: %.2f\n", oplata);
if(oplata > 100) printf("Rabat: %.2f\n", rabat);
else printf("Rabat: 0\n");
printf("Koszt przesylki: %.2f\n", kosztPrzesylki);
}

void sito(bool *tab, unsigned int n){
    for(int i = 2; i*i <= n; i++) // sprawszam liczby do pierwiastka z n
    {
        if(!tab[i]) // jesli jest pierwsza
                for(int j = i*i; j <= n; j += i) // okreslenie wielokrotnosci liczby pierwszej
            tab[j] = 1; // ustawienie wartosci na 1
    }
}