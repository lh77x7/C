// 1-10.c - rozwiazania do cwiczen 1-10 rozdzial 9

/*

1. Zaprojektuj funkcje min(x,y), zwracającą mniejszą z dwóch wartości typu double,
i przetestuj ją za pomocą prostego programu.

2. Zaprojektuj funkcję rzad_zn(ch, i, j), wyświetlającą znak ch w kolumnach od i do j.
Wypróbuj ją w prostym programie.

3. Napisz funkcję, która pobiera trzy argumenty: znak oraz dwie liczby całkowite.
Pierwsza liczba określa liczbę razy, jaką należy wyświetlić znak w jednym
wierszu; druga liczba określa liczbę wierszy. Napisz program, który wykorzystuje
tę funkcję.

4. Średnia harmoniczna dwóch liczb uzyskujemy przez znalezienie odwrotności
danych liczb, wyciągnięciu z nich średniej arytmetycznej i obliczenie odwrotności
otrzymanego wyniku. Napisz funkcję, która pobiera dwa argumenty typu double 
i zwraca ich średnią harmoniczną.

5. Napisz i sprawdź funkcję o nazwie wieksze_od(), która zamienia zawartość obu 
zmiennych typu double większą z nich. Dla przykładu, wieksze_od(x, y) przypisze
obu zmiennym x i y wartość większej z nich.

6. Napisz program, który odczytuje znaki z wejścia standardowego aż do wystąpienia
końca pliku. Dla każdego znaku program powinien informowac, czy jest on literą.
Jeśli tak, program powinien również wyświetlić numer litery w alfabecie.
Na przykład, litery c i C obie mają numer 3. Wykorzystaj funkcję, który pobiera
znak jako argument i zwraca jego numer w alfabecie, jeśli jest on literą;
w przeciwnym przypadku wartością zwracaną powinno być -1.

7. W rodziale 6 napisaliśmy funkcję potega(), która zwracała wynik podniesienia
liczby typu double do potegi naturalnej (patrz listing 6.18). Ulepsz tę funkcję 
tak, aby poprzednie obsługiwała potęgi ujemne. Ponadto, wbuduj w funkcji 
założenie, że 0 do dowolnej potęgi wynosi 0 oraz że podniesienie dowolnej liczby
do potęgi 0 daje wynik 1. Użyj pętli. Przetestuj funkcję w programie.

8. Ponownie wykonaj ćwiczenie 6 - tym razem użyj funkcji rekurencyjnej.

9. Uogólnij funkcję do_binar z listingu 9.8 do postaci do_podst_n(), pobierającej
jego drugi argument wartość z przedziału od 2 do 10. Następnie powinna ona
wyświetlić liczbę, pobraną jako pierwszy argument w odpowiadającym drugiemu 
argumentowi systemie liczbowym. Na przykład funkcja do_podst_n(129, 8)
wyświetli 210, co jest ósemkowym odpowiednikiem liczby 129. Sprawdź działanie
programu pisząc wykorzystujący ją program.

10. Napisz i przetestuj funkcję Fibonacci(), którą zamiast rekurencji do 
obliczenia kolejnych wyrazów ciągu Fibonacciego używa pętli.

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
void zad9();
void zad10();
double imin(double*, double*);
char znak(char, int, int);
char znak2(char, int, int);
double sredniaHarmoniczna(double, double);
double wieksze_od(double*, double*);
int jestLitera(char);
int jestLiterarekur(char);
double potega(double, int);
void dziesietnyDowolny(int, int);
void fibonacci(int);

double x,y;
char ch;
int i,j;

int main(void){
    int choice;

    printf("Podaj liczbe od 1-10(q konczy): ");
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
        default:
            break;
        }
        printf("Podaj liczbe od 1-10 (q konczy): ");
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
10-     DONE

*/

// definicje funkcji

void zad1(){
    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    scanf("%lf %lf", &x, &y);
    printf("Najmniejsza z %.2lf i %.2lf jest %.2lf\n", x, y, imin(&x, &y));  
}

void zad2(){
    getchar();
    printf("Podaj znak: ");  scanf("%c", &ch);
    printf("Podaj liczbe 1: "); scanf("%lf", &x);
    printf("Podaj liczbe 2: "); scanf("%lf", &y);
    znak(ch, x, y);
}

void zad3(){
    int ileznakow, ilewierszy;
    getchar();
    printf("Podaj znak: "); scanf("%c", &ch);
    printf("Ile znakow wyswietlic?: "); scanf("%d", &ileznakow);
    printf("Ile wierszy?: "); scanf("%d", &ilewierszy);
    znak2(ch, ileznakow, ilewierszy);
}

