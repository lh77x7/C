// porown.c - to dziala
#include <stdio.h>
#include <string.h> // potrzebuje strcmp()
#define ODPOWIEDZ "Grant"
#define MAX 40
int main(void){

    char proba[MAX];
    puts("Kto jest pochowany w grobowcu Granta?");
    gets(proba);
    while(strcmp(proba, ODPOWIEDZ) != 0)
    {
        puts("Niestety to nie jest dobra odpowiedz. Sprobuj jeszcze raz.");
            gets(proba);
    }
    puts("Tak jest!");
    return 0;
}