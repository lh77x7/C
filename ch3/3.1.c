/* zloto.c - wartosc Twojego ciezaru w zlocie */
#include <stdio.h>

int main(void) {
    float ciezar;     // ciężar użytkownika
    float wartosc;    // wartość użytkownika w złocie

    printf("Czy jestes wart tyle, co Twoj ciezar w zlocie?\n");
    printf("Sprawdzmy.\n");
    printf("Podaj swoj ciezar w kilogramach: ");

    /* pobieranie danych od użytkownika */
    scanf("%f", &ciezar);

    /* zakładam, że ciężar złota wynosi 1280 złotych za uncje */
    /* 32.151 to przelicznik kilograma na uncje troy */
    wartosc = 1280.0 * ciezar * 32.151;

    printf("Twoj ciezar w zlocie jest wart %.2f zlotych.\n", wartosc);
    printf("Z pewnoscia jestes tyle wart! W razie spadku cen zlota\n");
    printf("jedz wiecej, aby utrzymac swoja wartosc.\n");

    return 0;
}