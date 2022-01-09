// rozwiazanie zadania 4 z rozdzialu 14
#include <stdio.h>
#define N 3

struct osoba {
    long long pesel;
    struct daneos {
        char imie[20];
        char drugieImie[20];
        char nazwisko[20];
    } dane;
};

void wyswietl(struct osoba *wsk, int n);


int main(void){
    struct osoba wsk[N] =
    {
        {65092301159, "Michael", "James", "Jordan"},
        {55555555555, "Leszek", "Pawel", "Hatala"},
        {77777777777, "Lebron", "", "James"}
    };

    wyswietl(wsk, N);

    return 0;
}

void wyswietl(struct osoba *wsk, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%s, %s %c -- %lld\n", wsk[i].dane.nazwisko, wsk[i].dane.imie, wsk[i].dane.drugieImie[0], wsk[i].pesel);
    }       
}