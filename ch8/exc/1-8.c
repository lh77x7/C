// 1-8.c - rozwiazania do cwiczen 1-8 rozdzial 8

/*

1. Napisz program, który zlicza znaki (wpisywanie lub pobieranie z pliku) aż
do wystąpienia końca pliku.

2. Napisz program, który odczytuje dane wejściowe do momentu napotkania końca
pliku i wyświetla każdy znak wraz z jego dziesiętnym kodem ASCII. W jednym
wierszu powinno znajdować się dziesięć par znak-kod, ale odczytanie znaku
nowej linii powinno pociągnąć ze sobą rozpoczęcie nowego wiersza.
Znaki niedrukowane o kodach mniejszych niż kod spacji powinny być traktowane 
w szczególny sposób. Jeśli znak jest tabulatorem lub znakiem nowej linii, należy
wyświetlić odpowiednio \t lub \n. Inne znaki niedrukowane należy przedstawić
w postaci znaków sterujących. Na przykład, znak o kodzie 1 to Ctrl-A, co można 
zapisać jako ^A. Zwróć uwagę, że kod ASCII litery a jest o 64 większy niż kod znaku 
Ctrl-A. Podobna zależność zachodzi dla innych znaków niedrukowanych.

3. Napisz program, który odczytuje dane do momentu napotkania końca pliku i wyświetla
liczbę małych i wielkich liter. Przyjmij, że kolejnym literom odpowiadają kolejne
wartości numeryczne.

4. Napisz program, który odczytuje dane do napotkania końca pliku i wyświetla
średnią liczbę liter w słowie. Pamiętaj, że do liter nie można zaliczyć znaków
niedrukowanych. Ściśle rzecz biorąc, nie należałoby również zliczać znaków
przestankowych, ale nie musisz się tym przejmować. (Jeśli jednak chcesz się tym
przejmować, możesz skorzystać z funkcji ispunct() z rodziny ctype.h).

5. Zmień program z listingu 8.4 tak, aby stosował bardziej inteligentną strategię
zgadywania. Na przykład, na początek niech program zapyta użytkownika, czy szukana
liczba jest większa, mniejsza czy równa 50. Jeśli szukana liczba jest większa,
następną próbą powinno być być 75, które znajduje się w połowie drogi między 50 a 100.
Jeśli 75 jest zbyt duże, kolejną próbą powinna być liczba pomiędzy 75 a 50, i tak
dalej. Dzięki opisanej strategii przeszukiwania dwudzielnego, program szybko 
namierza prawidłową odpowiedź, przynajmniej jeśli użytkownik nie oszukuje.

6. Zmodyfikuj funkcję pobierz_pierwszy() z listingu 8.8 tak, aby zwracała ona pierwszy
napotkany znak drukowalny. Przetestuj ją w prostym programie.

7. Zmodyfikuj ćwiczenie 8. z rodziału 7. tak, aby opcje menu były oznaczone
literami zamiast liczbami.

8. Napisz program wyświetlający menu z następującymi możliwościami: dodawanie,
odejmowanie, mnożenie i dzielenie. Po dokonaniu wyboru, program powinien
zapytać o dwie liczby, a następnie wykonać żądane działanie.
Program powinien akceptować wyłącznie proponowane opcje. Należy używać 
typu float do reprezentacji liczb oraz pozwolić użytkownikowi na kolejną próbę,
jeśli pomyli się przy wprowadzaniu danych. W przypadku dzielenia program powinien
ponownie poprosić użytkownika o wprowadzanie liczby, jeśli jako drugą wartość 
podano 0. Uruchomienie programu powinno dać następujący rezultat:

    Wybierz jedno z dzialan:
    a. dodawanie    b. odejmowanie
    c. mnozenie     d. dzielenie
    k. koniec
    a
    Podaj pierwsza liczbe: 22.4
    Podaj druga liczbe: jeden
    jeden nie jest liczba.
    Podaj liczbe, np. 2.5, -178E8 czy 3: 1
    22.4 + 1 = 23.4
    Wybierz jedno z dzialan:
    a. dodawanie    b. odejmowanie
    c. mnozenie     d. dzielenie
    k. koniec   
    d
    Podaj pierwszy liczbe: 18.4
    Podaj druga liczbe: 0
    Podaj liczbe inna niz 0: 0.2
    18.4 / 0.2 = 92
    a. dodawanie    b. odejmowanie
    c. mnozenie     d. dzielenie
    k. koniec
    k
    Koniec.
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>
#define PODSTAWA 40
#define STAWKA1 35
#define STAWKA2 37
#define STAWKA3 40
#define STAWKA4 45
#define NADGODZINY 1.5 * PODSTAWA
#define PODATEK1 0.15 * 1200
#define PODATEK2 0.20 * 600
#define PODATEK3 0.2
#define STOP '!'

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
int zad6();
void zad7();
void zad8();
void dodawanie();
void odejmowanie();
void mnozenie();
void dzielenie();
int pobierzWybor();
int pobierzPierwszy();
int pobierzPierwszyModified();
float pobierzFloat();

int main(void){
    int choice;

    printf("Podaj liczbe od 1-8(q konczy): ");
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
        default:
            break;
        }
        printf("Podaj liczbe od 1-8 (q konczy): ");
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
6 -     DONE
7 -     DONE
8 -     DONE

*/

