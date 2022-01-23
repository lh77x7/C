// preproc.c -- proste przykład użycia procesora
#include <stdio.h>
#define DWA 2   // można korzystać z komentarzy
#define OW "Konsekwencja jest ostatnim schronieniem ludzi pozba\
wionych fantazji.\n - Oscar Wilde" // lewy ukoślnik przenosi definicję do następnego wiersza
#define CZTERY DWA*DWA
#define PX printf("X wynosi %d.\n", x)
#define FMT "X wynosi %d.\n"

int main(void){
    int x = DWA;
    PX;
    x = CZTERY;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("DWA: OW\n");
    return 0;
}