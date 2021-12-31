#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    if(argc < 2)
    {
        fprintf(stderr, "Sposob uzycia: %s plik1 plik2 ...\n", argv[0]);
        exit(1);
    }
    for(i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;    
}