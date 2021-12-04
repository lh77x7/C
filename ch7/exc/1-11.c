// 1-11.c - rozwiązania zadań z rozdziału 7
#include <stdio.h>

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

// program główny
int main(void){
    int choice;

    printf("Podaj liczbe od 1-11 (znak nieliczbowy konczy): ");
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
            printf("Wybierz liczbe z zakresu 1-11.\n");
            break;
        }
        printf("Podaj liczbe od 1-11 (znak nieliczbowy konczy): ");
    }
    printf("Koniec programu.\n");

    return 0;
}

// definicje funkcji

void zad1(){
    printf("1!\n");
}

void zad2(){
    printf("2!\n");
}

void zad3(){
    printf("3!\n");
}

void zad4(){
    printf("4!\n");
}

void zad5(){
    printf("5!\n");
}

void zad6(){
    printf("6!\n");
}

void zad7(){
    printf("7!\n");
}

void zad8(){
    printf("8!\n");
}

void zad9(){
    printf("9!\n");
}

void zad10(){
    printf("10!\n");
}

void zad11(){
    printf("11!\n");
}