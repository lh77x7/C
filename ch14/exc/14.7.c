// rozwiazanie zadania 7 z rodzialu 14

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 10    // maksymalna liczba ksiazek

struct ksiazka{ // szablon struktury ksiazka
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
};

char pobierz(char *, int);
void edytujKsiazke(struct ksiazka *);

int main(void){
    struct ksiazka bibl[MAXKS]; // tablica struktur
    int licznik = 0;
    int index, licznikp, ch;
    FILE *pksiazki;
    int rozmiar = sizeof(struct ksiazka);
    if((pksiazki = fopen("ksiazki.dat", "rb")) == NULL)
    {
        fputs("Nie mozna otworzyc pliku ksiazki.dat\n", stderr);
        exit(EXIT_FAILURE);
    }

    printf("Obecna zawartosc pliku ksiazki.dat:\n");
    while(licznik < MAXKS && fread(&bibl[licznik], rozmiar, 1, pksiazki) == 1)
    {
        printf("%s by %s: %.2f zl\n", bibl[licznik].tytul, bibl[licznik].autor, bibl[licznik].wartosc);
        
        printf("Wybierz jedna opcje:\n"
        "[n] nastepny rekord [d] usun ten rekord"
        "[m] modyfikuj ten rekord.\n");

        ch = getchar();
        while (getchar() != '\n')  continue;
        switch(ch)
        {
            case('n'):
            case('N'):
                break;
            case('m'):
            case('M'):
                edytujKsiazke(&bibl[licznik]);
                break;
            case('d'):
            case('D'):
                licznik--;
                break;
            default:
                break;
        }
        licznik++;
    }

    fclose(pksiazki);

    if(licznik == MAXKS)
        printf("Plik ksiazki.dat jest pelny.\n");
    else {
        puts("Podaj nowy tytul ksiazek.");
        while(licznik < MAXKS && gets(bibl[licznik].tytul) != NULL && bibl[licznik].tytul[0] != '\0')
        {
            puts("Teraz podaj autora.");
            pobierz(bibl[licznik].autor, MAXAUT);
            puts("Teraz podaj wartosc.");
            scanf("%f", &bibl[licznik].wartosc);
            while(getchar() != '\n') continue;   // czysci wiersz wejsciowy
            licznik++;

            if(licznik < MAXKS) 
                puts("Podaj nastepny tytul.");        
        }
    }
    
    if((pksiazki = fopen("ksiazki.dat", "wb")) == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc pliku 'ksiazki.dat' do zapisu.\n");
        exit(EXIT_FAILURE);
    }

    if(licznik > 0) {
        puts("Oto lista Twoich ksiazek: ");
        for(index = 0; index < licznik; index++)
            printf("%s by %s: %.2f\n", bibl[index].tytul, bibl[index].autor,
        bibl[index].wartosc);
        fwrite(bibl, rozmiar, licznik, pksiazki);
    }
    else {
        puts("Nie ma ksiazek.\n");
    }
    
    fclose(pksiazki);

    return 0;
}

char pobierz(char *lancuch, int n){

    char *zwroc_wartosc = fgets(lancuch, n, stdin);

    while(*lancuch != '\0')
    {
        if(*lancuch == '\n')
        {
            *lancuch = '\0';
            break;
        }
        lancuch++;
    }

    return (int) zwroc_wartosc;
    
}

void edytujKsiazke(struct ksiazka *wksiazka){
    puts("Podaj nowy tytul dla ksiazki: ");
    pobierz(wksiazka->tytul, MAXTYT);
    puts("Podaj nowego autora dla ksiazki: ");
    pobierz(wksiazka->autor, MAXAUT);
    puts("Podaj nowa wartosc dla ksiazki: ");
    scanf("%f", &wksiazka->wartosc);

    while (getchar() != '\n') continue;
}