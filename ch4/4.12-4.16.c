#include <stdio.h>
int main(void) {

    // 4.12
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    //4.13
    int n = 100;
    int wz;

    //4.14
    //wyswietlanie dlugich lancuchow

    //4.15
    int wiek;
    float majatek;
    char zwierzatko[30];

    //4.16
    unsigned szerokosc, dokladnosc;
    int liczba = 256;
    double waga = 242.5;

    // 4.12
    printf("----4.12------\n");
    printf("%.1e %.1e %.1e %1.e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
    printf("------------\n");

    //4.13
    printf("----4.13------\n");
    wz = printf("Woda wrze w temperaturze %d C.\n", n);
    printf("Funkcja printf() wyswietla %d znakow.\n", wz);
    printf("------------\n");

    //4.14
    printf("----4.14------\n");
    printf("Oto jeden ze sposobow wyswietlania ");
    printf("dlugich lancuchow.\n");
    printf("Oto inny sposob wyswietlania \
    dlugiego lancucha.\n");
    printf("Oto najlepszy sposob wyswietlania "
    "dlugiego lancucha.\n");   // ANSI C
    printf("------------\n");

    //4.15
    printf("----4.15------\n");
    printf("Podaj swoj wiek, majatek i ulubione zwierzatko.\n");
    scanf("%d %f %s", &wiek, &majatek, zwierzatko);
    printf("%d, %.0f zl, %s\n", wiek, majatek, zwierzatko);
    printf("--------------\n");

    //4.16
    printf("----4.16------\n");
    printf("Jaka szerokosc pola?\n");
    scanf("%d", &szerokosc);
    printf("Liczba jest rowna: %*d:\n", szerokosc, liczba);
    printf("Teraz podaj szerokosc i dokladnosc:\n");
    scanf("%d %d", &szerokosc, &dokladnosc);
    printf("Waga = %*.*f\n", szerokosc, dokladnosc, waga);
    printf("--------------\n");

    return 0;
}