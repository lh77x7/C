// 1-7.c - rozwiazania do cwiczen 1-7 rozdzial 15

/*

1. Napisz funkcję, która przetwarza łańcuch binarny na wartość liczbową. Na przykład,
jeśli mamy deklarację
    
    char * wbin = "01001001";

to po przekazaniu zmiennej wbin jako argumentu funkcji zwraca wartość całkowitą 73.

2. Napisz program, który pobiera dwa łańcuchy binarne z wiersza poleceń, 
a następnie wyświetla efekt zastosowania dla każdego z nich operatora -
oraz połączenia ich za pomocą operatorów &, | i ^. Wartości wynikowe powinny
zostać wyświetlane jako łańcuchy binarne.

3. Napisz funkcję, która przyjmuje dwa argumenty typu int, a następnie zwraca
ilość bitów, które są w nim włączone.

4. Napisz funkcję, która przyjmuje dwa argumenty typu int: wartość oraz numer
bitu. Funkcja powinna zwracać zawartość bitu o wskazanym numerze.

5. Napisz funkcję, która "obraca" bity w wartości typu unsigned int o określoną
liczbę miejsc w lewo. Na przykład, wywołanie obroc_l(x, 4) przesunęłoby bity
w wartości x o cztery miejsca w lewo, a bity, które znalazły się poza lewą krawędzią
pojawiłyby się ponownie z prawej strony. Innymi słowy, bit wypchnięty z najbardziej
znaczącego miejsca zostaje umieszczony w miejscu najmniej znaczącym.

6. Zaprojektuj strukturę o polach bitowych przechowujących następujące informacje:

    Typ czcionki: liczba z przedziału od 0 do 255.
    Rozmiar czcionki: liczba z przedziłu od 0 do 127.
    Wyrównanie: liczba z przedziału od 0 do 2 oznaczająca odpowiednio:
    wyrównanie od lewej, środka i prawej
    Wytłuszczenie: wyłączone (0) - włączone (1)
    Kursywa: wyłączona (0) - włączona (1)
    Podkreślenie: wyłączone (0) - włączone (1)

Wykorzystaj zaprojektowana strukturę w programie wyświetlającym parametry czcionki.
Program powinien posiadać działące w pętli menu umożliwiające użytkownikowi
ich modyfikację. Dla przykładu wynik działania programu może wyglądać następująco:

TypRozmiar      Wyrównanie      Wytl.       Kurs.       Podkr.
1  12           lewo            wy          wy          wy
t) zmiana czcionki      r) zmiana rozmiaru      w) zmiana wyrównania
b) przelacz wytluszczenie  i) przelacz kursywe
u) przelacz podkreslenie
k) wyjscie
r
Podaj rozmiar czcionki (0 - 127): 36
TypRozmiar      Wyrównanie      Wytl.       Kurs.       Podkr.
1  36           lewo            wy          wy          wy
t) zmiana czcionki      r) zmiana rozmiaru      w) zmiana wyrównania
b) przelacz Bold        i) przelacz Italic      u) przelacz Underline
k) wyjscie
w
Wybierz wyrownanie:
l) w lewo   s) na srodek    p) w prawo
p
TypRozmiar      Wyrównanie      Wytl.       Kurs.       Podkr.
1  36           prawo           wy          wy          wy
t) zmiana czcionki      r) zmiana rozmiaru      w) zmiana wyrównania
b) przelacz Bold        i) przelacz Italic      u) przelacz Underline
k) wyjscie
i
TypRozmiar      Wyrównanie      Wytl.       Kurs.       Podkr.
1  36           prawo           wy          wl          wy
t) zmiana czcionki      r) zmiana rozmiaru      w) zmiana wyrównania
b) przelacz Bold        i) przelacz Italic      u) przelacz Underline
k) wyjscie
k
Koniec!

Program powinien używać operatora & i odpowiednich masek, aby zapewnić
konwersję danych źródłowych do określonego przedziału.

7. Napisz program o takim samym działaniu jak powyższy program z ćwiczenia 6,
ale tym razem zastosuj zmienne typu unsigned int do przechowywania informacji
o czcionkach. Wykorzystaj do przetwarzania informacji operatory binarne 
zamiast składników bitowych.

*/

#include <stdio.h>

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
int binToDec(char *);
int iloscBitow(int n);
int zawartoscBitu(int, int);
char *doBinar (int n, char *wsk);
void pokazBinar(const char * lan);
void obrocLewo(unsigned int n, int ilosc);

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
6 -     NOT DONE!
7 -     NOT DONE!

*/




void zad1(){
    printf("%d\n", binToDec("01001001"));
}    

void zad2(){
    printf("Patrz rozwiazanie zadania 15.2.c\n");
}

void zad3(){
    
    int n;
    
    printf("Wprowadz liczbe: ");
    scanf("%d", &n);
    printf("%d\n", n);

    printf("Liczba wlaczonych bitow w liczbie %d wynosi %d\n", n, iloscBitow(n));
}

void zad4(){
    
    int n, numer;
    
    printf("Wprowadz liczbe: ");
    scanf("%d", &n);
    printf("Wprowadz numer bitu, ktorego numer chcesz sprawdzic: ");
    scanf("%d", &numer);

    printf("Zawartosc bitu o numerze %d w liczbe %d wynosi: %d\n", numer, n, zawartoscBitu(n, numer));
}

void zad5(){
    
    unsigned int n;
    int ilosc;

    printf("Wprowadz liczbe, ktora chcesz obrocic: ");
    scanf("%d", &n);
    printf("O ile miejsc chcesz przesunac w lewo?");
    scanf("%d", &ilosc);
    obrocLewo(n, ilosc);

}

void zad6(){

}

void zad7(){

}

int binToDec(char *wbin){
    
    int liczba = 0;
    
    while(*wbin != '\0')
    {
        liczba = 2 * liczba + (*wbin++ - '0');
    }

    return liczba;
}

int iloscBitow(int n){
    
    int liczbaBitow = 0;
    int i = 0;
    
    while(i < 32)
    {
        if((01&n) == 1)
        {
            liczbaBitow++;
        }
        n >>= 1;
        i++;        
    }

    return liczbaBitow;
}

int zawartoscBitu(int n, int numer) {

    int zawartoscBitu = 0;
    int i = 0;
    
    while(i < 32)
    {
        if((01 & n) &&  i == numer)
        {
            zawartoscBitu = 1 << numer;
        }
        n >>= 1;
        i++;
    }

    return zawartoscBitu;
}

char * doBinar(int n, char *wsk)
{
    int i;
    static int liczba = 8*sizeof(int);
    for (i=liczba-1; i>=0; i--, n>>=1) {
        wsk[i] = (01 & n) + '0';
    }
    wsk[liczba] = '\0';
    return wsk;
}

// wyswietl lancuch binarny w blokach po 4
void pokazBinar(const char * lan)
{
    int i = 0;
    while (lan[i]) {
        putchar(lan[i]);
        if (++i % 4 == 0 && lan[i]) {
            putchar(' ');
        }
    }
    putchar('\n');
}

void obrocLewo(unsigned int n, int ilosc){

    char bin[32];
    unsigned int temp;

    // pierwsze wyswietlenie
    doBinar(n, bin);
    pokazBinar(bin);

    // tutaj zaczyna sie cala operacja obrocenia w lewo
    temp = n >> (32 - ilosc);
    n <<= ilosc;

    n = n|temp;

    // drugie wyswietlenie - po operacji docelowej funkcji
    doBinar(n, bin);
    pokazBinar(bin);

}