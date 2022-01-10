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

1 -     DONE
2 -     DONE
3 -     DONE
4 -     DONE
5 -     DONE
6 -     NOT DONE!
7 -     NOT DONE!
8 -     NOT DONE!
9 -     NOT DONE!
10 -    NOT DONE!
11 -    NOT DONE!

*/

void zad1(){
    printf("Patrz rozwiazanie zadania 14.1.c\n");
}    

void zad2(){
    printf("Patrz rozwiazanie zadania 14.2.c\n");
    /*struct dni {
        int dzien;
        char miesiac[20];
        int rok;
    };
    int suma = 0;
    struct dni podajdzien;
    printf("Podaj dzien: "); scanf("%d", &podajdzien.dzien);
    printf("Podaj miesiac: "); scanf("%s", podajdzien.miesiac);
    printf("Podaj rok: ");  scanf("%d", &podajdzien.rok);
    printf("Podales:\n");
    printf("%d, %s, %d\n", podajdzien.dzien, podajdzien.miesiac, podajdzien.rok);
    // sprawdz ktory miesiac roku (ogranicz sie do 3 pierwszych liter zgodnie z zadaniem)
    // styczen - 1 , luty - 2, marzec - 3, kwiecien - 4, maj - 5, czerwiec - 6,
    // lipiec - 7, sierpien - 8, wrzesien - 9, pazdziernik - 10, listopad - 11,
    // grudzien - 12
    // ile dni od poczatku roku?
    if((podajdzien.miesiac[0] == 's' && podajdzien.miesiac[1] == 't') || (podajdzien.miesiac[0] == '1' && podajdzien.miesiac[1] == '\0')){
        suma = podajdzien.dzien;
    }
    if((podajdzien.miesiac[0] == 'l' && podajdzien.miesiac[1] == 'u') || podajdzien.miesiac[0] == '2'){
        suma = 31 + podajdzien.dzien;
    }
    if((podajdzien.miesiac[0] == 'm' && podajdzien.miesiac[2] == 'r') || podajdzien.miesiac[0] == '3'){
        suma = 59 + podajdzien.dzien;
    }
    if(podajdzien.miesiac[0] == 'k' || podajdzien.miesiac[0] == '4'){
        suma = 90 + podajdzien.dzien;
    }
    if((podajdzien.miesiac[0] == 'm' && podajdzien.miesiac[2] == 'j')  || podajdzien.miesiac[0] == '5'){
        suma = 120 + podajdzien.dzien;
    }
    if((podajdzien.miesiac[0] == 'c' && podajdzien.miesiac[1] == 'z') || podajdzien.miesiac[0] == '6'){
        suma = 151 + podajdzien.dzien;
    }
    if((podajdzien.miesiac[0] == 'l' && podajdzien.miesiac[2] == 'p') || podajdzien.miesiac[0] == '7'){
        suma = 181 + podajdzien.dzien;
    }
    if((podajdzien.miesiac[0] == 's' && podajdzien.miesiac[1] == 'i') || podajdzien.miesiac[0] == '8'){
        suma = 212 + podajdzien.dzien;
    }
    if(podajdzien.miesiac[0] == 'w' || podajdzien.miesiac[0] == '9'){
        suma = 243 + podajdzien.dzien;
    }
    if(podajdzien.miesiac[0] == 'p' || (podajdzien.miesiac[0] == '1' && podajdzien.miesiac[1] == '0')){
        suma = 273 + podajdzien.dzien;
    }
    if((podajdzien.miesiac[0] == 'l' && podajdzien.miesiac[2] == 's') || (podajdzien.miesiac[0] == '1' && podajdzien.miesiac[1] == '1')){
        suma = 304 + podajdzien.dzien;
    }
    if(podajdzien.miesiac[0] == 'g' || (podajdzien.miesiac[0] == '1' && podajdzien.miesiac[1] == '2')){
        suma = 334 + podajdzien.dzien;
    }
    printf("Od poczatku roku minelo: %d dni\n", suma);
    */
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
    printf("Patrz rozwiazanie zadania 14.4.c oraz 14.4c.c\n");
}

void zad5(){
    printf("Patrz rozwiazanie zadania 14.5.c\n");
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