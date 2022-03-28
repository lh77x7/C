// rozwiazanie zadania 6 z rodzialu 14

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMELEN 20
#define TEAMSIZE 10

// struktura zawodnik
struct Zawodnik
{
    char imie[NAMELEN];
    char nazwisko[NAMELEN];
    unsigned int rzuty, rzutycelne, asysty, faule;
    float srskutecznosc;
};

void pokazSrednia(struct Zawodnik *);
void pokazDaneZawodnikow(const struct Zawodnik *, int);

int main(void){

    // deklaracja i inicjalizacja tablicy zawodników
    struct Zawodnik zawodnicy[TEAMSIZE];
    for(int i = 0; i < TEAMSIZE; i++)
        zawodnicy[i] = (struct Zawodnik) {"", "", 0, 0, 0, 0, 0};

    FILE *fp;
    int numer;
    char imie[NAMELEN];
    char nazwisko[NAMELEN];
    unsigned int rzuty;
    unsigned int rzutycelne;
    unsigned int asysty;
    unsigned int faule;

    if((fp = fopen("danekoszykarzy.txt", "r")) == NULL)
    {
        fprintf(stderr, "Nie mozna bylo otworzyc pliku 'danekoszykarzy.txt.\n'");
        exit(EXIT_FAILURE);
    }

    // wczytaj dane z pliku
    while(fscanf(fp, "%d %s %s %u %u %u %u", &numer, imie, nazwisko, &rzuty, 
    &rzutycelne, &asysty, &faule) == 7) {
        if(zawodnicy[numer].imie[0] == '\0')
        {
            strncpy(zawodnicy[numer].imie, imie, NAMELEN);
            strncpy(zawodnicy[numer].nazwisko, nazwisko, NAMELEN);
        }
        zawodnicy[numer].rzuty += rzuty;
        zawodnicy[numer].rzutycelne += rzutycelne;
        zawodnicy[numer].asysty += asysty;
        zawodnicy[numer].faule += faule;
    }

    // wylicz średnią zawodników
    for(int i = 0; i < TEAMSIZE; i++)
        pokazSrednia(&zawodnicy[i]);

    // pokaż dane zawodników
    pokazDaneZawodnikow(zawodnicy, TEAMSIZE);

    if(fclose(fp) != 0)
        fprintf(stderr, "Problem z zamknieciem pliku!\n");

    return 0;    
}

void pokazSrednia(struct Zawodnik *zawodnik){
    zawodnik->srskutecznosc = (zawodnik->rzutycelne / (float) zawodnik->rzuty) * 100;
}

void pokazDaneZawodnikow(const struct Zawodnik *zawodnik, int rozmiar){

    unsigned int rzuty = 0, rzutycelne = 0, asysty = 0, faule = 0;

    printf("Statystyki zespolu (numer, imie, nazwisko, rzuty, rzutycelne, asysty, faule, srednia):\n");
    for(int i = 0; i < rozmiar; i++, zawodnik++)
    {
        printf("%2d", i);
        printf("%*s  %*s  %u  %u  %u  %u  %.3f \%%\n", NAMELEN, zawodnik->imie, NAMELEN, 
        zawodnik->nazwisko, zawodnik->rzuty, zawodnik->rzutycelne,
        zawodnik->asysty, zawodnik->faule, zawodnik->srskutecznosc);
        rzuty = zawodnik->rzuty;
        rzutycelne = zawodnik->rzutycelne;
        asysty = zawodnik->asysty;
        faule = zawodnik->faule;
    }
    printf("\nLaczne statystyki:%26s  %u  %u  %u  %u  %.3f \%%\n", "", rzuty, rzutycelne, asysty, faule,
    (rzutycelne / (float) rzuty) * 100);
}
