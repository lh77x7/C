// hash.c - definiuje funkcje z argumentem
#include <stdio.h>
void hash(int n);

int main(void){

    int razy = 5;
    char ch = '!';          // koda ASCII wykrzyknika to 33
    float f = 6.0;

    hash(razy);         // argument typu int
    hash(ch);           // char jest automatycznie przetwarzany na int
    hash((int) f);      // rzutowanie wymusza konwersje f do int

    return 0;
}

void hash(int n){
    while (n-- > 0)
        printf("#");
    printf("\n");  
}