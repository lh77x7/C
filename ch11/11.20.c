// astro.c - wykorzystuje strncmp()
#include <stdio.h>
#include <string.h>
#define ROZMIARLISTY 5
int main(void){
    char *lista[ROZMIARLISTY] = {
        "astronomia", "asteroida",
        "astrofizyka", "ostroga",
        "asteryzm"
    };
    int licznik = 0;
    for(int i = 0; i < ROZMIARLISTY; i++)
        if(strncmp(lista[i], "astro", 5) == 0)
        {
            printf("Znaleziono: %s\n", lista[i]);
            licznik++;
        }
    printf("Lista zawiera %d slowa zaczynajace sie na astro.\n", licznik);
    return 0;
}