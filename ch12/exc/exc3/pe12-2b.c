#include <stdio.h>
#include "pe12-2a.h"

int main(void) {
    
    int tryb;
    
    printf("Wybierz: 0 - system metryczny, 1 - system US");
    printf(" (-1 aby zakonczyc): ");
    scanf("%d", &tryb);
    while (tryb >= 0) 
    {
        tryb = wybierzTryb(tryb);
        pobierzDane(tryb);
        printf("Wybierz: 0 - system metryczny, 1 - system US");
        printf(" (-1 aby zakonczyc): ");
        scanf("%d", &tryb);
    }
    
    printf("Koniec.\n");
    return 0;
}
