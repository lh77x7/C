// 1-16.c - rozwiazania do cwiczen 1-16 rozdzial 6

/*

1. Napisz program, który tworzy tablicę 26 elementóww, zapisuje w niej 26 małych
liter, a następnie wyświetla jej zawartość.

2. Użyj pętli zagnieżdżonych, aby uzyskać następujący wzór:

$
$$
$$$
$$$$
$$$$$

3. Użyj pętli zagnieżdżonych, aby uzyskać wzór:

F
FE
FED
FEDC
FEDCB
FEDCBA

Uwaga: jeżli Twój system używa znaków ASCII lub jakiejś innej tablicy kodów liter
w porządku numerycznym, to możesz wykorzystać inną tablicę złożoną z liter alfabetu,
np.:
    char litery[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

Następnie możesz odwołać się do konkretnych liter za pomocą indeksu tablicy;
dla przykładu, litery[0] oznacza wartość 'A' itp.

4. Napisz program, który pobiera od użytkownika wielką literę, a następnie wyświetla
poniższą "piramidę", korzystając z pętli zagnieżdżonych:

        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA

Wzór powinien kończyć się na wpisanym przez użytkownika znaku. Na przykład, poniższy
obraz byłby wynikiem podania litery E.

Wskazówka: do utworzenia rzedów użyj pętli zewnętrznej. Zawrtość poszczególnych
rządów skonstruuj za pomocą trzech pętli wewnętrznych: wyświetlającej początkowe
odstępy, wyświetlającej litery w kolejności rosnącej oraz wyświetlającej litery
w kolejności malejącej. Jeśli Twój system nie używa ASCII albo podobnego układu
reprezentującego litery w ścisłym porządku numerycznym, zwróć uwagę na wskazówki
w ćwiczeniu 3.

5. Napisz program, wyświetlający tabelę. Każdy wiersz tabeli powinien zawierać
liczby całkowitą, jej kwadrat oraz jej sześcian. Dolna i górna granica tabeli powinna
być określana przez użytkownika. Skorzystaj w pętli for.

6. Napisz program, który wczytuje pojedyńcze słowo do tablicy znakowej, a następnie
wyświetla je wspak. Wskazówka: użyj funkcji strlen() do obliczenia indeksu
ostatniego znaku w tablicy (patrz rozdział 4. "Łańcuchy znakowe i formatowanie
wejście/wyjście").

7. Napisz program, który pobiera dwie liczby zmiennoprzecinkowe i wyświetla wartość
ich różnicy podzielonej przez ich iloczyn. Program powinien odczytywać kolejne 
pary danych wejściowych aż do momentu, gdy użytkownik wpisze wartość nie będącą
liczbą.

8. Zmodyfikuj ćwiczenie 7 tak, aby program do obliczenia wyniku wykorzystywał
funkcję.

9. Napisz program, który pobiera dolną lub górną granicę pewnego przedziału liczbowego.
Następnie oblicza sumę wszystkich kwadratów liczb całkowitych z tego przedziału,
począwszy od kwadratu najmniejszej, a skończywszy na kwadracie największej z nich.
Program powinien ponownie pytać o granice przedziału i wyświetlać wynik,
dopóki podane zakresy przedziału nie będą równe, albo górny zakres będzie mniejszy
od dolnego. Poniżej przedstawiono przykład działania takiego programu:

    Podaj dolna i gorna granice przedzialu liczb calkowitych: 5 9
    Suma kwadratow od 25 do 81 wynosi 255
    Podaj następny przedzial: 3 35
    Suma kwadratow od 9 do 625 wynosi 5520
    Podaj nastepny przedzial: 5 5
    Koniec

10. Napisz program, który wczytuje osiem liczb całkowitych do tablicy, a następnie
wyświetla je w odwrotnej kolejności.

11. Napisz program, który oblicza sume 1, 2, 3, i tak dalej (aż do pewnej granicy)
wyrazów następujących ciągów:

    + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
    - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

Maksymalna liczba wyrazów do zsumowania powinna być określona przez użytkownika.
Przyjrzyj się sumom dla 20, 100 i 500 wyrazów. Czy któryś z ciągów wydaje się
zbiegać do jakiejś wartości? Wskazówka: -1 pomnożenie przez siebie nieparzystą 
ilość razy jest równe -1, a parzystą ilosć razy - +1.

12. Napisz program, który tworzy 8-elementową tablicę typu int, przypisuje jej
elementom pierwsze osiem potęg liczby 2, po czym wyświetla ich wartości. Do
przypisania wartości użyj pętli for, a do wyświetlenia wartości - dla urozmaicenia
- petli do while.

13. Napisz program, który tworzy dwie ośmioelementowe tablice wartości typu double
i stosuje pętle pozwalające użytkownikowi wprowadzać wartość ośmiu elementów 
do pierwszej z nich. Niech program umieści w drugiej tablicy skumulowane sumy
elementów pierwszej tablicy. Na przykład, czwarty element drugiej tablicy powinien
być równy sumie pierwszych czterech elementów pierwszej tablicy, piąty drugiej
tablicy powinien być równy sumie pierwszych pięciu elementów pierwszej tablicy.
(Można to osiągnąć za pomocą pętli zagnieżdżonych, ale wiedząc że piąty element
drugiej tablicy równa się sumie czwartego elementu tej tablicy i piątego elementu
pierwszej, możemy uniknąć zagnieżdżonych pętli i wykorzystać do tego celu tylko
pętle pojedynczą). Użyj też pętli do wyświetlania zawartości obu tablic, tak by
elementy pierwszej były wyświetlone w jednej linii, a pod nimi odpowiadające im
sumy skumulowane, będące elementami drugiej tablicy.

14. Napisz program, który pobiera ze standardowego urządzenia wejściowego linię
i wyświetla ją w odwrotnej kolejności. Możesz zachować pobrane wartości w tablicy 
char; załóż, że linia nie może stosować ze specyfikatorem %c aby czytać znaki po
kolei - aż do wprowadzenia znaku nowej lini (\n), klawiszem Enter.

15. Ewa inwestuje 100 zł z 10 % procentem prostym. (Każdego roku inwestycja daje
zysk w wysokości 10 % jej początkowej wartości). Kasia inwestuje 100 zł z 5 %
rocznym procentem składanym. (5 % od bieżącej wartości, zawierającej w sobie
poprzednio doliczone odsetki). Napisz program, który oblicza, po ilu latach
wartość inwestycji Kasi przekroczy wartość inwestycji Ewy, oraz wyświetla obie
wartości w tym momencie.

16. Jim Szczęściarz wygrał milion dolarów, które ulokował na rachunku bankowym
o oprocentowaniu 8 % rocznie. Ostatniego dnia każdego roku Jum wypłaca 100 000 dolarów.
Napisz program, który oblicza, ile lat upłynie, zanim Jim całkowicie opróżni
swoje konto.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char zad1(char *tablicaLiter);
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
double wynik(double x, double y);
void zad9();
void zad10();
void zad11();
void zad12();
void zad13();
void zad14();
void zad15();
void zad16();

// dane do zadan
// 6.1
char tablicaLiter[]="abcdefghijklmnopqrstuvwxyz";

// 6.2/6.3/6.4
char ch;

// 6.7 
double liczba;


// 6.10/6.13
#define rozmiar 8


int main(void){
    int choice;

    printf("Podaj liczbe od 1-16(q konczy): ");
    while(scanf("%d", &choice) == 1)
    {
        switch (choice)
        {
        case 1:
            zad1(tablicaLiter);
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
        case 14:
            zad14();
            break;
        case 15:
            zad15();
            break;
        case 16:
            zad16();
            break;        
        default:
            break;
        }
        printf("Podaj liczbe od 1-16 (q konczy): ");
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
14 -    DONE
15 -    DONE
16 -    DONE

*/

