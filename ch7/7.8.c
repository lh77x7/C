// farba.c - wykorzystuje operator warunkow
#include <stdio.h>
#define POKRYCIE 18         // ilosc m.kw pokrywnia przez jedna puszke
int main(void){

    int m_kw;
    int puszki;
    printf("Podaj liczbe metrow kwadratowych do pomalowania.\n");
    while(scanf("%ld", &m_kw) == 1)
    {
        puszki = m_kw / POKRYCIE;
        puszki += (m_kw % POKRYCIE == 0) ? 0:1;
            printf("Potrzeba %d %s farby.\n", puszki, puszki == 1 ? "puszki" : "puszek");
        printf("Podaj kolejna wartosc (q konczy): \n");
    }
    return 0;
}