void zad1(){
    // zlicza liczbe znakow w pliku
    int ch;
    FILE*fp;
    char nazwapliku[50];    // przechowuje nazwe pliku

    printf("Podaj nazwe pliku: "); scanf("%s", nazwapliku);
    fp = fopen(nazwapliku, "r"); // otwiera plik do odczytu
    if(fp == NULL)
    {
        printf("Blad przy probie otwarcia pliku");
        exit(1);    // wyjscie z programu
    }
    // getc(fp) pobiera znak z otwartego pliku
    int licznik = 0;
    while ((ch = getc(fp)) != EOF)
        licznik++;
        printf("Liczba znakow: %d\n", licznik);
    fclose(fp); // zamyka plik
}

void zad2(){
    int ch;
    FILE*fp;
    char nazwapliku[50];    // przechowuje nazwe pliku

    printf("Podaj nazwe pliku: "); scanf("%s", nazwapliku);
    fp = fopen(nazwapliku, "r"); // otwiera plik do odczytu
    if(fp == NULL)
    {
        printf("Blad przy probie otwarcia pliku");
        exit(1);    // wyjscie z programu
    }
    // getc(fp) pobiera znak z otwartego pliku
    int licznik = 1;
    while ((ch = getc(fp)) != EOF)
    if(licznik++ %10 != 0) {
        printf("%c: %d ", ch, ch);
    }
    else
        printf("%c: %d\n", ch, ch);
    printf("\n");
    // powinnem jeszcze sprawdzic znaki tabulacji, 
    // nowej lini i inne znaki sterujace

    fclose(fp); // zamyka plik
}

void zad3(){
    int ch;
    int duzeLitery = 0, maleLitery = 0, ileZnakow = 0;
    while((ch = getchar()) != STOP)
    {
        ileZnakow++;        // liczy znaki
        if(ch >= 'a' && ch <= 'z')
            maleLitery++;   // liczy male litery
        if(ch >= 'A' && ch <= 'Z')
            duzeLitery++;   // liczy duze litery
    }
    printf("Znakow = %d, male litery = %d, duza litery = %d\n", ileZnakow, maleLitery, duzeLitery);
}

void zad4(){
    int ch, poprzedni;
    long ileZnakow = 0; // liczba znakow
    int ileWierszy = 0; // liczba linii
    int ileSlow = 0;    // liczba slow
    int ileNpWierszy = 0; // liczba niepelnych wierszy
    bool WSlowie = 0;   // true, jesli ch znajduje sie w slowie
    poprzedni = '\n';
    while((ch = getchar()) != STOP)
    {
        ileZnakow++;        // liczy znaki
        if(ch == '\n')
            ileWierszy++;   // liczy wiersze
        if(!isspace(ch) && !WSlowie)
        {
            WSlowie = true; // zaczyna sie nowe slowo
            ileSlow++;  // liczy slowa
        }
        if(isspace(ch) && WSlowie)
            WSlowie = false;    // znajduje koniec slowa
        poprzedni = ch;     // przechowuje wartosc znaku
    }
    if(poprzedni = '\n')
        ileNpWierszy = 1;
    printf("Znakow = %ld, slow = %d, wierszy = %d\n", ileZnakow, ileSlow, ileWierszy);
    printf("Niepelnych wierszy = %d\n", ileNpWierszy);
    printf("Srednio liczba liter w slowie = %d\n", (ileZnakow - ileWierszy)/ileSlow);
}

void zad5(){
    int num, guess, tries = 0;
    srand(time(0)); // generator seed
    num = rand() % 100 + 1; // losowy numer pomiędzy 1, a 100
    printf("Zgadywanka. Podaj liczbe od 1 do 100: ");
    scanf("%d", &guess);
    do
    {
        //scanf("%d", &guess);
        tries++;
        if(guess > num && guess != num)
        {
            printf("Zbyt duza. Podaj liczbe w zakresie %d i %d\n", guess, guess-25);
        }
        else {
            if(guess < num && guess != num)
            {
                printf("Zbyt mala. Podaj liczbe w zakresie %d i %d\n", guess, guess+25);
            }
        }
        scanf("%d", &guess);

    } while(guess != num);
    printf("Dobrze! Zgadles za %d razem\n", tries);
}

