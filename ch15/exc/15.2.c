// rozwiazanie zadania 2 z rodziału 15

#include <stdio.h>

int binToDec(char *wbin);
char *doBinar (int n, char *wsk);
void pokazBinar(const char * lan);

int main(void) {
    
    char first[32];
    char first_neg[32];
    char second[32];
    char second_neg[32];
    char dzialanie[32];
    int first_dec;
    int second_dec;
    int and;
    int or;
    int xor;
    
    printf("Wprowadz pierwszy lancuch binarny:\n");
    scanf("%s", first);
    printf("Wprowadz drugi lancuch binarny:\n");
    scanf("%s", second);
    
    first_dec = binToDec(first);
    second_dec = binToDec(second);
    
    printf("Pierwsza liczba to: %d\n", first_dec);
    doBinar(~first_dec, first_neg);
    printf("~%d = ", first_dec);
    pokazBinar(first_neg);
    printf("Druga liczba to: %d\n", binToDec(second));
    doBinar(~second_dec, second_neg);
    printf("~%d = ", second_dec);
    pokazBinar(second_neg);
    putchar('\n');
    
    and = first_dec & second_dec;
    
    printf("%d & %d = ", first_dec, second_dec);
    pokazBinar(doBinar(and, dzialanie));
    
    or = first_dec | second_dec;
    
    printf("%d | %d = ", first_dec, second_dec);
    pokazBinar(doBinar(or, dzialanie));
    
    xor = first_dec ^ second_dec;
    
    printf("%d ^ %d = ", first_dec, second_dec);
    pokazBinar(doBinar(xor, dzialanie));
}

int binToDec (char * wbin) {
    
    int liczba = 0;
    while (*wbin != '\0')
    {
        liczba = 2 * liczba + (*wbin++ - '0');
    }
    
    return liczba;
}

char * doBinar(int n, char *wsk)
{
    int i;
    static int liczba = 8*sizeof(int);
    for (i=liczba-1; i>=0; i--, n>>=1) {
        wsk[i] = (01 & n) + '0';
    }
    wsk[liczba] = '\0';
    return wsk;
}

// wyswietl lancuch binarny w blokach po 4
void pokazBinar(const char * lan)
{
    int i = 0;
    while (lan[i]) {
        putchar(lan[i]);
        if (++i % 4 == 0 && lan[i]) {
            putchar(' ');
        }
    }
    putchar('\n');
}