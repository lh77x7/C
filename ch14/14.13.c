// fund4.c - przekazywanie tablicy struktur do funkcji
#include <stdio.h>
#define FUNDDL 50
#define N 2
struct fundusze{
    char bank[FUNDDL];
    double bankfund;
    char oszcz[FUNDDL];
    double oszczfund;
};

double suma(const struct fundusze *pieniadze, int n);
int main(void)
{
    struct fundusze kowalski[N] = {
        {
        "Bank Czosnkowo-Melonowy",
        2024.72,
        "Kasa Oszczednosciowo-Pozyczkowa",
        8237.11
        },
        {
        "Bank Jana",
        1834.28,
        "Kasa Oszczednosciowa",
        2903.89
        }
    };
    printf("Kowalscy posiadaja w sumie %.2f zl.\n", suma(kowalski, N));
    return 0;
}

double suma(const struct fundusze*pieniadze, int n)
{
    double kwota;
    int i;
    for(i = 0, kwota = 0; i < n; i++, pieniadze++)
        kwota += pieniadze->bankfund + pieniadze->oszczfund;
    return(kwota);
}