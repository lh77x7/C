// proto.c - wykorzystuje prototyp funkcji
#include <stdio.h>
int imax(int, int);
int main(void){
    printf("Wieksza z %d i %d jest %d.\n", 3, 5, imax(3, 5));
    printf("Wieksza z %d i %d jest %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}
int imax(n, m)
int n, m;
{
    int max;
    if(n > m)
        max = n;
    else
        max = m;
    return max;
}