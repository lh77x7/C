#include <stdio.h>
#include <string.h>     // dostarcza prototypu dla strlen()
#define POCHWALA "Ach, jakie wspaniale imie"
int main(void) {

    char imie[40];

    printf("Jak masz na imie?\n");
    scanf("%s", imie);
    printf("Twoje imie, sklada sie z %d liter, zajmuje %d komorek pamieci.\n", strlen(imie), sizeof imie);
    printf("Pochwala sklada sie z %d liter, zajmuje %d komorek pamieci.\n", strlen(POCHWALA), sizeof POCHWALA);

    return 0;
}