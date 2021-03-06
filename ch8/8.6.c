// pokaz_zn2.c - wyswietla znaki w rzedach i kolumnach
#include <stdio.h>
#include <ctype.h>
void wyswietl(char c, int wysokosc, int szerkosc);
int main(void){
    int ch;     // znak do wyswietlenia
    int rzedy, kolumny;     // liczba rzedow i kolumn

    printf("Podaj znak i dwie liczby calkowite:\n");
    while((ch = getchar()) != EOF)
    {
        if(!isspace(ch))
        {
            if(scanf("%d %d", &rzedy, &kolumny) != 2)
                break;
            wyswietl(ch, rzedy, kolumny);
            printf("Podaj kolejny znak i dwie liczby calkowite;\n");
            printf("Aby zakonczyc, zasymuluj EOF.\n");
        }
    }
    return 0;
}

void wyswietl(char c, int wysokosc, int szerkosc){
    int rzad, kol;

    for(rzad = 1; rzad <= wysokosc; rzad++)
    {
        for(kol = 1; kol <= szerkosc; kol++)
            putchar(c);
        putchar('\n');  // zakoncz wiersz i rozpocznij kolejny
    }
}