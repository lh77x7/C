/* cwiczenia 1 - 4 */

/*

1. Napisz program, wypisujący na ekranie Twoje imię i nazwisko: w jednym wierszu
przy pomocy jednego wywołania funkcji printf(), w dwóch osobnych wierszach przy pomocy
dwóch wywołań printf(). Dane wyjściowe powinny wyglądać następująco 
(z wyjątkiem imienia i nazwiska):

Hans Kloss  Piersza instrukcja pisania
Hans        Druga instrukcja pisania
Kloss       Wciaż druga instrukcja pisania
Hans Kloss  Trzecia i czwarta instrukcja pisania

2. Napisz program wyswietlający na ekranie Twoje imię i adres.

3. Napisz program przeliczący Twój wiek w latach na wiek w dniach. Nie uwzględniaj
ułamków lat oraz lat przestępnych.

4. Napisz program, dający w wyniku następujący tekst:

Panie Janie!
Panie Janie!
Rano wstan!

Niech program wykorzystuje dwie dodatkowe (poza main()) funkcje: jedną wyświetlającą
jednokrotnie tekst Panie Janie! i drugą, wyświetlającą ostatni z podanych
wyżej wierszy.

5. Napisz program, który tworzy zmienną całkowitą o nazwie liczba, nadaje jej wartość
10, oblicza podwojoną i podniesioną do kwadratu wartość zmiennej oraz wyświetla
wszystkie trzy liczby odpowiednio je oznaczając.

6. Napisz program wyświetlający następujący tekst:

Usmiech!Usmiech!Usmiech!
Usmiech!Usmiech!
Usmiech!

7. Napisz program, który wywołuje funkcję raz_trzy(). Funkcja ta powinna wyświetlić 
słowo raz w jednej linii, wywołać funkcję dwa(), a potem wyświetlić słowo trzy w 
kolejnej linii. Funkcja dwa() powinna wyświetlić słowo dwa w jednej linii. 
Funkcja main() powinna wyświetlić frazę: zaczynamy: zanim wywoła funkcję raz_trzy(),
a następnie wyświetlić frazę: koniec!. Zatem program powinien wyświetlić następującą
treść:

zaczynamy:
jeden
dwa
trzy
koniec!

*/

#include <stdio.h>
void fun1(void);
void fun2(void);
void usmiech(void);
void raz_trzy(void);
void dwa(void);

int main(void) {
    int wiek, liczba, licznik=0;
    /* cwiczenie 1 */
    printf("\n===cwiczenie 1===\n");
    printf("Hans Kloss\n");
    printf("Hans\nKloss\n");
    printf("Hans"); printf(" Kloss\n");
    printf("=================");
    /* ==================== */

    /* cwiczenie 2 */
    printf("\n===cwiczenie 2===\n");
    printf("Imie: Leszek\n");
    printf("Adres zamieszkania: Sudecka 4/2 48-100 Glubczyce. Polska\n");
    printf("======================");
    /* ==================== */

    /* cwiczenie 3 */
    printf("\n===cwiczenie 3===\n");
    printf("Przeliczenie wielu w latach na wiek w dniach (jako liczba calkowita i bez uwzglednienia przestepnych lat.)\n");
    printf("Moj wiek to 34 lata i 85 dni (stan na 16.11.2021).\n");
    wiek = (34 - 9) * 365 + 85;
    printf("Moj wiek w dniach wynosi %d dni!\n", wiek);
    printf("=====================");
    /* ==================== */

    /* cwiczenie 4 */
    printf("\n===cwiczenie 4===\n");
    printf("\nPanie Janie!\n");
    fun1();
    fun2();
    printf("=====================");
    /* ==================== */    

    /* cwiczenie 5 */
    liczba = 10;
    printf("\n===cwiczenie 5===\n");
    printf("Liczba = %d, podwojona liczba = %d, kwadrat liczby = %d\n", liczba, 2*liczba, liczba*liczba);
    printf("=====================\n");
    /* ==================== */


    /* cwiczenie 6 */
    /*for (int i=3, j=3; i>0, j>0; i--) {
            usmiech();
            j--;
        
    }*/

    printf("\n===cwiczenie 6===\n");
    usmiech(); usmiech(); usmiech(); 
    printf("\n");
    usmiech(); usmiech();
    printf("\n");
    usmiech();
    printf("\n");
    printf("=====================\n");
    /* ===================== */

    /* cwiczenie 7 */

    printf("\n===cwiczenie 7===\n");
    printf("zaczynamy: \n");
    raz_trzy();
    printf("koniec!\n");
    printf("=====================\n");
    /* ======================*/

    return 0;
}

void fun1(void) {
    printf("Panie Janie!\n");
}

void fun2(void) {
    printf("Rano wstan!\n");
}

void usmiech(void) {
    printf("Usmiech! ");
}

void raz_trzy(void) {
    printf("jeden\n");
    dwa();
    printf("trzy\n");    
}

void dwa(void) {
    printf("dwa\n");
}