// 11.15.c - rozwiazanie zadania 15 z rozdzialu 11
#include <stdio.h>
#include <ctype.h>

void pobierzZnak(void);
void zamienNaDuze(void);
void zmiennaNaMale(void);

int main(int argc, char *argv[]){
    
    if(argc == 1)
    {
        pobierzZnak();
        return 0;
    }
    else if(argc > 2 || (argc == 2 && argv[1][0] != '-' ))
    {
        printf("Uzycie: nazwa_programu [-p | -l | -u ]\n");
        return 1;
    }
    else 
        switch (argv[1][1])
        {
        case 'p':
            pobierzZnak();
            break;
        case 'u':
            zamienNaDuze();
            break;
        case 'l':
            zmiennaNaMale();
            break;
        default:
            printf("Uzycie: nazwa_programu [-p | -l | -u ]\n");
            return 1;
        }

    return 0;
}

void pobierzZnak(void){
    char ch;

    while((ch = getchar()) != EOF)
        putchar(ch);
}

void zamienNaDuze(void){
    char ch;
    
    while((ch = getchar()) != EOF)
    {
        if(islower(ch))
            ch = toupper(ch);
        putchar(ch);
    }
}

void zmiennaNaMale(void){
    char ch;

    while((ch = getchar()) != EOF)
    {
        if(isupper(ch))
            ch = tolower(ch);
        putchar(ch);
    }
}