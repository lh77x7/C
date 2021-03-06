#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *plik1, *plik2;
    char ch1, ch2;
    if(argc < 3)
    {
        printf("Sposob uzycia: %s plik1 plik2", argv[0]);
        exit(1);
    }
    if((plik1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Blad otwarcia pliku wejsciowego.\n");
        exit(1);
    }
    if((plik2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Blad otwarcia pliku wyjsciowego.\n");
        exit(1);
    }
    ch1 = getc(plik1);
    ch2 = getc(plik2);
    while(ch1 != EOF || ch2 != EOF)
    {
        if(ch1 != EOF && ch1 != '\n')
        {
            putchar(ch1);
            ch1 = getc(plik1);
        }
        if(ch1 != EOF)
        {
            printf(" , ");
            ch1 = getc(plik1);
        }
        if(ch2 != EOF && ch2 != '\n')
        {
            putchar(ch2);
            ch2 = getc(plik2);
        }
        if(ch2 != EOF)
        {
            printf("\n");
            ch2 = getc(plik2);
        }
    }

    return 0;
}