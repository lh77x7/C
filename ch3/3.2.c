/* print.c - przedstawia niektóre właściwości funkcji printf() */

#include <stdio.h>
int main(void) {
    int dziesiec = 10;
    printf("Wlasciwy sposob: ");
    printf("%d minus %d rowna sie %d\n", dziesiec, 2, dziesiec - 2);
    printf("Bledny sposob: ");
    printf("%d minus %d rowna sie %d\n", dziesiec);

    return 0;
}