// wordcnt.c - zlicza znaki, slowa i wiersze
#include <stdio.h>
#include <ctype.h>              // potrzebuję funkcji isspace()
#include <stdbool.h>            // potrzebuję: bool, true, false
#define STOP '|'
int main (void){
    char c;                     // bierzacy znak
    char poprz;                 // poprzedni znak
    long ile_znakow = 0L;       // liczba znakow
    int ile_wierszy = 0;        // liczba linii
    int ile_slow = 0;           // liczba slow
    int ile_np_wierszy = 0;     //  liczba niepelnych wierszy
    bool w_slowie = false;      // == true, jesli c znajduje sie w slowie
    printf("Wprowadz tekst do analizy (znak | przerywa prace programu):\n");
    poprz = '\n';               // rozpoznanie konca linii
    while((c = getchar()) != STOP)
    {
        ile_znakow++;           // liczy znaki
        if(c == '\n')
            ile_wierszy++;      // liczy wiersze
        if(!isspace(c) && !w_slowie)
        {
            w_slowie = true;    // zaczelo sie nowe slowo
            ile_slow++;         // liczy slowa
        }
        if(isspace(c) && w_slowie)
            w_slowie = false;   // znajduje koniec slowa
        poprz = c;
    }
    if(poprz != '\n')
        ile_np_wierszy = 1;
    printf("znakow = %ld, slow = %d, wierszy = %d, ", ile_znakow, ile_slow, ile_wierszy);
    printf("niepelnych wierszy = %d\n", ile_np_wierszy);

    return 0;
}