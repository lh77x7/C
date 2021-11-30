// zwierz.c - wykorzystuje instrukcję switch
#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    printf("Podaj mi litere, a ja podam Ci\nnazwe na te litere.\n");
    printf("Wpisz mala litere; # konczy zabawe.\n");
    while ((ch = getchar()) != '#')
    {
        if(islower(ch))  // tylko male litery
        {
            switch (ch)
            {
            case 'a':
                printf("aguti, roslinozerny gryzon z Ameryki Lacinskiej\n");
                break;
            case 'b':
                printf("babirusa, dzika swinia indonezyjska\n");
                break;
            case 'c':
                printf("cierlik, nieduzy ptak srodziemnomorski\n");
                break;
            case 'd':
                printf("desman, wodny ssak podobny do kreta\n");
                break;
            case 'e':
                printf("edredon, arktyczny ptak morski z rodziny kaczek\n");
                break;
            case 'f':
                printf("fretka, udomowiona odmiana tchorza pospolitego\n");
                break;
            default:
                printf("To za trudne!\n");
                break;
            } // koniec switch
        }
        else 
            printf("Rozpoznaje tylko male litery!\n");
        while(getchar() != '\n')
            continue;       // pomijanie reszty wiersza wejsciowego
        printf("Podaj kolejna litere lub znak #.\n");
    }
    printf("Do widzenia!\n");
    return 0;
}