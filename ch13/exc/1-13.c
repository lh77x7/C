// 1-13.c - rozwiazania do cwiczen 1-13 rozdzial 13

/*

1. Napisz program kopiujący plik, który pobiera nazwę pliku źródłowego i decelowego
z wiersza poleceń. Skorzystaj ze standardowego wejścia/wyjścia i trybu binarnego.

2. Napisz program, który wyświetla kolejno na ekranie wszystkie pliki, których
nazwy podano w wierszu poleceń. Użyj pętli sterowanej zmienną argc.

3. Napisz program kopiujący pliki, który pyta użytkownika o podanie nazwy pliku
tekstowego, stanowiącego plik źródłowy oraz nazwę pliku wyjściowego. Program ma
zamienić wszystkie znaki na odpowiadające im wielkie litery. W tym celu
użyj funkcji toupper() z biblioteki ctype.h. Wynik wypisz na standardowe wyjście,
korzystając z trybu tekstowego.

4. Napisz program, który wyświetla na ektranie sekwencyjnie zawartość wszystkich
plików podanych w wierszu poleceń. W pętli skorzystaj z argumentu funkcji
main() - argc, oznaczającego liczbę argumentów.

5. Zmodyfikuj program z listingu 13.6 tak, aby wykorzystywał on interfejs oparty
na wierszu poleceń, a nie interfejs interaktywny.

6. Wadą programów korzystających z argumentów wiersza poleceń jest to, że 
wymagają one od użytkownika znajomości zasad ich prawidłowego użycia.
Zmień program z listingu 13.2 tak, aby zamiast przyjmować argumenty, umożliwiał 
on wpisanie potrzebnych informacji w sposób interaktywny.

7. Napisz program, któru otwiera dwa pliki o nazwach podanych w wierszu poleceń.

a) Program powinien wyświetlić 1. wiersz pierwszego pliku, 1. wiersz drugiego
pliku, 2. wiersz pierwszego pliku, 2. wiersz drugiego pliku, i tak dalej,
aż do momentu wyświetlenia ostatniego wiersza pliku zawierającego większą ilość
wierszy.

b) Zmodyfikuj program z punku a. tak, aby wiersze o tym samym numerze były wyświetlane
w tym samym wierszu.

8. Napisz program, który przyjmuje jako argumenty wiersza poleceń jeden znak
oraz zero lub więcej nazw plików. Jeśli po znaku nie następują żadne argumenty,
program powinien pobierać dane z wejścia standardowego. W przeciwnym wypadku,
program powinien otwierać każdy kolejny plik i podawać liczbę razy, jaką występuje
w nim zadany znak. Obok liczby wystąpień na ekranie powinna widnieć nazwa pliku
oraz poszukiwany znak. Pamiętaj o wykrywaniu błędów: sprawdzeniu, czy
liczba argumentów jest prawidłowa, oraz czy plik może zostać otwarty.
Jeśli otwarcie pliku jest niemożliwe, program powinien zgłaszać ten fakt, po czym
przejść do następnego pliku.

9. Zmodyfikuj program z listingu 13.3 tak, aby słowa były ponumerowane według 
kolejności dodawania ich do listy, poczynając od numeru 1. Dopilnuj, aby przy
drugim uruchomieniu programu numeracja rozpoczynała się od miejsca, w którym
została przerwana.

10. Napisz program, który otwiera plik tekstowy o nazwie uzyskanej w sposób
interaktywny, Utwórz pętlę, umożliwiającą użytkownikowi podanie położenia w pliku.
Program powinien wyświetlić część pliku zawartą pomiędzy podanym miejscem 
a najbliższym znakiem nowej linii. Sygnałem kończącym program powinno być
podanie przez użytkownika danych nienumerycznych.

11. Napisz program, który przyjmuje dwa argumenty wiersza poleceń. Pierwszy z nich
jest łańcuchem, drugi - nazwą pliku. Program powinien następnie przeszukać plik
i wyświetlić wszystkie wiersze zawierające podany łańcuch. (Ponieważ zadanie to 
wymaga przetwarzania łańcuchów, a nie znaków, użyj funkcji fgets() zamiast 
getc(). Przeszukiwanie wiersza zrealizuj za pomocą standardowej funkcji strstr(),
opisanej krótko w rodziale 11).

12. Utwórz plik tekstowy składający się z 20 rzedów i 30 liczb całkowitych
rozdzielonych odstępami. Liczby powinny należeć do przedziału 0-9. Niech plik
ten będzie cyfrową reprezentacją rysunku, a wartości od 0 do 9 oznaczają coraz 
większe poziomy zaczernienia. Napisz program, który wczytuje zawartość pliku
do tablicy 20x30 wartości typu int. Aby zamienić ten zbiór liczb na rysunek,
program powinien użyć wartości z tej tablicy do zainicjalizowania kolejnej tablicy,
tym razem złożonej z 20 na 31 wartości typu char. Liczbe 0 powinien odpowiadać
odstęp, liczbie 1 - kropka, i tak dalej, tak, aby większym liczbom odpowiadały
znaki, które zajmują więcej miejsca. Liczbę 9 może na przykład symbolizować znak #.
Ostatni(31.) znak w każdym rzędzie powinien być znakiem zerowym tak, aby utworzyć
tablicę 20 łańcuchów. Program powinien wyświetlać rysunek (czyli kolejne łańcuchy)
na ekranie oraz zapisać go w pliku tekstowym. Na przykład, załóżmy, że plik 
wejściowy zawiera następujące dane (znajdziesz je w pliku dane.we dostępnym 
razem z programami przykładowymi w Internecie):

    0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 2 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 5 2 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 1 9 8 5 4 5 2 0 0 0 0 0 0 0 0 0
    0 0 0 0 9 0 0 0 0 0 0 0 5 8 9 9 8 5 0 4 5 2 0 0 0 0 0 0 0 0
    0 0 9 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 4 5 2 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 1 8 5 0 0 0 4 5 2 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 4 5 2 0 0 0 0 0
    5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
    8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
    9 9 9 9 0 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9
    8 8 8 8 8 8 8 8 8 8 8 8 5 8 9 9 8 5 8 8 8 8 8 8 8 8 8 8 8 8
    5 5 5 5 5 5 5 5 5 5 5 5 5 8 9 9 8 5 5 5 5 5 5 5 5 5 5 5 5 5
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0
    0 0 0 0 2 2 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
    0 0 0 0 3 3 0 0 0 0 0 0 5 8 9 9 8 5 0 5 6 1 1 1 1 6 5 0 0 0
    0 0 0 0 4 4 0 0 0 0 0 0 5 8 9 9 8 5 0 0 5 6 0 0 6 5 0 0 0 0
    0 0 0 0 5 5 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 6 6 0 0 0 0 0 0 
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 0 0 0 0 0 0 5 8 9 9 8 5 0 0 0 0 0 0 0 0 0 0 0 0

Dane wyjściowe mogłyby wyglądać następująco (są one zawarte w dane.wy):

    @         *%@@%*'
      @       *%@@%**'
              *%.@%*~*'
      @       *%@@%* ~*'        
    @         *%@@%*  ~*'       
              *%@.%*   ~*'      
              *%@@%*    ~*'     
  *************%@@%*************
  %%%%%%%%%%%%*%@@%*%%%%%%%%%%%%
  @@@@ @@@@@@@@@@@@@@@@@@@@@@@@@
  %%%%%%%%%%%%*%@@%*%%%%%%%%%%%%
  *************%@@%*************
              *%@@%*
              *%@@%*    ==
      ''      *%@@%*  *=  =*
      ::      *%@@%* *=....=*   
      ~~      *%@@%*  *=  =*
      **      *%@@%*    ==
              *%@@%*
              *%@@%*

13. Obrazy cyfrowe, szczególnie te przesyłane drogą radiową z pojazdów kosmicznych,
mogą zawierać usterki. Uzupełnij program z ćwiczenia 11 o funkcję poprawiającą
jakość obrazu. Powinna ona porównywać każdą wartość z jej "sąsiadami" z lewej,
prawej, góry i dołu. Jeżeli wartość różni się o więcej niż 1 od każdego z sąsiadów,
funkcja powinna zastąpić ją średnią arytmetyczną wartości sąsiadujących. Średnia
powinna zostać zaokrąglona do najbliższej liczby całkowitej. Zauważ, że znaki
na granicach rysunku posiadają mniej niż czterech sąsiadów, wymagają więc
specjalnego traktowania.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strcpy(), strcat()
#include <ctype.h>  // toupper()
#include <math.h>
#define MAX 40
#define ROWS 20 
#define COLS 30
#define LEVELS 10
const char trans[LEVELS + 1] = " .':~*=&%@";

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
void zad12();
void zad13();
void MakePic(int data[][COLS], char pic[][COLS], int rows);
void init(char arr[][COLS], char ch);
void deglitch(int data[][COLS]);

int main(void){
    int choice;

    printf("Podaj liczbe od 1-13(q konczy): ");
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
        case 12:
            zad12();
            break;
        case 13:
            zad13();
            break;        
        default:
            break;
        }
        printf("Podaj liczbe od 1-13 (q konczy): ");
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
9 -     DONE
10 -    DONE
11 -    DONE
12 -    DONE
13 -    DONE

*/