int zad6(){
    int ch;
    printf("Wpisz wybrana litere:\n");
    printf("a. dodawanie    b. odejmowanie\n");
    printf("c. dzielenie    d.mnozenie\n");
    printf("k. koniec\n");
    ch = pobierzPierwszyModified();
    while ((ch < 'a' || ch > 'd') && ch != 'k')
    {   
        printf("Wpisz a,b,c,d lub k.\n");
        ch = pobierzPierwszyModified();
    }
    return ch;
}

void zad7(){
    char ch;
    int godziny;
    float wynagrodzenie, podatek;
    while((ch = getchar()) != 'k'){
        switch (ch)
        {
            case 'a':
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA1;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA1 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            case 'b': 
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA2;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA2 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            case 'c':
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA3;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA3 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            case 'd':
                printf("Podaj liczbe przepracowanych godzin: "); scanf("%d", &godziny);
                if (godziny > 200) {
                    printf("Podaj realna wartosc. Nikt nie jest robotem.\n");
                } else {
                    if(godziny < 160){
                    wynagrodzenie = godziny * STAWKA4;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    } 
                else {
                    wynagrodzenie = godziny * STAWKA4 + (godziny - 160) * NADGODZINY;
                    podatek = PODATEK1 + PODATEK2 + (wynagrodzenie - 1800) * PODATEK3;
                    }
                    printf("Wynagrodzenie wynosi: %.2f $, a podatek: %.2f $\n", wynagrodzenie, podatek);
                }
                break;
            default:
                printf("********************************************\n");
                printf("Podaj liczbe Twojego wynagrodzenia lub opcji\n");
                printf("a) 35 zl/godz.      b) 37 zl/godz.\n");
                printf("c) 40 zl/godz.      d) 45 zl/godz.\n");
                printf("k) wyjscie\n");
                printf("********************************************\n");
                break;
        }
    }    
}

void zad8(){
    int wybor;
    int pobierzWybor();
    void dodawanie(void);
    while((wybor = pobierzWybor()) != 'k')
    {
        switch (wybor)
        {
        case 'a':
            dodawanie();
            break;
        case 'b':
            odejmowanie();
            break;
        case 'c':
            mnozenie();
            break;
        case 'd':
            dzielenie();
            break;
        default:
            printf("Blad programu!\n");
            break;
        }
    }    
}

void dodawanie(){
    float liczba1, liczba2;
    printf("Podaj liczbe1: "); liczba1 = pobierzFloat();
    printf("Podaj liczbe2: "); liczba2 = pobierzFloat();
    printf("%.2f + %.2f = %.2f\n", liczba1, liczba2, liczba1 + liczba2);    
}

void odejmowanie() {
    float liczba1, liczba2;
    printf("Podaj liczbe1: "); liczba1 = pobierzFloat();
    printf("Podaj liczbe2: "); liczba2 = pobierzFloat();
    printf("%.2f - %.2f = %.2f\n", liczba1, liczba2, liczba1 - liczba2);
}

void mnozenie() {
    float liczba1, liczba2;
    printf("Podaj liczbe1: "); liczba1 = pobierzFloat();
    printf("Podaj liczbe2: "); liczba2 = pobierzFloat();
    printf("%.2f\n", liczba1, liczba2, liczba1 * liczba2);
}

void dzielenie() {
    float liczba1, liczba2;
    printf("Podaj liczbe1: "); liczba1 = pobierzFloat();
    printf("Podaj liczbe2: "); liczba2 = pobierzFloat();
    printf("%.2f\n", liczba1, liczba2, liczba1 / liczba2);
}

int pobierzWybor() {
    int ch;
    printf("Wpisz wybrana litere:\n");
    printf("a. dodawanie    b. odejmowanie\n");
    printf("c. dzielenie    d.mnozenie\n");
    printf("k. koniec\n");
    ch = pobierzPierwszy();
    while ((ch < 'a' || ch > 'd') && ch != 'k')
    {   
        printf("Wpisz a,b,c,d lub k.\n");
        ch = pobierzPierwszy();
    }
    return ch;
}

int pobierzPierwszy() {
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

float pobierzFloat() {
    float we;
    char ch;
        while (scanf("%f", &we) !=1)
        {
            while ((ch = getchar()) !='\n' )
            putchar(ch);    // pomija bledne dane wejsciowe
            printf("\nNie jestem liczba zmiennoprzecinkowa.\n");
            printf("Prosze podac np. 25.4, 24.4 lub -24.6: ");
        }
    return we;
}

int pobierzPierwszyModified() {
    int ch;

    ch = getchar();
    if(isprint(ch))
        return ch;
    while (getchar() != '\n')
        continue;
    return ch;
}