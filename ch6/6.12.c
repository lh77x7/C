//petla for do utowrzenia tablicy szescianow
#include <stdio.h>
int main(void) {
    int num;

    printf("    n          n   do szascianu.\n");
    for(num=1; num<=20; num++)
      printf("%5d %10d\n", num, num*num*num);
    return 0;
}