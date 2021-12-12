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
2 -     NOT DONE!
3 -     NOT DONE!
4 -     NOT DONE!
5 -     NOT DONE!
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!
9 -     NOT DONE!
10-     NOT DONE!

*/

// definicje funkcji

void zad1(){
    double x, y;
    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    scanf("%lf %lf", &x, &y);
    printf("Najmniejsza z %.2lf i %.2lf jest %.2lf\n", x, y, imin(&x, &y));  
}

void zad2(){
    printf("2\n");
}

void zad3(){
    printf("3\n");
}

void zad4(){
    printf("4\n");
}

void zad5(){
    printf("5\n");
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
    printf("10\n");
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
