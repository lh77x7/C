// rozwiazanie zadania 2 z rodziału 15

#include <stdio.h>

int binToDec(char *);
char doBinar(int, char *);
void pokazBinar(const char *);

int main(int argc, const char *argv[]){
    // ciało main
    // deklaracje, wywołania funkcji, wyświetlanie wyników
}

int binToDec(char *wbin){
    int liczba = 0;
    while (*wbin != '\0')
    {
        liczba = 2 * liczba + (*wbin++ - '0');
    }
    
    return liczba;
}

char doBinar(int n, char *wsk){
    int i;
    static int liczba = 8*sizeof(int);
    for (i=liczba-1; i>=0; i--, n>>=1) {
        wsk[i] = (01 & n) + '0';
    }
    wsk[liczba] = '\0';
    return wsk;
}

void pokazBinar(const char *lancuch){
    int i = 0;
    while (lancuch[i]) {
        putchar(lancuch[i]);
        if (++i % 4 == 0 && lancuch[i]) {
            putchar(' ');
        }
    }
    putchar('\n');
}