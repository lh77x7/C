// 1-7.c - rozwiazania do cwiczen 1-7 rozdzial 16

#include <stdio.h>

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();

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

1 -     NOT DONE!
2 -     NOT DONE!
3 -     NOT DONE!
4 -     NOT DONE!
5 -     NOT DONE!
6 -     NOT DONE!
7 -     NOT DONE!

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