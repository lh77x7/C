// 2.3.c - program wykorzystuje 2 funkcje w jednym programie

#include <stdio.h>
void lokaj (void);    //prototyp funkcji według ANSI C

int main(void) {
    printf("Wywolam funkcje lokaja.\n");
    lokaj();
    printf("Tak. Przynies mi herbate i zapisalne CD-ROMy.\n");
   return 0; 
}

void lokaj (void) {
    printf("Pan wzywal?\n");
}


