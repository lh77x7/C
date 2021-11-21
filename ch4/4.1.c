#include <stdio.h>
#include <string.h>                  // potrzebujemy funkcji strlen()
#define GESTOSC 62.4                 // ludzka gestosc w funtach na stopy szescienne

int main(void) {
    float waga, objetosc;
    int rozmiar, litery;
    char nazwa[40];                 // nazwa jest tablica 40 znakow

    printf("Witam! Podaj swoje imie?\n");
    scanf("%s", nazwa);
    printf("%s, ile funtow warzysz?\n", nazwa);
    scanf("%f", &waga);
    rozmiar = sizeof nazwa;
    litery = strlen(nazwa);
    objetosc = waga/GESTOSC;
    printf("Zaten %s, twoja objetosc wynosi %2.2f stropy szescienne.\n", nazwa, objetosc);
    printf("Ponadto, Twoje imie zawiera %d liter(y).\n", litery);
    printf("a na jego przechowanie przeznaczylismy %d bajtow.\n", rozmiar);

    return 0;
}
