// 1-11.c - rozwiązania zadań z rozdziału 7
#include <stdio.h>
#define KONIEC '#'
#define PODSTAWA 40
#define NADGODZINY 1.5 * PODSTAWA
#define PODATEK1 0.15 * 1200
#define PODATEK2 0.20 * 600
#define PODATEK3 0.25 

// deklaracje funkcji
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

// program główny
int main(void){
    int choice;

    printf("Podaj liczbe od 1-11 (znak nieliczbowy konczy): ");
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
            printf("Wybierz liczbe z zakresu 1-11.\n");
            break;
        }
        printf("Podaj liczbe od 1-11 (znak nieliczbowy konczy): ");
    }
    printf("Koniec programu.\n");

    return 0;
}

/*

1 -     DONE
2 -     DONE
3 -     DONE
4 -     DONE
5 -     NOT DONE!
6 -     NOT DONE!
7 -     DONE
8 -     NOT DONE!
9 -     NOT DONE!
10 -    NOT DONE!
11 -    NOT DONE!

*/

// definicje funkcji

void zad1(){
    int ch;
    int licznikodstepow = 0, liczniknowejlini = 0, licznikinne = 0;
    while((ch = getchar()) != KONIEC){
        if (ch == ' ') licznikodstepow++;
        if (ch == '\n') liczniknowejlini++;
        else 
            licznikinne++;
    }
    printf("W zdaniu jest %d odstepow, %d znakow nowej lini i %d innych znakow.\n",
    licznikodstepow, liczniknowejlini, licznikinne);
}

void zad2(){
    int ch, licznik = 0;
    while((ch = getchar()) != KONIEC){
        if(licznik++%8){
            printf("%c:%d ", ch, ch);
        }
        else
            printf("\n");
    }
}

void zad3(){
    int liczbyparzyste = 0, liczbynieparzyste = 0, liczba = 0;
    float sumaparzystych = 0, sumanieparzystych = 0;
    scanf("%d", &liczba);
    while(liczba != 0){
        if(liczba%2){
            liczbynieparzyste++;
            sumanieparzystych += liczba;
        } 
        else{
            liczbyparzyste++;
            sumaparzystych += liczba;
        } 
        scanf("%d", &liczba);
    }
    printf("parzyste: %d, nieparzyste: %d\n", liczbyparzyste, liczbynieparzyste);
    printf("sred. parzystych: %.2f, sred. nieparzystych: %.2f\n", sumaparzystych/liczbyparzyste, sumanieparzystych/liczbynieparzyste);
}

void zad4(){
    int ch, licznik = 0;
    while((ch = getchar()) != KONIEC){
        if(ch == '.'){
            putchar('!'); 
            licznik++;
        } 
        if(ch == '!'){
            putchar('!');
            putchar('!');
            licznik++;
        }
        else {
            putchar(ch);
        }        
    }
    printf("\nLiczba zmian: %d\n", licznik);
}

void zad5(){
    printf("5!\n");
}

void zad6(){
    printf("6!\n");
}

void zad7(){
    float godziny, wynagrodzenie, podatek;
    printf("Podaj liczbe przepracowanych godzin w miesiacu: ");
    scanf("%f", &godziny);
    if (godziny > 200) {
        printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
    } else {
        if(godziny < 160){
        wynagrodzenie = godziny * PODSTAWA;
        podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
        } 
        else {
        wynagrodzenie = godziny * PODSTAWA + (godziny - 160) * NADGODZINY;
        podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
        }
        printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
    }
}

void zad8(){
    printf("8!\n");
}

void zad9(){
    printf("9!\n");
}

void zad10(){
    printf("10!\n");
}

void zad11(){
    printf("11!\n");
}