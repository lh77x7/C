// cwiczenia 1-7 z rodziału 4

/*

1. Napisz program, który pyta o Twoje imię, a następnie nazwisko, po czym wyświetla
je w układzie Nazwisko, Imię.

2. Napisz program, który pyta o Twoje imię, a następnie:

a) wyświetla je w cudzysłowie.

b) wyświetla je w polu o szerokości 20 znaków; w cudzysłów powinno być ujęte całe
pole.

c) wyświetla je przy lewym brzegu pola o szerokości 20 znaków; w cudzysłowach powinno
być ujęte całe pole.

d) wyświetla je w polu o trzy znaki dłuższym niż imię.

3. Napisz program, który pobiera liczbę zmiennoprzecinkową, a następnie wyświetla ją
w postaci ułamka dziesiętnego i w zapisie wykładniczym. Niech wyświetlany tekst 
wygląda następująco:

a) Wpisano liczbę 21.3 lub 2.1e+001.

b) Wpisano liczbę +21.290 lub 2.129E+001.

4. Napisz program, który pobiera Twój wzrost w centymetrach oraz Twoje imię, 
a następnie wyświetla te dane w następującej postaci:

    Robert, masz 1.82 metra wzrostu.

Użyj typu float, a dzielenie wykonaj za pomocą operatora /.

5. Napisz program, który pobiera imię i naziwsko użytkownika, po czym wyświetla:
w pierwszym wierszu imię i nazwisko, a w drugim liczbę liter w imieniu i nazwisku.
Każda z liczb powinna znajdować się pod ostatnią literą odpowiadającego jej wyrazu
tak, jak poniżej:

    Anne Kleine-Nachtmusik
       4                17

6. Napisz program, który przypisuje zmiennej typu double wartość 1.0/3.0, a typu 
float - 1.0/3.0. Każdy wynik ma być wyświetlany trzykrotnie - raz przedstawiając
cztery od prawej, drugi raz 12 cyfr od prawej, trzeci - 16 cyfr od prawej. Niech
program załącza plik nagłówkowy float.h i wyświetla wartości FLT_DIG i DBL_DIG.
Czy wyświetlone wartości 1.0/3.0 są spójne z tymi wartościami?

7. Napisz program pytający użytkownika o liczbę przebytych mil i ilość zużytych
galonów paliwa. Następnie niech program oblicza i wyświetli poziom zużycia w postaci
wskaźnika mile/galon, z jednym miejscem po przecinku. Następnie - korzystając z faktu,
że jeden galon to 3,785 litrów, a jedna mila ok. 1,609 kilometrów - skonwertuj
wskaźnik mile/galon na litry/100 km, w jakim zwykle opisuje się zużycie paliwa 
w Europie. Wynik ma być wyświetlony z jednym miejscem po przecinku (zauważ, że
w Stanach Zjednoczonych podaje się ilość paliwa potrzebną do przycia określonej
odległości, podczas gdy w Europie odwrotnie). Zastosuj stałe (const lub #define)
dla obu składników konwersji.

*/

#include <stdio.h>
#include <string.h>
#include <float.h>

int main(void) {

    /*dane do ćwiczeń*/

    //7.1
    char imie[40], nazwisko[50];  //tablica na imie do 40 znaków, nazwisko do 50 znaków

    //7.2
    // to co 7.1

    //7.3
    float liczba;

    //7.4
    int wzrost;

    //7.5
    char imie2[40], nazwisko2[40];
    int dlImienia, dlNazwiska;

    //7.6
    const float x = 1.0/3.0;
    const double y = 1.0/3.0;
    int floatingRozwijanie = FLT_DIG;
    int doubleRozwijanie = DBL_DIG;

    //7.7
    const float mila = 1.609;
    const float galon = 3.785;
    float ileMil, ileGalonow;

    /*=======*/

    /*rozwiazania*/

    //7.1
    printf("===cwicz 1===\n");
    printf("Podaj imie: ");
    scanf("%s", imie);
    printf("Podaj nazwisko: ");
    scanf("%s", nazwisko);
    printf("Nazywasz sie: %s, %s\n", nazwisko, imie);    
    printf("=============\n");

    //7.2
    
    printf("===cwicz 2===\n");
    printf("\"%s\"\n", imie);
    printf("\"%20s\"\n", imie);
    printf("\"%-20s\"\n", imie);
    printf("\"%s   \"\n", imie);
    printf("=============\n");

    //7.3
    printf("===cwicz 3===\n");
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &liczba);
    printf("Wpisano liczbe %.1f lub %.1e\n", liczba, liczba);
    printf("Wpisano liczbe +%.3f lub %.1e\n", liczba, liczba);
    printf("=============\n");

    //7.4
    printf("===cwicz 4===\n");
    printf("Podaj wzrost w centrymetrach: ");
    scanf("%d", &wzrost);
    printf("Masz %.2f metrow wzrostu.\n", float(wzrost)/100);               //kompilator g++
    printf("=============\n");

    //7.5
    printf("===cwicz 5===\n");
    printf("Podaj imie: ");  scanf("%s", imie2);
    printf("Podaj nazwisko: "); scanf("%s", nazwisko2);
    dlImienia = strlen(imie2);
    dlNazwiska = strlen(nazwisko2);
    printf("%s %s\n", imie2, nazwisko2);
    // rozwiązanie 1. 
    printf("%*d %*d\n", dlImienia, dlImienia, dlNazwiska, dlNazwiska);

    // rozwiazanie 2. 
    printf("%d %*d\n", dlImienia, dlImienia, dlNazwiska);
    printf("=============\n");

    //7.6
    printf("===cwicz 6===\n");
    printf("%.4f - 4 cyfry\n", x);  // 4 cyfry rozszerzenia
    printf("%.12f - 12 cyfr\n", x);  // 12 cyfr rozszerzenia
    printf("%.16f - 16 cyfr\n", x);  // 16 cyfr rozszerzenia
    printf("%.*f - rozwijanie flt\n", floatingRozwijanie, y);
    printf("%.4g - 4 cyfry\n", y);    // 4 cyfry rozszerzenia
    printf("%.12g - 12 cyfr\n", y);   // 12 cyfr rozszerzenia
    printf("%.16f - 16 cyfr\n", y);   // 16 cyfr rozszerzenia
    printf("%.*g\n - rozwijanie dbl\n", doubleRozwijanie, x);
    printf("=============\n");

    //7.7
    printf("===cwicz 7===\n");
    printf("Podaj ile przejechales mil: ");   scanf("%f", &ileMil);
    printf("Podaj ile zuzyles galonow paliwa: "); scanf("%f", &ileGalonow);
    printf("Mile/galon = %.1f (wskaznik w USA)\n", ileMil/ileGalonow);
    printf("Kilometrow: %.1f\n", ileMil*1.609);
    printf("Litrow: %.1f\n", ileGalonow/3.785);
    printf("Litr/Kilometr: %.6f (wskaznik Europa)\n", (ileGalonow/3.785)/(ileMil*1.609)); 
    printf("=============\n");

    return 0;
}