/* 

zad 1 -
abcdefghijklmnopqrstuvwxyz

*/

char zad1(char tablicaLiter[]){
    // wypisanie danych
    for(int i = 0; i < 26; i++){
        printf("%c", tablicaLiter[i]);
    }
    printf("\n");
    return *tablicaLiter;
    
}

/* 

zad 2 -

$
$$
$$$
$$$$
$$$$$

*/

void zad2(){
    char ch = '$';
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");
}

/*

zad 3 - 
A
AB
ABC
ABCD
ABCDE

*/

void zad3(){
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (ch = 'A'; ch < ('A' + i + 1); ch++){
            printf("%c", ch);
        }
        printf("\n");
    }
    printf("\n");
}


/*

zad 4 -

chcę otrzymać:

    A
   BAB
  CBABC
 DCBABCD 

*/

void zad4(){

    int i,j;
    char znak;
    printf("Podaj znak: ");
    scanf("%s", &znak);
    int stopnie = znak - (char) 'A';
    // stopnie
    printf("\n");
    for(i = 0; i < stopnie + 1; i++)
    {
        for(j = 0; j <= stopnie - i - 1; j++) printf(" ");      // spacje ' '
        //for (j = 0; j <= i * 2; j++)    printf("%c", znak - stopnie);     // znak
        for (znak = 'A'; znak < ('A' + i*2 + 1); znak++) printf("%c", znak);
        printf("\n");
    }
    printf("\n");
}

