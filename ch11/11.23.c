// kopia1. c - demo funkcji strncpy()
#include <stdio.h>
#include <string.h>
#define ROZMIAR 40
#define ROZMIAR_CELU 7
#define GRAN 5
int main(void){
    char vslowa[GRAN][ROZMIAR_CELU];
    char temp[ROZMIAR];
    int i = 0;
    printf("Podaj %s slow zaczynajacych sie na v:\n", GRAN);
    while(i < GRAN && gets(temp))
    {
        if(temp[0] != 'v')
            printf("%s nie zaczyna sie na v!\n", temp);
        else
        {
            strncpy(vslowa[i], temp, ROZMIAR_CELU - 1);
            vslowa[i][ROZMIAR_CELU - 1] = '0';
            i++;
        }
    }
    puts("Oto przyjete slowa: ");
    for(i = 0; i < GRAN; i++)
        puts(vslowa[i]);
    return 0;
}