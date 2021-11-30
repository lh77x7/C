// samoglos.c - wykorzystuje etykiety wielokrotne
#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    int a_licz, e_licz, i_licz, o_licz, u_licz, y_licz;
    a_licz = e_licz = i_licz = o_licz = u_licz = y_licz = 0;
    while ((ch = getchar()) != '#')
    {
        switch (toupper(ch))
        {
        case  'A':  a_licz++;
                    break;
        case 'E':   e_licz++;
                    break;
        case 'I':   i_licz++;
                    break;
        case 'O':   o_licz++;
                    break;
        case 'U':   u_licz++;
                    break;
        case 'Y':   y_licz++;
                    break;
        default:
            break;
        }        
    }
    printf("liczba samoglosek:  A    E    I    O    U    Y\n");
    printf("                 %4d %4d %4d %4d %4d %4d\n", 
    a_licz, e_licz, i_licz, o_licz, u_licz, y_licz);

    return 0;
}