/* 

zad 5 -
n n*n n*n*n

1  1  1
2  4  8
3  9  27

wyświetla liczby w zakresie granicy dolnej i górej

*/
void zad5(){
    int minimum, maksimum;
    printf("Podaj minimum: "); scanf("%d", &minimum);
    printf("Podaj maksimum: "); scanf("%d", &maksimum);
    if(minimum < maksimum) {
        printf("n n*n n*n*n\n");
        for(int index = minimum; index <= maksimum; index++) {
            printf("%d %d %d\n", index, index*index, index*index*index);
        }
    } else {
        printf ("Min musi byc wieksze od maks.\n");
    }
}

/*

zad6 -
slowo: tajnik
odwrotnosc: kinjat

*/

void zad6(){
    char slowo[50], odwSlowo[50];
    printf("Slowo: ");
    scanf("%s", &slowo);
    int dlSlowa = strlen(slowo);
    for(int i = 0; i < dlSlowa; i++){
        odwSlowo[i] = slowo[dlSlowa-i-1];
    }
    printf("Odwrotnosc: %s\n", odwSlowo);
}

/*

zad7,8 -
wejscie: 
liczba1 - 2.5
liczba2 - 5.0

obliczenie:
wynik = (liczba1 - liczba2)/(liczba1*liczba2)

*/


void zad7(){
    double x, y, wyliczenie;
    printf("podaj dwie liczby (q konczy): ");
    while(scanf("%lf%lf", &x, &y) == 2){
        wyliczenie = (x-y) / (x*y);
        printf("wynik: %.3g\n", wyliczenie);
        printf("podaj dwie liczby (q konczy): ");
    }
    printf("koniec\n");
}

/*

zad 8-
to samo co 7

*/

void zad8(){
    double x, y, wyliczenie;
    printf("podaj dwie liczby (q konczy): \n");
    while(scanf("%lf %lf", &x, &y) == 2 ){
        wyliczenie = wynik(x,y);
        printf("wynik: %.3g\n", wyliczenie);
        printf("podaj dwie liczby (q konczy): \n");
    }
    printf("koniec\n");
    return;
}

double wynik(double a, double b){
    return (a - b)/(a*b);
}

/*

zad 9-
suma kwadratów z przedziału liczb
wejscie:
5, 8
suma = 5*5 + 6*6 + 7*7 + 8*8;

*/

void zad9(){
    int min, maks, suma=0;
    printf("Podaj dolny zakres: "); scanf("%d", &min);
    printf("Podaj gorny zakres: "); scanf("%d", &maks);
    if(min < maks) {
        for(int i = min; i <= maks; i++)
        {
            suma = suma + (i*i);
            printf("Suma: %d dla i = %d\n", suma, i);
        }
    } else {
        printf("Minium musi byc wieksze od maks.\n");
    }
    printf("------------------------------\n");
    printf("Suma koncowa: %d\n", suma);
    printf("------------------------------\n");
    
}

/*

zad10-
wejscie:
10 9 8 7 6 5 4 3 2 1
wyjscie:
1 2 3 4 5 6 7 8 9 10

*/

void zad10(){
    int tablica[rozmiar];
    printf("Podaj 8 liczb calkowitych: ");
    for(int i = 0; i < rozmiar ; i++)
    {
        scanf("%d", &tablica[i]);
    }
    for (int i = rozmiar; i > 0 ; i--) {
        printf("%d ", tablica[i-1]);
    }
    printf("\n");
}

/*

obliczanie granicy ciągów
ciąg 1:
+ 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...

ciąg 2:
- 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

*/

void zad11(){
    float suma1=0, suma2=0;
    int zakres;
    printf("Podaj ilosc elementow ciagu: ");
    scanf("%d", &zakres);
    // obliczenie sumy ciągu sum1 = + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
    for(int i = 0; i < zakres; i++){
        suma1 += 1.0 / (i + 2.0);
        printf("(ciag1) %.4f przy i = %d\n", suma1, i);
    }

    printf("\n");
    // obliczenie sumy ciągu sum2 = - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
    for (int i = 0; i < zakres; i++){
        if(i%2) suma2 = suma2 + 1.0 / (i + 2.0);
        else    suma2 = suma2 - 1.0 / (i + 2.0);
        printf("(ciag2) %.4f przy i = %d\n", suma2, i);
    }
}

