#include <stdio.h>
#define STRONY 336
#define SLOWA 65616
int main(void) {

    short num = STRONY;
    short mnum = -STRONY;

    printf("%hd %hu %hd %hu\n", num, num, mnum, mnum);
    printf("%d %c\n", num, num);
    printf("%d %hd %c\n", SLOWA, SLOWA, SLOWA);

    return 0;
}