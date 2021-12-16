//lancuchy.c - zagaduje uzytkownika na smierc
#include <stdio.h>
#define WIAD "musisz miec wiele talentow. Opowiedz mi o nich."
#define GRAN 5
#define DL_WIER 81  // maksymalna dlugosc lancucha + 1
char t1[] = "Pamietaj, ze musisz sie zmiescic w jednym wierszu."; // inicjalizacja zewnetrzenej 
// tablicy znakowej
char *t2 = "Jesli nie przychodzi Ci nic do glowy mozesz sklamac."; // inicjalizacje zewnetrznego 
// wskaznika do znaku

int main(void){
    char imie[DL_WIER];
    char talenty[DL_WIER];
    int i;
    char *t3 = "\nAle nie mow juz o mnie - jak masz na imie?"; // inicjalizacja wskaznika
    char *mojetal[GRAN] = {
        "Blyskawiczne dodawanie liczb",
        "Precyzyjne mnozenie", "Gromadzenie danych", 
        "Scisle wykonywanie instukcji", "Rozumienie jezyka C"
        };  // inicjalizacja tablicy wskaznikow lancuchowych
    printf("Czesc! Jestem Rysiek, komputer. Mam wiele talentow.\n");
    printf("Opowiem Ci o nich\n");
    puts("Jak to bylo? A tak, oto czesciowa lista.");
    for(i = 0; i < GRAN; i++)
        puts(mojetal[i]);
    puts(t3);
    gets(imie);
    printf("Hm, %s, %s\n", imie, WIAD);
    printf("%s\n%s\n", t1, t2);
    gets(talenty);
    puts("Sprawdzmy, czy zapamietalem:");
    puts(talenty);
    printf("Dzieki za informacje, %s\n", imie);
    return 0;
}