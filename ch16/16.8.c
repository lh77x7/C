// uzyjnagl.c -- zastosowanie stuktury daneos_st
#include <stdio.h>
#include "daneos.h"
// pamietaj o polaczeniu z plikiem daneos.c
int main(void){
    
    daneos kandydat;

    wprowadz(&kandydat);
    printf("Witamy ");
    wyswietl(&kandydat);
    printf(" w naszym programie");
    return 0;
}