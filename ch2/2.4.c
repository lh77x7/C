// 2.4.c - program z błędami

#include <stdio.h>

int main(void)
{
  int n, n2, n3; /* ten program zawiera kilka bledow */
    n = 5;
    n2 = n * n;
    n3 = n * n2;
    printf("n = %d, n do kwadratu = %d, n do szescianu = %d\n", n, n2, n3);
    return 0;
}
  
