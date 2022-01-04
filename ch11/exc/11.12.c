#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;
    if(argc < 2){
        printf("Sposob uzycia: %s argumenty", argv[0]);
    }
    printf("Argumenty: \n");
    for(i = argc; i > 1; i--){
        printf("%s ", argv[i-1]);
    }
    return 0;
}