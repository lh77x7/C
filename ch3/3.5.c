/* znakkod.c - wyswietla znak i odpowiadajacy mu kod */
#include <stdio.h>

int main(void){

    char ch;
    printf("Wpisz jakis znak.\n");
    scanf("%c", &ch);  //użytkownik podaje znak
    printf("Kod znaku %c to %d.\n", ch, ch);

    return 0;
}