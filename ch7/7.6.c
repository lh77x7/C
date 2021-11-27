// licz_zn.c - zlicza znaki nie bedace apostrofami lub cudzyslowami
#include <stdio.h>
#define KROPKA '.'
int main(void){
    int ch;
    int licznik = 0;
    while ((ch = getchar()) != KROPKA)
    {
        if(ch != '"' && ch !='\'')
            licznik++;
    }
    printf("W zdaniu jest %d znakow nie bedacych cudzyslowami lub apostrofami.\n", licznik);

    return 0;
}