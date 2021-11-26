// elektr.c
#include <stdio.h>
#define STAWKA1 0.2401
#define STAWKA2 0.2881
#define STAWKA3 0.3457
#define PROG1 240.0
#define PROG2 540.0

#define PODSTAWA1 (STAWKA1 * PROG1)
#define PODSTAWA2 (PODSTAWA1 + (STAWKA2 *(PROG2 - PROG1)))

int main(void){

    double kwh, oplata;
    printf("Podaj ilosc zuzytych kWh: ");
    scanf("%lf", &kwh);
    if(kwh <= PROG1)
        oplata = STAWKA1 * kwh;
    else if (kwh <= PROG2)
        oplata = PODSTAWA1 + (STAWKA2 * (kwh - PROG1));
    else
        oplata = PODSTAWA2 + (STAWKA3 * (kwh - PROG2));

    printf("Oplata za %.lf kWh wynosi %1.2f zl.\n", kwh, oplata);
    return 0;
}