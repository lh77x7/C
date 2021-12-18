// wysw1.c - wyswietla lancuch bez dodawania
#include <stdio.h>
void wyswietl(const char *);

// kompilator musi miec funkcje main. W innym wypadku zwraca błąd kompilacji.
int main(void){
    const char lan;
    wyswietl(&lan);
    return 0;
}

void wyswietl(const char * lancuch){
    while (*lancuch)
    {
        putchar(*lancuch++);
    }
}