/*

zad12-
wyswietlanie pierwszych 8 poteg w tablicy int.
1 2 4 8 16 32 64 128

*/

void zad12(){
    int tablica[rozmiar];
    // przypisanie wartości do tablicy
    for(int i = 0; i < rozmiar; i++){
        tablica[i] = 1;     // przypisanie początkowej wartości do tablicy 
        for(int j = 0; j <= i-1; j++){
            // przypisanie potęgi 2 do tablicy za pomocą pętli wewnętrznej
            tablica[i] = tablica[i]*2;
        }
    }
    // wyswietlanie zapisanych wartości
    for(int i = 0; i < rozmiar; i++){
        printf("%d\n", tablica[i]);
    }
    printf("\n");
}


/*

zad13-
przykład.
wejscie: 
tab1[8] = [1,2,4,8,10,20,20,40];
tab2[8] = [3,8,16,26,46,66,106];

*/


void zad13(){
    float tablica1[rozmiar], tablica2[rozmiar], suma;
    // wpisz wartosci tablicy1
    // przypisz wartości tablicy2
    // wyświetl wartości tablicy1 oraz tablicy2
    // tab2 [j] = tab1 [i(sum(x, x-1))];
    // wartosc indeksu tablicy 2 = suma indeksów tablicy 1 poprzednich elementów
    /* ex.  tab1 [3] = [1, 2, 4];
            tab2 [3] = [3, 7];
    */

   // wpisz wartosci tablicy1
   printf("Tablica1. Wpisz wartosci: ");
   for(int i = 0; i < rozmiar; i++)
   {
       scanf("%f", &tablica1[i]);
   }

    // sprawdz zawartosc tablicy1
    printf("Tablica1: ");
    for (int i = 0; i < rozmiar; i++){
        printf("%.2f ", tablica1[i]);
    }
    printf("\n");

    //przypisz do tablicy2 wartości tablicy1 jako sumy jej poprzednich elementów
    
    printf("Tablica2: ");
    int i,j;
    suma = 0;
    for(i = 0; i < rozmiar; i++){
        suma += tablica1[i];
        tablica2[i] = suma;
        printf("%.2f ", tablica2[i]);
    }
    printf("\n");
    
}

/*

zad14 -
wczytywanie znaków do char tab[255], zanim znak nowej lini
wejście: abcedeefdet
wyjście: tedfeedecba

*/

void zad14(){
    char tab[255];
    for(int i = 0; i < 255; i++){
        scanf("%c", &tab[i]);
        if(tab[i] != '\n')
            printf("%c", tab[i]);
    }    
}

/*

zad15 -
inwestycja Ewy - 100 zł i 10% procent prosty (rocznie)
inwestycja Kasi - 100 zł i 5% procent składany (rocznie)

Po ilu latach inwestycja Kasi większa od inwestycji Ewy?

*/

void zad15(){

    float kwota = 100;
    float inwestycjaEwy, inwestycjaKasi;
    for(int i = 0; i < 40; i++)     // licznik na 40 lat inwestycji
    {
        inwestycjaEwy = kwota * (1 + 0.1*i);         // obliczenie procentu prostego dla inw. Ewy            
        printf("(Ewa) %f dla roku = %d\n", inwestycjaEwy, i);  // wyświetlenie wyników dla Ewy

        inwestycjaKasi = kwota * pow(1.05, i);      // obliczenie procentu składanego dla inw. Kasi
        printf("(Kasia) %f dla roku = %d\n", inwestycjaKasi, i); // wyświetlenie wyników dla Kasi      
        
        if(inwestycjaKasi > inwestycjaEwy){
            printf("------------\n");
            printf("Po ile latach? Po %d latach.\n", i);
            printf("------------\n");
            break;  
        }
    } 
}

/*

zad16 -
1 000 000 $ z 8% rocznie (procent prosty)
Co 1 rok wyciągane jest 100 000 $
Ile lat zanim stan konta wyniesie 0 $?

*/

void zad16(){

    float reszta, kwota = 1000000;
    for(int i = 1; i < 100; i++)
    {
        reszta = kwota * (1 + 0.08 * i);    // procent prosty 8% rocznie
        kwota -= 100000;                  // wypłata roczna 100 000 $
        printf("%.2f w roku = %d\n", reszta, i);
        if(kwota < 0) {
            break;
        }
    }
}