void zad4(){
    double wynik;
    printf("Podaj pierwsza liczbe: "); scanf("%lf", &x);
    printf("Podaj druga liczbe: "); scanf("%lf", &y);
    wynik = sredniaHarmoniczna(x, y);
    printf("Srednia harmoniczna: %.2lf\n", wynik);
}

void zad5(){
    printf("Podaj liczbe 1: "); scanf("%lf", &x);
    printf("Podaj liczbe 2: "); scanf("%lf", &y);
    printf("Przed funkcja. x = %.2lf, y = %.2lf\n", x, y);
    printf("Po funkcji. x = %.2lf, y = %.2lf\n", wieksze_od(&x, &y), wieksze_od(&x, &y));
}

void zad6(){
    int ch;
    while((ch = getchar()) != EOF){
        printf("\nZnak: ");
        ch = getchar();
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){ // jestem litera
            ch = jestLitera(ch);
            printf("%d", ch);
        }
        else
            printf("-1");
    }  
}

void zad7(){
    double x, xpot;
    int n;
    printf("Podaj liczbe oraz potege.\n");
    printf("liczba: "); scanf("%lf", &x);
    printf("potega: "); scanf("%d", &n);
    xpot = potega(x, n);
    printf("%.3g do potegi %d to %.5g\n", x, n, xpot);
}

void zad8(){
    int ch;
    while((ch = getchar()) != EOF){
        printf("\nZnak: ");
        ch = getchar();
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){ // jestem litera
                ch = jestLiterarekur(ch);
            printf("%d", ch);
        }
        else
            printf("-1");
    }  
}

void zad9(){
    int liczbaDziesietna, systemLiczenia;
    printf("Podaj liczbe dziesietna: ");  scanf("%d", &liczbaDziesietna);
    printf("Jaki system liczenia (1-16): "); scanf("%d", &systemLiczenia);
    dziesietnyDowolny(liczbaDziesietna, systemLiczenia);
    putchar('\n');

}

void zad10(){
    printf("Ile wyrazow obliczyc? "); scanf("%d", &i);
    fibonacci(i);
}

// dodatkowe definicje funkcji

double imin(double *x, double *y){
    double min;
    if( min < *x)
        min = *x;
    else
        min = *y;
    return min;
}

char znak(char ch, int poczatek, int koniec){
    for(i = poczatek; i < koniec; i++){
        printf("%c", ch);
    }
    printf("\n");
}

char znak2(char ch, int liczbaznakow, int liczbawierszy){
    while(liczbawierszy-- > 0) {
        for(i = 0; i < liczbaznakow; i++) {
            printf("%c", ch);
        }
        printf("\n");
    }    
}

double sredniaHarmoniczna(double x, double y){
    return 2/(1/x + 1/y);
}

double wieksze_od(double *x, double *y){
    double max;
    if(*x > *y)
        max = *x;
    else 
        max = *y;
    return max;    
}

int jestLitera(char znak){
    if(znak >= 'A' && znak <= 'Z')
        return (int) znak - 64;
    else 
        return (int) znak - 96;
}

int jestLiterarekur(char znak){
    if(znak >= 'A' && znak <='Z')
       return (int) znak - 64;
    else 
        return (int) znak - 96;
}

double potega(double a, int b){
    double pot = 1;
    int i;

    
    if(a == 0) return 0;    // podstawa == 0 zawsze daje wynik 0        
    if(b == 0) return 1;    // potega == 0
    if(b > 0){              // potega > 0
        while(b--)
            pot  *= a;
        return pot;
    }
    else {                  // potega < 0
        while(b++)
            pot *= a;
        return 1/pot;
    }
}

void dziesietnyDowolny(int liczba, int podstawa){
  int r;
  r = liczba % podstawa;
  if (liczba >= podstawa)
    dziesietnyDowolny(liczba/podstawa, podstawa);
  putchar('0' + r);
  return;
}

void fibonacci(int n){
    int a1 = 1, a2 = 1, temp;
    if( n <= 1) printf("%d", a1);
    else if(n <= 2)
        printf("%d, %d", a1, a2);
        else{
            printf("%d, %d", a1, a2);
            for(i = 3; i <= n; i++)
            {
                temp = a1 + a2;
                a1 = a2;
                a2 = temp;
                printf(", %d", a2);
            }            
        }
    printf("\n");
}