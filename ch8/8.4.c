// zgaduj.c - nieefektywny program zgadujacy liczby
#include <stdio.h>
int main(void){
    int proba = 1;
    char odpowiedz;

    printf("Wybierz liczbe od 1 do 100. Sprobuje ja zgadnac");
    printf("\nWpisz t, jesli moja proba jest udana lub");
    printf("\nn, jesli nie trafilem.\n");
    printf("Hmm... czy Twoja liczba jest %d?\n", proba);
    while((odpowiedz = getchar()) != 't')   // pobieranie odpowiedzi
        printf("No dobrze, czy jest to %d\n", ++proba);
    printf("Wiedzialem, ze mi sie uda!\n");
    return 0;
}