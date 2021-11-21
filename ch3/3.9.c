/* zle_arg.c - nieprawidłowe argumenty */
#include <stdio.h>
int main(void) {
    int f = 4;
    int g = 5;
    float h = 5.0f;

    printf("%d\n", f, g);  // za dużo argumentów
    printf("%d %d\n", f);  // za mało argumentów
    printf("%f %d\n", g, h); //złe typy danych

    return 0;
}