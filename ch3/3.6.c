/* altnames.c - przenaszalne typy całkowite i ich nazwy */
#include <stdio.h>
#include <inttypes.h>   //nagłowek pozwala użyć typy przenaszalne

int main(void) {
    int16_t me16; //me16 jest 16-bitową zmienną całkowitą ze znakiem

    me16 = 4593;
    printf("Po pierwsze, zalozmy ze int16_t jest typu short: ");
    printf("me16 = %hd\n", me16);
    printf("Nastepnie, nie czynmy zadnych zalozen.\n");
    printf("Zamiast tego, skorzystajmy z \"macro\" z pliku inttypes.h: ");
    printf("me16 = %" PRId16 "\n", me16);

    return 0;          
}