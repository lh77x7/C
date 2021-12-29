// echo.c - korzystanie z fgets() i fputs()
#include <stdio.h>
#define MAXWIERSZ 20
int main(void){
    char wiersz[MAXWIERSZ];
    while(fgets(wiersz, MAXWIERSZ, stdin) != NULL && wiersz[0] != '\n')
        fputs(wiersz, stdout);
    return 0;
}