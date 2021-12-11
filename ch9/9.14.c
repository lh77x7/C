// zamien2.c - pierwsza próba wykonania funkcji zamieniającej
#include <stdio.h>
void zamiana(int u, int v);     // deklaracja funkcji
int main(void){
    int x = 5, y = 10;
    printf("Poczatkowo x = %d, a y = %d\n", x, y);
    zamiana(x, y);
    printf("Po zamianie x = %d, a y = %d\n", x, y);
    return 0;
}

//deklaracja funkcji
void zamiana(int u, int v){
    int temp;
    printf("Poczatkowo u = %d, a v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("A teraz u = %d, a v = %d.\n", u, v);
}