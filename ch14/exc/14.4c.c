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

void wyswietl(struct osoba wszyscy);


int main(void){
    struct osoba osoba1 = {65092301159, "Michael", "James", "Jordan"};
    struct osoba osoba2 = {55555555555, "Leszek", "Pawel", "Hatala"};
    struct osoba osoba3 = {77777777777, "Lebron", "Raymond", "James"};

    wyswietl(osoba1);
    wyswietl(osoba2);
    wyswietl(osoba3);

    return 0;
}

void wyswietl(struct osoba wszyscy){
    printf("%s, %s %c. -- %lld\n", wszyscy.dane.nazwisko, wszyscy.dane.imie, wszyscy.dane.drugieImie[0], wszyscy.pesel);       
}