void zad1(){
    printf("Patrz rozwiazanie 13.1.c\n");
}    

void zad2(){
    printf("Patrz rozwiazanie 13.2.c\n");
}

void zad3(){
    FILE *we, *wy;
    int ch;
    char plikWej[40], plikDoc[40];
    int licznik = 0;
    getchar();
    printf("Podaj nazwe pliku wejsciowego: ");
    gets(plikWej);
    // czy mozna otworzyc plik wejsciowy?
    if((we = fopen(plikWej, "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n.", plikWej);
        exit(2);
    }
    printf("Podaj nazwe pliku wyjsciowego: ");
    gets(plikDoc);
    // czy mozna otworzyc plik docelowy do zapisu?
    if((wy = fopen(plikDoc, "w")) == NULL)
    {
        fprintf(stderr, "Nie mozna otworzyc \"%s\" - pliku wyjsciowego.\n", plikDoc);
        exit(3);
    }
    while((ch = getc(we)) != EOF)
    {
        ch = toupper(ch);
        putc(ch, wy);
        putc(ch, stdout);
        licznik++;
    }
    if(fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");

}

void zad4(){
    printf("Patrz rozwiazanie 13.4.c\n");
}

void zad5(){
    printf("Patrz rozwiazanie 13.5.c\n");
}

void zad6(){
    FILE *we, *wy;  // deklarowanie 2 wskazników plikowych
    int ch;
    char nazwaWe[40]; // miejsce dla nazwy pliku wejsciowego
    char nazwa[40]; // miejsce dla nazwy pliku wyjsciowego
    int licznik = 0;
    getchar();
    printf("Podaj nazwe pliku: ");
    gets(nazwaWe);
    if((we = fopen(nazwaWe, "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku \"%s\".\n", nazwaWe);
        exit(2);
    }
    strcpy(nazwa, nazwaWe); // kopiowanie nazwy pliku do tablicy
    strcat(nazwa, ".new");  // dopisanie .new do nazwy
    if((wy = fopen(nazwa, "w")) == NULL)
    {   // otwiera plik do zapisu
        fprintf(stderr, "Nie mozna otworzyc pliku wyjsciowego.\n");
        exit(3);
    }
    while((ch = getc(we)) != EOF)
        if(licznik++ %3 == 0)
            putc(ch, wy);   // wyswietla co 3 znak
    if(fclose(we) != 0 || fclose(wy) != 0)
        fprintf(stderr, "Blad przy zamykaniu plikow.\n");
}

void zad7(){
    printf("Patrz rozwiazanie 13.7.c\n");
}

void zad8(){
    printf("Patrz rozwiazanie 13.8.c\n");
}

void zad9(){
    FILE *wp;
    char slowa[MAX];
    char ch;
    int licznik = 1;
    getchar();
    if((wp = fopen("slowa", "a+b")) == NULL)
    {
        fprintf(stdin, "Nie moge otworzyc pliku \"slowa\".\n");
        exit(1);
    }

    rewind(wp); // przejdz do poczatku pliku
    while((ch = fgetc(wp)) != EOF)
    {
        if(ch = ' ')
            licznik++;
    }

    puts("Podaj slowa, ktore maja zostac dodane do pliku;");
    puts("Aby zakonczyc, wcisnij Enter na poczatku wiersza.");
    while(gets(slowa) != NULL && slowa[0] != '\0')
    {
        fprintf(wp, "%d-%s ", licznik, slowa);
        licznik++;
    }
    puts("Zawartosc pliku:");
    rewind(wp); // przejdz do poczatku pliku
    
    while(fscanf(wp, "%s", slowa) == 1)
        puts(slowa);
    
    if(fclose(wp) != 0)
        fprintf(stderr, "Blad przy zamykaniu pliku.\n");
}

void zad10(){
    char nazwa[40];
    char ch;
    FILE *we;
    long pozycja;
    getchar();
    printf("Podaj nazwe pliku do otwarcia: ");
    scanf("%40s", nazwa);
    // otwieram plik
    if((we = fopen(nazwa, "r")) == NULL)
    {
        fprintf(stderr, "Nie mogę otworzyć pliku %s.\n", nazwa);
        exit(1);
    }
    puts("Podaj pozycje w pliku (numer ujemny lub nie numeryczny - koniec): ");
    scanf("%d", &pozycja);
    while(scanf("%ld", &pozycja) == 1 && pozycja >= 0)
    {
        fseek(we, pozycja, SEEK_SET);
        ch = (char)getc(we);
        while(ch != EOF && ch != '\n')
        {
            putc(ch, stdout);
            ch = (char)getc(we);
        }
        putchar('\n');
        puts("Podaj pozycje w pliku (numer ujemny lub nie numeryczny - koniec): ");
    }
    // zamykam plik
    fclose(we);
}

void zad11(){
    printf("Patrz rozwiazanie 13.11.c\n");
}

void zad12(){
    int row, col;
    int picIn[ROWS][COLS];
    char picOut[ROWS][COLS];
    char fileName[81];
    FILE * infile;

    init(picOut, 'S');

    printf("Wpisz nazwe pliku: ");
    scanf("%80s", fileName);
    if ((infile = fopen(fileName, "r")) == NULL)
    {
        fprintf(stderr, "Nie moge otworzyc pliku.\n");
        exit(EXIT_FAILURE);
    }

    for (row = 0; row < ROWS; row++)
        for (col = 0; col < COLS; col++)
            fscanf(infile, "%d", &picIn[row][col]);
    if (ferror(infile))
    {
        fprintf(stderr, "Blad przesylu danych z pliku.\n");
        exit(EXIT_FAILURE);
    }
    MakePic(picIn, picOut, ROWS);

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
            putchar(picOut[row][col]);
        putchar('\n');
    }
}

void zad13(){
    int row, col;
    int picIn[ROWS][COLS];
    char picOut[ROWS][COLS];
    char fileName[81];
    FILE * infile;

    init(picOut, 'S');

    printf("Wpisz nazwe pliku: ");
    scanf("%80s", fileName);
    if ((infile = fopen(fileName, "r")) == NULL)
    {
        fprintf(stderr, "Nie moglem otworzyc pliku.\n");
        exit(EXIT_FAILURE);
    }

    for (row = 0; row < ROWS; row++)
        for (col = 0; col < COLS; col++)
            fscanf(infile, "%d", &picIn[row][col]);
    if (ferror(infile))
    {
        fprintf(stderr, "Blad przysylu danych z pliku.\n");
        exit(EXIT_FAILURE);
    }

    deglitch(picIn);

    MakePic(picIn, picOut, ROWS);

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
            putchar(picOut[row][col]);
        putchar('\n');
    }
}

void init(char arr[][COLS], char ch)
{
    int r, c;
    for (r = 0; r < ROWS; r++)
        for (c = 0; c < COLS; c++)
            arr[r][c] = ch;
}

void MakePic(int data[][COLS], char pic[][COLS], int rows)
{
    int row, col;
    for (row = 0; row < rows; row++)
        for (col = 0; col < COLS; col++)
            pic[row][col] = trans[data[row][col]];
}

void deglitch(int data[][COLS])
{
	double total;
	int count;

	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			total = 0;
			count = 0;
			if (i + 1 < ROWS)
			{
				if (abs(data[i][j] - data[i + 1][j]) <= 1)
					continue;

				total += data[i + 1][j];
				count++;
			}
			if (j + 1 < COLS)
			{
				if (abs(data[i][j] - data[i][j + 1]) <= 1)
					continue;

				total += data[i][j + 1];
				count++;
			}
			if (i > 0)
			{
				if (abs(data[i][j] - data[i - 1][j]) <= 1)
					continue;

				total += data[i - 1][j];
				count++;
			}
			if (j > 0)
			{
				if (abs(data[i][j] - data[i][j - 1]) <= 1)
					continue;

				total += data[i][j - 1];
				count++;
			}

			data[i][j] = (int) rint(total / count);
		}
}
