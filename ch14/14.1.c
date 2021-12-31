// ksiazka.c - spis jednej ksiazki
#include <stdio.h>
#define MAXTYT 41   // maksymalna dl. tytułu + 1
#define MAXAUT 31   // maksymalna dl. autora + 1
struct ksiazka
{
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
};
int main(void){
    struct ksiazka bibl;    // deklaracja bibl jako zmiennej typu ksiazka
    printf("Podaj tytul ksiazki: ");
    gets(bibl.tytul);   // dostep do skladnika "tytuł"
    printf("Podaj autora ksiazki: ");
    gets(bibl.autor);
    printf("Podaj wartosc: ");
    scanf("%f", &bibl.wartosc);
    printf("%s, autor: %s, cena: %.2f zl\n", bibl.tytul, bibl.autor, bibl.wartosc);
    printf("%s: \"%s\" (%.2f zl)\n", bibl.autor, bibl.tytul, bibl.wartosc);
    return 0;
}
