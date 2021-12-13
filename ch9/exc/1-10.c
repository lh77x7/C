// 1-10.c - rozwiazania do cwiczen 1-10 rozdzial 9

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
int fibonacci(int);

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
        printf("Podaj liczbe od 1-13 (q konczy): ");
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
8 -     NOT DONE!
9 -     NOT DONE!
10-     NOT DONE!

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
    printf("6\n");
}

void zad7(){
    printf("7\n");
}

void zad8(){
    printf("8\n");
}

void zad9(){
    printf("9\n");
}

void zad10(){
    int zmienna, wyrazCiagu;
    printf("Ktory wyraz ciagu Fibonacciego obliczyc? "); scanf("%d", &zmienna);
    wyrazCiagu = fibonacci(zmienna);
    printf("Dla %d ciag Fibonacciego: %d\n", zmienna, wyrazCiagu);
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


int fibonacci(int n){
    int a, b, t = 1;
    for(int i = 0; i < n; i++){
        t = a;
        a = a + b;
        b = t;
    }
    return a;
}

/*

int fibonacci(int n){
    int a, b = 1, t = 1;
    for(int i = 0; i < n; i++){
        *t = *a;
        *a = *a + *b;
        *b = *t;
    }
    return a;
}


*/