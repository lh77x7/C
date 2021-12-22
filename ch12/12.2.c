// forc99.c - nowe zasady dla zasiegu blokowego w petli for(C99)
#include <stdio.h>
int main(void){

    int n = 10;

    printf("Poczatkowo n = %d\n", n);
    for(int n = 1; n < 3; n++)
        printf("petla 1: n = %d\n", n);
    printf("Po petli 1, n = %d\n", n);
    for(int n = 1; n < 3; n++){
        printf("petla 2 index n = %d\n", n);
        int n = 30;
        printf("petla 2, n = %d\n", n);
        n++;
    }
    printf("Po petli 2, n = %d\n", n);

    return 0;
}