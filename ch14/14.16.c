// fun_wsk.c -- wykorzystuje wskazniki do funkcji
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char pokazmenu(void);
void usunwiersz(void);  // usuwa dane do konca wiersza
void pokaz(void (* fp)(char *), char *str);
void DuzeLit(char *);   // przetwarza male litery na duze
void MaleLit(char *);   // przetwarza duze litery na male
void Odwroc(char *);    // zamien duze litery na male i odwrotnie
void Atrapa(char *);    // pozostawia lanuch bez zmian
int main(void){
    char wiersz[81];
    char kopia[81];
    char wybor;
    void (*wfun)(char *);   // wskazuje na funkcje przyjmujaca
    // argumenty typu char i nie zwraca wartosci
    puts("Podaj lancuch (pusty wiersz konczy program):");
    while(gets(wiersz) != NULL && wiersz[0] != '\0')
    {
        while((wybor = pokazmenu()) != 'n')   
        {
            switch (wybor)  // switch decyduje o wskazniku
            {
            case 'd': wfun = DuzeLit; break;
            case 'm': wfun = MaleLit; break;
            case 'o': wfun = Odwroc; break;
            case 'b': wfun = Atrapa; break;
            default: break;
            }
            strcpy(kopia, wiersz);  // tworzy kopie dla funkcji pokaz()
            pokaz(wfun, kopia); // korzysta z wybranej funkcji
        }
        puts("Podaj lancuch (pusty wiersz konczy program):");
    }
    puts("Czesc!");
    return 0;
}

char  pokazmenu(void){
    char odp;
    puts("Wybierz jedna opcje:\n");
    puts("d) duze litery        m) male litery\n");
    puts("o) odwracanie liter   b) bez zmian\n");
    puts("n) nastepny lancuch");
    odp = getchar();   // pobiera odpowiedz
    odp = tolower(odp); // przetwarza odp. na mala litere
    usunwiersz();   // pozbywa sie reszty wiersza
    while(strchr("dmobn", odp) == NULL)
    {
        puts("Wpisz d, m, o, b lub n:");
        odp = tolower(getchar());
        usunwiersz();
    }
    return odp;
}

void usunwiersz(void){
    while(getchar() != '\n')
        continue;
}

void DuzeLit(char *lan){
    while(*lan != '\0')
    {
        *lan = toupper(*lan);
        lan++;
    }
}

void MaleLit(char *lan){
    while(*lan != '\0')
    {
        *lan = tolower(*lan);
        lan++;
    }
}

void Odwroc(char *lan){
    while(*lan != '\0')
    {
        if(islower(*lan))
            *lan = toupper(*lan);
        else if(isupper(*lan))
            *lan = tolower(*lan);
        lan++;
    }
}

void Atrapa(char *lan){
    // pozostawia lancuch bez zmian
}

void pokaz(void (* fw)(char *), char *lan){
    (*fw)(lan); // stosuje wybrana funkcje do lan
    puts(lan);  // wyswietla wynik
}