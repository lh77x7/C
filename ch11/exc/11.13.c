#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
    
    double podstawa = atoi(argv[1]);
    double wykladnik = atoi(argv[2]);
    // argv[1] - podstawa (double)
    // argv[2] - wykladnik (int)
    if(argc < 3){
        printf("Sposob uzycia: %s podstawa wykladnik.\n", argv[0]);
    }

    printf("Wynik: %.2f\n", pow(podstawa, wykladnik));

    return 0;
}