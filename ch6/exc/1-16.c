// 1-16.c - rozwiazania do cwiczen 1-16 rozdzial 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

char zad1(char *tablicaLiter);
void zad2();
void zad3();
void gotox(int x);
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
4 -     NOT DONE!
5 -     DONE
6 -     DONE
7 -     DONE
8 -     DONE
9 -     DONE
10 -    DONE
11 -    DONE
12 -    DONE
13 -    NOT DONE!
14 -    NOT DONE!
15 -    DONE
16 -    DONE

*/

void gotox(int x){
    for(x; x > 0; --x)
        putchar(' ');
}

/* 

zad 1 -
abcdefghijklmnopqrstuvwxyz

*/

char zad1(char tablicaLiter[]){
    // wpisanie danych
    /*printf("Wpisz 26 liter: ");
    for (int i = 0; i < 26; i++){
        scanf("%c", &tablicaLiter[i]);
    }*/
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

    /* choinka - uproszczona wersja, 
    
        **
       ****
      ******
     ********
    **********

    dla liczba = 5;

    */

    /*
    
    int liczba;
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &liczba);
    for(int i = 1; i < liczba; i++){
        gotox(liczba - i);
        for (int j = 0; j < i; j++) printf("**");
        putchar('\n');
    }
    
    */    
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
    float tablica1[rozmiar], tablica2[rozmiar], suma=0;
    // wpisz wartosci tablicy1
    // przypisz wartości tablicy2
    // wyświetl wartości tablicy1 oraz tablicy2
    // tab2 [j] = tab1 [i(sum(x, x-1))];
    // wartosc indeksu tablicy 2 = suma indeksów tablicy 1 poprzednich elementów
    /* ex.  tab1 [3] = [1, 2, 4];
            tab2 [3] = [3, 7];
    */

   // wpisz wartosci tablicy1
   for( int i = 0; i < rozmiar; i++)
   {
       scanf("%d", &tablica1[i]);
   }

   // licz sumę elementów w indeksie
   for(int i = 0; i < rozmiar; i++){
       printf("%d ", tablica1[i]);
   }

}


/*

zad14 -
wczytywanie znaków do char tab[255], zanim znak nowej lini
wejście: abcedeefdet
wyjście: tedfeedecba

*/

void zad14(){
    // 
    
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