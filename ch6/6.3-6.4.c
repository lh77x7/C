#include <stdio.h>
int main(void) {
    int n = 0;

    //while bez klamer i petla nieskonczona
    /* while(n<3)
        printf("n jest rowne %d\n", n);
        n++;
        printf("Na tym konczymy nasz program.\n");
    */

    //while z klamrą
    while(n++<3)
        printf("n jest rowne %d\n", n);
    printf("Na tym konczymy nasz program.\n");
    return 0;
}

