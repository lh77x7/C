// wsk_op.c - dzialania na wskaźnikach
#include <stdio.h>
int main(void){
    int urna[5] = {100, 200, 300, 400, 500};
    int *wsk1, *wsk2, *wsk3;
    wsk1 = urna;    // przypisuje adres wskaznikowi
    wsk2 = &urna[2];    // pobranie wskaznika i pobranie wskazanej wartosci
    printf("wartosc wskaznika, wskazywana wartosc, adres wskaznika:\n");
    printf("wsk1 = %p, *wsk1 = %d, &wsk1 = %p\n",
    wsk1, *wsk1, &wsk1);
    // dodawanie wskaznikow
    wsk3 = wsk1 + 4;
    printf("\ndodanie int do wskaznika:\n");
    printf("wsk1 + 4 = %p, *(wsk4 + 3) = %d\n", wsk1 + 4, *(wsk1 + 3));
    wsk1++;     // inkrementacja wskaznika (zwieksznie o 1)
    printf("\nwartosci po wsk1++:\n");
    printf("wsk1 = %p, *wsk1 = %d, &wsk1 = %p\n",
    wsk1, *wsk1, &wsk1);
    wsk2--;     // dekrementacja wskaznika (zmniejszenie o 1)
    printf("\nwartosc po --wsk2:\n");
    printf("wsk2 = %p, *wsk2 = %d, &wsk2 = %p\n",
    wsk2, *wsk2, &wsk2);
    --wsk1;     // przywrocenie wartosci poczatkowych
    ++wsk2;     // przywrocenie wartosci poczatkowych
    printf("\nWskazniki przywrocene do swoich poczatkowych wartosci:\n");
    printf("wsk1 = %p, wsk2 = %p\n", wsk1, wsk2);
    // odejmowanie jednego wskaznika od drugiego
    printf("\nodejmowanie jednego wskaznika od drugiego:\n");
    printf("wsk2 = %p, wsk1 = %p, wsk2 - wsk1 = %d\n",
    wsk2, wsk1, wsk2 - wsk1);
    // odejmowanie zmiennej int od wskaznika
    printf("\nodejmowanie zmiennej int od wskaznika:\n");
    printf("wsk3 = %p, wsk3 - 2 = %p\n",
    wsk3, wsk3 - 2);
    
    return 0;
}