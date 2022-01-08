// 1-11.c - rozwiazania do cwiczen 1-11 rozdzial 14

#include <stdio.h>
#include <string.h>

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void zad10();
void zad11();
#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 100 // maksymalna liczba ksiazek

int main(void){
    int choice;

    printf("Podaj liczbe od 1-11(q konczy): ");
    while(scanf("%d", &choice) == 1)
    {
        switch (choice)
        {
        case 1:
            zad1();
            break;
        case 2:
            zad2();
            break;
        case 3:
            zad3();
            break;
        case 4:
            zad4();
            break;
        case 5:
            zad5();
            break;
        case 6:
            zad6();
            break;
        case 7:
            zad7();
            break;
        case 8:
            zad8();
            break;
        case 9:
            zad9();
            break;
        case 10:
            zad10();
            break;
        case 11:
            zad11();
            break;        
        default:
            break;
        }
        printf("Podaj liczbe od 1-11 (q konczy): ");
    }
    printf("Koniec programu.\n");

    return 0;
}

/*

1 -     NOT DONE!
2 -     NOT DONE!
3 -     DONE
4 -     NOT DONE!
5 -     NOT DONE!
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!
9 -     NOT DONE!
10 -    NOT DONE!
11 -    NOT DONE!

*/

void zad1(){

}    

void zad2(){

}

void zad3(){
    struct ksiazka{
        char tytul[MAXTYT];
        char autor[MAXAUT];
        float wartosc;
    };
    struct ksiazka bibl[MAXKS]; // tablica struktur typu ksiazka
    struct ksiazka temp; // tablica struktur tymczasowa
    float suma = 0;
    int licznik = 0;
    int index;
    getchar(); // przechwytywania znaku
    printf("Podaj tytul ksiazki.\n");
    printf("Aby zakonczyc, wcisnij [ENTER] na poczatku wiersza.\n");
    while(licznik < MAXKS && gets(bibl[licznik].tytul) != NULL && bibl[licznik].tytul[0] !='\0'){
        printf("Teraz podaj autora.\n");
        gets(bibl[licznik].autor);
        printf("Teraz podaj wartosc.\n");
        scanf("%f", &bibl[licznik++].wartosc);
        while(getchar() != '\n')    // czysci wiersz wejsciowy
            continue;
        if(licznik < MAXKS)
        printf("Podaj kolejny tytul.\n");
    }
    // przed sortowaniem
    printf("Oto lista Twoich ksiazek:\n");
    for(index = 0; index < licznik; index++)
    printf("%s, autor: %s, cena: %.2f zl\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
    
    // sortowanie 
    for(index = 1; index < licznik; index++) {
        for(int i = 0; i < licznik - index; i++)
        {
            // w ifie podajesz ktora czesc struktury sortujesz 
            if(strcmp(bibl[i].tytul, bibl[i+1].tytul) > 0)
            {
                temp = bibl[i];
                bibl[i] = bibl[i + 1];
                bibl[i + 1] = temp;
            }
        }
    }

    // po sortowaniu
    printf("-----------------------------------------------\n");
    printf("Oto lista Twoich ksiazek posortowana wg tytulu:\n");
    for(index = 0; index < licznik; index++) {
        printf("%s, autor: %s, cena: %.2f zl\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
        suma += bibl[index].wartosc;
    }
    printf("Suma wartosci ksiazek: %.2f\n", suma);
    printf("-----------------------------------------------\n");
    
}

void zad4(){

}

void zad5(){

}

void zad6(){

}

void zad7(){

}

void zad8(){

}

void zad9(){

}

void zad10(){

}

void zad11(){

}