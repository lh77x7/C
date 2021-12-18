// str_cat.c - laczy dwa lancuchy
#include <stdio.h>
#include <string.h>
#define ROZMIAR 80
int main(void){
    char kwiat[ROZMIAR];
    char dodatek[] = " smierdza jak stare buty";
    puts("Jakie kwiaty lubisz najbardziej?");
    gets(kwiat);
    strcat(kwiat, dodatek);
    puts(kwiat);
    puts(dodatek);
    return 0;
}
