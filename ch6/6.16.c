// entry.c - petla o warunku wejsciowym
#include <stdio.h>
int main(void){
    
    const int tajny_kod = 13;
    int wprowadzony_kod;

    printf("Aby wejsc do kluby musisz podac kod.\nWprawdz kod: ");
    scanf("%d", &wprowadzony_kod);
    while (wprowadzony_kod != tajny_kod)
    {
        printf("Aby wejsc do kluby musisz podac kod.\nWprawdz kod: ");
        scanf("%d", &wprowadzony_kod);
    }
    printf("Gratulacje! Mozesz wejsc do klubu!\n");

    return 0;
}