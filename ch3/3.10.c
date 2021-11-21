/* sekwenc.c -- korzysta ze znaków sterujących */
#include <stdio.h>
int main(void) {
    float pensja;
    printf("Podaj miesieczne wynagrodzenie, na jakie zaslugujesz: ");  /* 1 */
    printf("____________ zl \a\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");                /* 2 */
    scanf("%f", &pensja);
    printf("\n\t%.2f zl miesiecznie to %.2f zl rocznie.", pensja, pensja *12.0);
    printf("\rHo, ho!\n");

    return 0;
}