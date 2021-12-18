// wysw2.c - wyswietla lancuch i zlicza znaki
#include <stdio.h>
int wysw2(const char*);

// kompilator musi miec funkcje main. W innym wypadku zwraca błąd kompilacji.
int main(void){
    const char lan;
    wysw2(&lan);
    return 0;
}

int wysw2(const char * lancuch){
    int licznik = 0;
    while (*lancuch)
    {
        putchar(*lancuch++);
        licznik++;
    }
    putchar('\n');  // znak nowej lini nie jest liczony
    return (licznik);
    
}