// zasiegi.c - zmienne w bloku
#include <stdio.h>
int main(void){
    int x = 30; // orginalna zmienna

    printf("x w zewnetrzym bloku: %d\n", x);
    {
        int x = 77; // nowe x wewn. bloku
        printf("x w wnetrzu: %d\n", x);
    }
    printf("x w zewnetrznym bloku: %d\n", x);
    while (x++ < 33) // orginalne x
    {
        int x = 100;   // nowe x przyslania orginalne x
        x++;
        printf("x w petli loop: %d\n", x);
    }
    printf("x w zewnetrzym bloku %d\n", x);
    
    return 0;
}