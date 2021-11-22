// rzady2.c - zastosowanie zaleznych od siebie petli zagiezdzonych

#include <stdio.h>
#define ZNAKI 6
#define RZEDY 6
int main(void){
    
    int rzad;
    char c;

    for(rzad = 0; rzad < RZEDY; rzad++) {
        for(c = ('A' + rzad); c < ('A' + ZNAKI); c++)
            printf("%c", c);
        printf("\n");
    }
    return 0;
}