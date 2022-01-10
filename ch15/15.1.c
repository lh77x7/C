// binar.c - wyswietlanie liczb w systemie binarnym za pomocą operacji na bitach
#include <stdio.h>
char *do_binar(int, char *);
void pokaz_binar(const char *);
int main(void){
    char bin_lan[8 * sizeof(int) + 1];
    int liczba;
    puts("Ten program przelicza liczby calkowite na system binarny.");
    puts("Wpisanie danych nienumerycznych konczy dzialanie programu.");
    while(scanf("%d", &liczba) == 1)
    {
        do_binar(liczba, bin_lan);
        printf("%d to inacznej ", liczba);
        pokaz_binar(bin_lan);
        putchar('\n');
    }
    return 0;
}

char *do_binar(int n, char *wsk){
    int i;
    static int liczba = 8 * sizeof(int);
    for(i = liczba - 1; i >= 0; i--, n >>=1)
        wsk[i] = (01 & n) + '0';
    wsk[liczba] = '\0';
    return wsk;
}

void pokaz_binar(const char *lan){
    int i = 0;
    while(lan[i])   // nie znak null
    {
        putchar(lan[i]);
        if(++i % 4  == 0 && lan[i])
            putchar(' ');       
    }
}