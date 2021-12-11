// zamien3.c - zamiana z wykorzystaniem wskazników
#include <stdio.h>
void zamiana(int *u, int *v);
int main(void){
    int x = 5, y = 10;
    printf("poczatkowo x = %d, a y = %d\n", x, y);
    zamiana(&x, &y);
    printf("po zamianie x = %d, a y = %d\n", x, y);
    return 0;
}

//deklaracja funkcji
void zamiana(int *u, int *v){
    int temp;
    temp = *u;  // temp utrzymuje wartosc, na ktora wskazuje u
    *u = *v;
    *v = temp;
}